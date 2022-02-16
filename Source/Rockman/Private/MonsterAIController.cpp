// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterAIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Monster_Base.h"
#include "MonsterStateComponent.h"
#include "Perception/AIPerceptionComponent.h"

AMonsterAIController::AMonsterAIController()
{
}

void AMonsterAIController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	RunBehaviorTree(e_BehaviorTree.Get());
	FUNC_BTBBChange.AddDynamic(this, &AMonsterAIController::SetAttackBlackBoard);
	FUNC_BTBBChange.AddDynamic(this, &AMonsterAIController::SetDamageBlackBoard);
	FUNC_BTBBChange.AddDynamic(this, &AMonsterAIController::SetDeadBlackBoard);

	//PerceptionComponent->OnTargetPerceptionUpdated.
}

void AMonsterAIController::SetAttackBlackBoard()
{
	APawn* OwnerMonster = GetPawn();
	if (OwnerMonster != nullptr)
	{
		Blackboard->SetValueAsBool(IsAttack, Cast<AMonster_Base>(OwnerMonster)->StateCom->IsAttack);
	}
}

void AMonsterAIController::SetDamageBlackBoard()
{
	APawn* OwnerMonster = GetPawn();
	if (OwnerMonster != nullptr)
	{
		Blackboard->SetValueAsBool(IsDamage, Cast<AMonster_Base>(OwnerMonster)->StateCom->IsDamage);
	}
}

void AMonsterAIController::SetDeadBlackBoard()
{
	APawn* OwnerMonster = GetPawn();
	if (OwnerMonster != nullptr)
	{
		Blackboard->SetValueAsBool(IsDead, Cast<AMonster_Base>(OwnerMonster)->StateCom->IsDead);
	}
}