#pragma once

#include "CoreMinimal.h"
#include "MonsterState.generated.h"

class UMonsterStateComponent;

UENUM()
enum MInput
{
	IDLE,
	ATTACK,
	DAMAGE,
	JUMP,
	CHASE,
	SEARCH,
	DEAD
};

UCLASS(abstract)
class ROCKMAN_API UMonsterState : public UObject
{
	GENERATED_BODY()
public:
	UMonsterState() {}
	virtual ~UMonsterState() {}
	virtual UMonsterState* HandleInput(UMonsterStateComponent& actorcom, MInput input) PURE_VIRTUAL(UMonsterState::HandleInput, return this;);
	virtual void Update(UMonsterStateComponent& actorcom) {}
	virtual void Enter(UMonsterStateComponent& actorcom) {}
	virtual void Exit(UMonsterStateComponent& actorcom) {}
};