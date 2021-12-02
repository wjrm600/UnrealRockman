// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectilePoolComponent.h"
#include "RM_Projectile.h"

// Sets default values for this component's properties
UProjectilePoolComponent::UProjectilePoolComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UProjectilePoolComponent::BeginPlay()
{
	Super::BeginPlay();

	SetupPool();
}


// Called every frame
void UProjectilePoolComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

ARM_Projectile * UProjectilePoolComponent::GetDeactiveProjectile()
{
	if (ProjectilePool.IsEmpty())
	{
		SetupPool();
	}
	ARM_Projectile* Projectile;
	ProjectilePool.Dequeue(Projectile);
	return Projectile;
} 

void UProjectilePoolComponent::SetupPool()
{
	UWorld* World = GetWorld();
	for (int PoolCount = 0; PoolCount < PoolSize; PoolCount++)
	{
		ARM_Projectile* ProjectileActor = World->SpawnActor<ARM_Projectile>(PoolProjectileSubclass, FVector().ZeroVector, FRotator().ZeroRotator);
		ProjectileActor->PoolCom = this;
		ProjectilePool.Enqueue(ProjectileActor);
	}
}

void UProjectilePoolComponent::ActiveEnqueueProjectile(ARM_Projectile* egg)
{
	ProjectilePool.Enqueue(egg);
}

