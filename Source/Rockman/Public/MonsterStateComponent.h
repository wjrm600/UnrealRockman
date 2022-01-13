// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MonsterState.h"
#include "MonsterStateComponent.generated.h"

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

class JumpState : public UMonsterState
{
private:
public:
	JumpState() {}
	virtual ~JumpState() {}
	virtual UMonsterState* HandleInput(UMonsterStateComponent& actorcom, MInput input)
	{
		return this;
	}
	virtual void Update(UMonsterStateComponent& actorcom)
	{

	}
	virtual void Enter(UMonsterStateComponent& actorcom)
	{

	}
};

class RunState : public UMonsterState
{
private:
public:
	RunState() {}
	virtual ~RunState() {}
	virtual UMonsterState* HandleInput(UMonsterStateComponent& actorcom, MInput input)
	{
		return this;
	}
	virtual void Update(UMonsterStateComponent& actorcom)
	{

	}
	virtual void Enter(UMonsterStateComponent& actorcom)
	{

	}
};

class StandState : public UMonsterState
{
private:
public:
	StandState() {}
	virtual ~StandState() {}
	virtual UMonsterState* HandleInput(UMonsterStateComponent& actorcom, MInput input)
	{
		if (input == PRESS_UP)
		{
			return NewObject<JumpState>();
		}
		if (input == PRESS_RIGHT)
		{
			return NewObject<RunState>();
		}
		if (input == PRESS_LEFT)
		{
			return NewObject<RunState>();
		}
		return this;
	}

	virtual void Update(UMonsterStateComponent& actorcom)
	{

	}
	virtual void Enter(UMonsterStateComponent& actorcom)
	{

	}
};