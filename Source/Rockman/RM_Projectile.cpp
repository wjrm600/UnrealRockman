// Fill out your copyright notice in the Description page of Project Settings.


#include "RM_Projectile.h"
#include "Engine/Classes/GameFramework/ProjectileMovementComponent.h"
#include "ProjectilePoolComponent.h"

// Sets default values
ARM_Projectile::ARM_Projectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ProMoveCom = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProMoveCom->InitialSpeed = 600.f;
	ProMoveCom->MaxSpeed = 1000.f;
}

// Called when the game starts or when spawned
void ARM_Projectile::BeginPlay()
{
	Super::BeginPlay();
	ProMoveCom->SetActive(false);
	SetActorTickEnabled(false);
}

void ARM_Projectile::BeginDestroy()
{
	Super::BeginDestroy();
}

void ARM_Projectile::ProjectileSetLocation(FVector vec, FRotator rot)
{
	SetActorLocation(vec);
	SetActorRotation(rot);
	ShootStartLocation = vec;
	ProMoveCom->Velocity = rot.Vector() * ProMoveCom->InitialSpeed;
	ProMoveCom->SetActive(true);
}

bool ARM_Projectile::GetActive()
{
	return bActive;
}

void ARM_Projectile::SetActive(bool active)
{
	bActive = active;
	ProMoveCom->SetActive(active, active);
	SetActorHiddenInGame(!active);
	SetActorTickEnabled(active);
	if (!bActive)
	{
		//SetActive(false)일때
		PoolCom->ActiveEnqueueProjectile(this);
	}
	else
	{
		//SetActive(true)일때
	}
}

bool ARM_Projectile::CheckDistanceToCharacter()
{
	float Dis = (FVector::Distance(GetActorLocation(), ShootStartLocation));
	if ( Dis > 800.f)
	{
		return true;
	}
	return false;
}

void ARM_Projectile::NotifyHit(UPrimitiveComponent * MyComp, AActor * Other, UPrimitiveComponent * OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult & Hit)
{
	SetActive(false);
}

// Called every frame
void ARM_Projectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (CheckDistanceToCharacter())
	{
		SetActive(false);
	}
}
