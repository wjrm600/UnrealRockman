// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterStateComponent.h"

// Sets default values for this component's properties
UMonsterStateComponent::UMonsterStateComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	// ...
}


// Called when the game starts
void UMonsterStateComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	state_ = NewObject<UIdleState>();
}


// Called every frame
void UMonsterStateComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	if (state_ != nullptr)
	{
		Update();
	}
}

UMonsterState* UAttackState::HandleInput(UMonsterStateComponent& actorcom, MInput input)
{
	if (input == IDLE)
	{
		return NewObject<UIdleState>();
	}
	else if (input == ATTACK)
	{
	}
	else if (input == DAMAGE)
	{
		return NewObject<UDamageState>();
	}
	else if (input == JUMP)
	{
	}
	else if (input == CHASE)
	{
	}
	else if (input == SEARCH)
	{
	}
	else if (input == DEAD)
	{
		return NewObject<UDeadState>();
	}
	return this;
}

UMonsterState* UJumpState::HandleInput(UMonsterStateComponent& actorcom, MInput input)
{
	if (input == IDLE)
	{
		return NewObject<UIdleState>();
	}
	else if (input == ATTACK)
	{
	}
	else if (input == DAMAGE)
	{
		return NewObject<UDamageState>();
	}
	else if (input == JUMP)
	{
	}
	else if (input == CHASE)
	{

	}
	else if (input == SEARCH)
	{

	}
	else if (input == DEAD)
	{
		return NewObject<UDeadState>();
	}
	return this;
}

UMonsterState* URunState::HandleInput(UMonsterStateComponent& actorcom, MInput input)
{
	if (input == IDLE)
	{
		return NewObject<UIdleState>();
	}
	else if (input == ATTACK)
	{
		return NewObject<UAttackState>();
	}
	else if (input == DAMAGE)
	{
		return NewObject<UDamageState>();
	}
	else if (input == JUMP)
	{
		return NewObject<UJumpState>();
	}
	else if (input == CHASE)
	{
		return NewObject<URunState>();
	}
	else if (input == SEARCH)
	{
		return NewObject<URunState>();
	}
	else if (input == DEAD)
	{
		return NewObject<UDeadState>();
	}
	return this;
}

UMonsterState* UIdleState::HandleInput(UMonsterStateComponent& actorcom, MInput input)
{
	if (input == IDLE)
	{
	}
	else if (input == ATTACK)
	{
		UE_LOG(LogTemp, Warning, TEXT("Now Attack State"));
		return NewObject<UAttackState>();
	}
	else if (input == DAMAGE)
	{
		return NewObject<UDamageState>();
	}
	else if (input == JUMP)
	{
		return NewObject<UJumpState>();
	}
	else if (input == CHASE)
	{
		return NewObject<URunState>();
	}
	else if (input == SEARCH)
	{
		return NewObject<URunState>();
	}
	else if (input == DEAD)
	{
		return NewObject<UDeadState>();
	}
	return this;
}

UMonsterState* UDamageState::HandleInput(UMonsterStateComponent& actorcom, MInput input)
{
	if (input == IDLE)
	{
		return NewObject<UIdleState>();
	}
	else if (input == ATTACK)
	{
	}
	else if (input == DAMAGE)
	{
		return NewObject<UDamageState>();
	}
	else if (input == JUMP)
	{
		return NewObject<UJumpState>();
	}
	else if (input == CHASE)
	{
		return NewObject<URunState>();
	}
	else if (input == SEARCH)
	{
		return NewObject<URunState>();
	}
	else if (input == DEAD)
	{
		return NewObject<UDeadState>();
	}
	return this;
}

UMonsterState* UDeadState::HandleInput(UMonsterStateComponent& actorcom, MInput input)
{
	return this;
}

void UAttackState::Update(UMonsterStateComponent& actorcom)
{
}

void UJumpState::Update(UMonsterStateComponent& actorcom)
{
}

void URunState::Update(UMonsterStateComponent& actorcom)
{
}

void UIdleState::Update(UMonsterStateComponent& actorcom)
{
}

void UDamageState::Update(UMonsterStateComponent& actorcom)
{
}

void UDeadState::Update(UMonsterStateComponent& actorcom)
{
}

void UAttackState::Enter(UMonsterStateComponent& actorcom)
{
	actorcom.IsAttack = true;
}

void UJumpState::Enter(UMonsterStateComponent& actorcom)
{
	actorcom.IsJump = true;
}

void URunState::Enter(UMonsterStateComponent& actorcom)
{
	actorcom.IsRun = true;
}

void UIdleState::Enter(UMonsterStateComponent& actorcom)
{
	actorcom.IsIdle = true;
}

void UDamageState::Enter(UMonsterStateComponent& actorcom)
{
	actorcom.IsDamage = true;
}

void UDeadState::Enter(UMonsterStateComponent& actorcom)
{
	actorcom.IsDead = true;
}