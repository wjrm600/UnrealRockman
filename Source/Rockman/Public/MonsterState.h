#pragma once

#include "CoreMinimal.h"
#include "MonsterState.generated.h"

class StandState;
class JumpState;
class RunState;
class UMonsterStateComponent;

UENUM()
enum MInput
{
	PRESS_UP,
	RELEASE_UP,
	PRESS_DOWN,
	RELEASE_DOWN,
	PRESS_LEFT,
	RELEASE_LEFT,
	PRESS_RIGHT,
	RELEASE_RIGHT,
	PRESS_MLEFT,
	RELEASE_MLEFT,
	PRESS_MRIGHT,
	RELEASE_MRIGHT
};

UCLASS()
class UMonsterState : public UObject
{
	GENERATED_BODY()
public:
	UMonsterState() {}
	virtual ~UMonsterState() {}
	virtual UMonsterState* HandleInput(UMonsterStateComponent& actorcom, MInput input) { return this; }
	virtual void Update(UMonsterStateComponent& actorcom) {}
	virtual void Enter(UMonsterStateComponent& actorcom) {}
};