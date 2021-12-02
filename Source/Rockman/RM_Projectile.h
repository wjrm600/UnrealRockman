// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RM_Projectile.generated.h"

class UProjectileMovementComponent;
class UProjectilePoolComponent;
UCLASS()
class ROCKMAN_API ARM_Projectile : public AActor
{
	GENERATED_BODY()
	
	void NotifyHit(class UPrimitiveComponent * MyComp,
			AActor * Other,
			class UPrimitiveComponent * OtherComp,
			bool bSelfMoved,
			FVector HitLocation,
			FVector HitNormal,
			FVector NormalImpulse,
			const FHitResult & Hit) override;

	FVector ShootStartLocation;
public:	
	// Sets default values for this actor's properties
	ARM_Projectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void BeginDestroy() override;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void ProjectileSetLocation(FVector vec, FRotator rot);

	UPROPERTY(VisibleAnywhere, Category = movement)
		UProjectileMovementComponent* ProMoveCom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = projectileproperty)
		bool bActive = true;

	bool GetActive();

	UFUNCTION(BlueprintCallable)
	void SetActive(bool active);

	UPROPERTY()
		UProjectilePoolComponent* PoolCom;

	bool CheckDistanceToCharacter();
};
