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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = state)
		bool IsAttack = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = state)
		bool IsDead = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = state)
		bool IsDamage = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = state)
		bool IsIdle = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = state)
		bool IsJump = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = state)
		bool IsRun = false;

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
	virtual UMonsterState* HandleInput(UMonsterStateComponent& actorcom, MInput input) override;
	virtual void Update(UMonsterStateComponent& actorcom) override;
	virtual void Enter(UMonsterStateComponent& actorcom) override;
};

UCLASS()
class ROCKMAN_API URunState : public UMonsterState
{
	GENERATED_BODY()
private:
public:
	URunState() {}
	virtual ~URunState() {}
	virtual UMonsterState* HandleInput(UMonsterStateComponent& actorcom, MInput input) override;
	virtual void Update(UMonsterStateComponent& actorcom) override;
	virtual void Enter(UMonsterStateComponent& actorcom) override;
};

UCLASS()
class ROCKMAN_API UAttackState : public UMonsterState
{
	GENERATED_BODY()
private:
public:
	UAttackState() {}
	virtual ~UAttackState() {}
	virtual UMonsterState* HandleInput(UMonsterStateComponent& actorcom, MInput input) override;
	virtual void Update(UMonsterStateComponent& actorcom) override;
	virtual void Enter(UMonsterStateComponent& actorcom) override;
};

UCLASS()
class ROCKMAN_API UIdleState : public UMonsterState
{
	GENERATED_BODY()
private:
public:
	UIdleState() {}
	virtual ~UIdleState() {}
	virtual UMonsterState* HandleInput(UMonsterStateComponent& actorcom, MInput input) override;
	virtual void Update(UMonsterStateComponent& actorcom) override;
	virtual void Enter(UMonsterStateComponent& actorcom) override;
};

UCLASS()
class ROCKMAN_API UDamageState : public UMonsterState
{
	GENERATED_BODY()
private:
public:
	UDamageState() {}
	virtual ~UDamageState() {}
	virtual UMonsterState* HandleInput(UMonsterStateComponent& actorcom, MInput input) override;
	virtual void Update(UMonsterStateComponent& actorcom) override;
	virtual void Enter(UMonsterStateComponent& actorcom) override;
};

UCLASS()
class ROCKMAN_API UDeadState : public UMonsterState
{
	GENERATED_BODY()
private:
public:
	UDeadState() {}
	virtual ~UDeadState() {}
	virtual UMonsterState* HandleInput(UMonsterStateComponent& actorcom, MInput input) override;
	virtual void Update(UMonsterStateComponent& actorcom) override;
	virtual void Enter(UMonsterStateComponent& actorcom) override;
};