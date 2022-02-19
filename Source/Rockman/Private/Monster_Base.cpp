// Fill out your copyright notice in the Description page of Project Settings.


#include "Monster_Base.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/StreamableManager.h"
#include "Components/CapsuleComponent.h"
#include "MonsterStateComponent.h"
#include "MonsterAIController.h"

// Sets default values
AMonster_Base::AMonster_Base()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StateCom = CreateDefaultSubobject<UMonsterStateComponent>(TEXT("State"));
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

	if (!IsDamageMontage.IsValid())
	{
		FStreamableManager AssetLoader;
		FStringAssetReference AssetToLoad;
		AssetToLoad = IsDamageMontage.ToSoftObjectPath();
		AssetLoader.RequestAsyncLoad(AssetToLoad);
	}
	if (!IsAttackMontage.IsValid())
	{
		FStreamableManager AssetLoader;
		FStringAssetReference AssetToLoad;
		AssetToLoad = IsAttackMontage.ToSoftObjectPath();
		AssetLoader.RequestAsyncLoad(AssetToLoad);
	}
}

// Called every frame
void AMonster_Base::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (StateCom->IsDead)
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
	StateCom->HandleInput(MInput::ATTACK);
	GetMesh()->GetAnimInstance()->Montage_Play(IsAttackMontage.Get());
	float TraceDistance = 100.f;
	FHitResult HitResult;
	FVector TraceStartVec = GetMesh()->GetSocketLocation(FName("spine_01"));
	FVector TraceEndVec = GetActorRightVector() * TraceDistance;
	TraceStartVec += TraceEndVec;
	if (GetWorld()->SweepSingleByChannel(HitResult, TraceStartVec, TraceEndVec, FQuat::Identity, ECollisionChannel::ECC_EngineTraceChannel1, FCollisionShape::MakeSphere(10.f)))
	{
		UGameplayStatics::ApplyDamage(HitResult.GetActor(), 10.f, NULL, GetOwner(), NULL);
	}
	Cast<AMonsterAIController>(Controller)->FUNC_BTBBChange.Broadcast();
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
		StateCom->HandleInput(MInput::DEAD);
		SetActorEnableCollision(false);
		GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	else
	{
		StateCom->HandleInput(MInput::DAMAGE);
		GetMesh()->GetAnimInstance()->Montage_Play(IsDamageMontage.Get());
	}
	Cast<AMonsterAIController>(Controller)->FUNC_BTBBChange.Broadcast();
	return ResultDamage;
}

FString AMonster_Base::GetTestName()
{
	return IMyTempInterface::GetTestName();
}

void AMonster_Base::IAttack()
{
	GEngine->AddOnScreenDebugMessage(-1, 1, FColor::Green, FString("Interface IAttack Call!"));
}