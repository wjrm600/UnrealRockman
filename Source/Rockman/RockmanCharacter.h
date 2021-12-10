// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "RockmanCharacter.generated.h"

class ARM_Projectile;
class UInventoryComponent;
class AInventoryItem;

USTRUCT(BlueprintType)
struct FInputInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
		FString sInputName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
		float fTimeStamp;
};

USTRUCT(BlueprintType)
struct FCommand
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
		FString sComName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
		TArray<FString> ComInputs;
};

UCLASS(config=Game)
class ARockmanCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Side view camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* SideViewCameraComponent;

	/** Camera boom positioning the camera beside the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
		class UProjectilePoolComponent* ProjectilePool;
	//Bridge BluePrint Class Temp
	UPROPERTY()
	TSubclassOf<AActor> Bridge_BP_Class;
	
	//Inventory Category
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Inventory, meta = (AllowPrivateAccess = "true"))
	UInventoryComponent* Inventory;

protected:

	/** Called for side to side input */
	void MoveRight(float Val);

	void ShootEgg();

	/** Handle touch inputs. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handle touch stop event. */
	void TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location);

	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface
public:
	virtual void Tick(float DeltaTime) override;

	ARockmanCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = profile)
		FName CharName = "Rock";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = profile)
		int32 HP = 100;

	/** Returns SideViewCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetSideViewCameraComponent() const { return SideViewCameraComponent; }
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }


	//InputBufferSystem
	UFUNCTION(BlueprintCallable)
		void AddInputToInputBuffer(FInputInfo inputinfo);

	void AddToInputBuffer(FKey key);

	UFUNCTION(BlueprintCallable)
		void RemoveInputFromInputBuffer();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
		TArray<FInputInfo> InputInfo;

	FTimerHandle InputBufferTimer;

	float RemoveInputFromBufferTime;

	UFUNCTION(BlueprintCallable)
		void CheckInputBufferForCommand();

	UFUNCTION(BlueprintCallable)
		void StartCommand(FString commandname);

	FCommand TempCommand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Commands")
		bool bHasUsedTempCommand;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shoot")
		bool bShoot;
	//Inventory Category
	UFUNCTION(BlueprintCallable)
		void DropItem();
	UFUNCTION(BlueprintCallable)
		void TakeItem(AInventoryItem* _item);

	
};
