// Fill out your copyright notice in the Description page of Project Settings.


#include "Monster_Base.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMonster_Base::AMonster_Base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	/*
	ConstructorHelpers::FObjectFinder<UAnimMontage> DAMAGE_MONTAGE(TEXT("AnimMontage'/Game/SkeletonCrew/Skeleton_Swordman/Animations/Skeleton_Swordman_Hit_Front_Montage.Skeleton_Swordman_Hit_Front_Montage'"));
	if (DAMAGE_MONTAGE.Succeeded())
	{
		IsDamageMontage = DAMAGE_MONTAGE.Object;
	}
	*/
}

// Called when the game starts or when spawned
void AMonster_Base::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMonster_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsDead)
	{
		FTimerHandle WaitTimer;
		float WaitTime = 2.f;
		GetWorld()->GetTimerManager().SetTimer(WaitTimer, FTimerDelegate::CreateLambda([&]() 
		{
			GetMesh()->SetVisibility(false);
		}), WaitTime, false);
	}
}

void AMonster_Base::MonsterAttack()
{
	IsAttack = true;
	float TraceDistance = 100.f;
	FHitResult HitResult;
	FVector TraceStartVec = GetMesh()->GetSocketLocation(FName("spine_01"));
	FVector TraceEndVec = GetActorRightVector() * TraceDistance;
	TraceStartVec += TraceEndVec;
	if (GetWorld()->SweepSingleByChannel(HitResult, TraceStartVec, TraceEndVec, FQuat::Identity, ECollisionChannel::ECC_EngineTraceChannel1, FCollisionShape::MakeSphere(10.f)))
	{
		UGameplayStatics::ApplyDamage(HitResult.GetActor(), 10.f, NULL, GetOwner(), NULL);
	}
}

// Called to bind functionality to input
void AMonster_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float AMonster_Base::TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser)
{
	const float ResultDamage = Super::TakeDamage(DamageAmount, DamageEvent, EventInstigator, DamageCauser);

	HP -= DamageAmount;

	if (HP <= 0)
	{
		IsDead = true;
		GetMesh()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	else
	{
		IsDamage = true;
		//GetMesh()->GetAnimInstance()->Montage_Play(IsDamageMontage.GetDefaultObject());
	}
	return ResultDamage;
}