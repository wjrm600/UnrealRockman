// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "MonsterAIController.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBehaviorTreeBlackBoardChange);
/**
 * 
 */
UCLASS()
class ROCKMAN_API AMonsterAIController : public AAIController
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TAssetPtr<class UBehaviorTree> e_BehaviorTree;

	const FName Has_Line_Of_Sight = TEXT("HasLineOfSight");
	const FName Enemy_Actor = TEXT("EnemyActor");
	const FName IsDead = TEXT("IsDead");
	const FName IsAttack = TEXT("IsAttack");
	const FName IsDamage = TEXT("IsDamage");

	virtual void OnPossess(APawn* InPawn) override;

	UFUNCTION()
	void SetAttackBlackBoard();

	UFUNCTION()
	void SetDamageBlackBoard();

	UFUNCTION()
	void SetDeadBlackBoard();
public:
	UPROPERTY(BlueprintAssignable, VisibleAnywhere, BlueprintCallable, Category = "Event")
		FBehaviorTreeBlackBoardChange FUNC_BTBBChange;

	AMonsterAIController();
};
