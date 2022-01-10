// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Monster_Base.generated.h"

UCLASS()
class ROCKMAN_API AMonster_Base : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMonster_Base();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY()
	UAnimMontage* IsDamageMontage;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = profile)
		int32 HP = 300;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = state)
		bool IsAttack = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = state)
		bool IsDead = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = state)
		bool IsDamage = false;

	UFUNCTION(BlueprintCallable, Category = Movement)
		void MonsterAttack();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, class AController* EventInstigator, AActor* DamageCauser) override;
};
