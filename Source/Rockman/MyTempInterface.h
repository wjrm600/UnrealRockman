#pragma once
#include "MyTempInterface.generated.h"

UINTERFACE(Blueprintable)
class ROCKMAN_API UMyTempInterface :public UInterface
{
	GENERATED_BODY()
};

class ROCKMAN_API IMyTempInterface
{
	GENERATED_BODY()

public:
	virtual FString GetTestName();

	virtual void IAttack();
};