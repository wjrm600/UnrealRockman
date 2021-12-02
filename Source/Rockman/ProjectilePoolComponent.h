// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ProjectilePoolComponent.generated.h"

class ARM_Projectile;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ROCKMAN_API UProjectilePoolComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UProjectilePoolComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, Category = Pool)
		int32 PoolSize = 10;

	UPROPERTY(EditAnywhere, Category = Pool)
		TSubclassOf<ARM_Projectile> PoolProjectileSubclass;

	TQueue<ARM_Projectile*> ProjectilePool;

	UFUNCTION()
		ARM_Projectile* GetDeactiveProjectile();

	void SetupPool();

	void ActiveEnqueueProjectile(ARM_Projectile* egg);
};
