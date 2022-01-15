// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MonsterState.h"
#include "MonsterStateComponent.generated.h"

class UStandState;

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ROCKMAN_API UMonsterStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UMonsterStateComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UMonsterState* state_;

	UFUNCTION(BlueprintCallable)
	void HandleInput(MInput input)
	{
		UMonsterState* state = state_->HandleInput(*this, input);
		state_ = state;

		state_->Enter(*this);
	}

	void Update()
	{
		state_->Update(*this);
	}
};

UCLASS()
class ROCKMAN_API UJumpState : public UMonsterState
{
	GENERATED_BODY()
private:
public:
	UJumpState() {}
	virtual ~UJumpState() {}
	virtual UMonsterState* HandleInput(UMonsterStateComponent& actorcom, MInput input) override
	{
		return this;
	}
	virtual void Update(UMonsterStateComponent& actorcom) override
	{
	}
	virtual void Enter(UMonsterStateComponent& actorcom) override
	{

	}
};

UCLASS()
class ROCKMAN_API URunState : public UMonsterState
{
	GENERATED_BODY()
private:
public:
	URunState() {}
	virtual ~URunState() {}
	virtual UMonsterState* HandleInput(UMonsterStateComponent& actorcom, MInput input) override
	{
		return this;
	}
	virtual void Update(UMonsterStateComponent& actorcom) override
	{

	}
	virtual void Enter(UMonsterStateComponent& actorcom) override
	{

	}
};

UCLASS()
class ROCKMAN_API UAttackState : public UMonsterState
{
	GENERATED_BODY()
private:
public:
	UAttackState() {}
	virtual ~UAttackState() {}
	virtual UMonsterState* HandleInput(UMonsterStateComponent& actorcom, MInput input) override
	{
		UE_LOG(LogTemp, Warning, TEXT("Now Attack State"));
		return this;
	}

	virtual void Update(UMonsterStateComponent& actorcom) override;
	virtual void Enter(UMonsterStateComponent& actorcom) override
	{

	}
};

UCLASS()
class ROCKMAN_API UStandState : public UMonsterState
{
	GENERATED_BODY()
private:
public:
	UStandState() {}
	virtual ~UStandState() {}
	virtual UMonsterState* HandleInput(UMonsterStateComponent& actorcom, MInput input) override
	{
		if (input == ATTACK)
		{
			UE_LOG(LogTemp, Warning, TEXT("Now Stand State"));
			return NewObject<UAttackState>();
		}
		if (input == CHASE)
		{
			return NewObject<URunState>();
		}
		if (input == SEARCH)
		{
			return NewObject<URunState>();
		}
		return this;
	}

	virtual void Update(UMonsterStateComponent& actorcom) override
	{

	}
	virtual void Enter(UMonsterStateComponent& actorcom) override
	{

	}
};