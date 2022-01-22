// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Monster_Base.generated.h"

class UMonsterStateComponent;

UCLASS()
class ROCKMAN_API AMonster_Base : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMonster_Base();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = State, meta = (AllowPrivateAccess = "true"))
		class UMonsterStateComponent* StateCom;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Montage")
		TAssetPtr<UAnimMontage> IsDamageMontage;

	UPROPERTY(EditAnywhere, Category = "Montage")
		TAssetPtr<UAnimMontage> IsAttackMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = profile)
		int32 HP = 300;

	UFUNCTION(BlueprintCallable, Category = Movement)
		void MonsterAttack();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
};
