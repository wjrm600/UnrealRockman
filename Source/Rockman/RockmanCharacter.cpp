// Copyright Epic Games, Inc. All Rights Reserved.

#include "RockmanCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "RM_Projectile.h"
#include "RockmanGameMode.h"
#include "ProjectilePoolComponent.h"

void ARockmanCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RemoveInputFromInputBuffer();

	if (bShoot)
	{
		ARM_Projectile* projectileEgg = ProjectilePool->GetDeactiveProjectile();
		if (projectileEgg != nullptr)
		{
			projectileEgg->ProjectileSetLocation(GetActorLocation(), GetActorRotation());
			projectileEgg->SetActive(true);
			bHasUsedTempCommand = false;
			bShoot = false;
		}
	}
}

ARockmanCharacter::ARockmanCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// Don't rotate when the controller rotates.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Create a camera boom attached to the root (capsule)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->SetUsingAbsoluteRotation(true); // Rotation of the character should not affect rotation of boom
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->TargetArmLength = 500.f;
	CameraBoom->SocketOffset = FVector(0.f,0.f,75.f);
	CameraBoom->SetRelativeRotation(FRotator(0.f,180.f,0.f));

	// Create a camera and attach to boom
	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	SideViewCameraComponent->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Face in the direction we are moving..
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->GravityScale = 2.f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.f;
	GetCharacterMovement()->MaxWalkSpeed = 600.f;
	GetCharacterMovement()->MaxFlySpeed = 600.f;

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	//ProjectilePoolComponent 생성
	ProjectilePool = CreateDefaultSubobject<UProjectilePoolComponent>(TEXT("ProjectilePool"));

	//InputSystem
	RemoveInputFromBufferTime = 1.0f;

	TempCommand.sComName = "BlueBall";
	TempCommand.ComInputs.Emplace("D");
	TempCommand.ComInputs.Emplace("D");
	TempCommand.ComInputs.Emplace(TEXT("왼쪽 마우스 버튼"));
	bHasUsedTempCommand = false;
	bShoot = false;
}


// Input
void ARockmanCharacter::AddInputToInputBuffer(FInputInfo inputinfo)
{
	InputInfo.Add(inputinfo);
	//GetWorld()->GetTimerManager().SetTimer(InputBufferTimer, this, &ARockmanCharacter::RemoveInputFromInputBuffer, RemoveInputFromBufferTime, false);
}

void ARockmanCharacter::AddToInputBuffer(FKey key)
{
	//FName KeyName  = InputComponent->GetActionBinding(3).GetActionName();
	FInputInfo CInputInfo;
	CInputInfo.sInputName = key.GetDisplayName().ToString();
	CInputInfo.fTimeStamp = GetWorld()->GetTimeSeconds();
	InputInfo.Emplace(CInputInfo);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, CInputInfo.sInputName);
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::SanitizeFloat(CInputInfo.fTimeStamp));
	CheckInputBufferForCommand();
}

void ARockmanCharacter::RemoveInputFromInputBuffer()
{
	//InputBufferRemove for C++
	float CurrentStampTime = GetWorld()->GetTimeSeconds();
	for (int32 Index = 0; Index < InputInfo.Num(); Index++)
	{
		if (InputInfo.Num() != 0)
		{
			if (CurrentStampTime - 0.5f > InputInfo[Index].fTimeStamp)
			{
				InputInfo.RemoveAt(Index);
				Index = -1;
			}
		}
	}

}

void ARockmanCharacter::CheckInputBufferForCommand()
{
	int32 CorrectCommandCounter = 0;

	for (int32 roofcommandinput = 0; roofcommandinput < TempCommand.ComInputs.Num(); roofcommandinput++)
	{
		for (int32 roofinputbuffer = 0; roofinputbuffer < InputInfo.Num(); roofinputbuffer++)
		{
			if (roofinputbuffer + CorrectCommandCounter < InputInfo.Num())
			{
				if (InputInfo[roofinputbuffer + CorrectCommandCounter].sInputName.Compare(TempCommand.ComInputs[roofcommandinput]) == 0)
				{
					CorrectCommandCounter++;
					if (CorrectCommandCounter == TempCommand.ComInputs.Num())
					{
						StartCommand(TempCommand.sComName);
					}
					break;
				}
				else
				{
					CorrectCommandCounter = 0;
				}
			}
			else
			{
				CorrectCommandCounter = 0;
			}
		}
	}
}

void ARockmanCharacter::StartCommand(FString commandname)
{
	if (commandname.Compare(TempCommand.sComName) == 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("Character Skill : %s."), *commandname)
		bHasUsedTempCommand = true;
	}
}


void ARockmanCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	PlayerInputComponent->BindAction("AddToInputBuffer", IE_Pressed, this, &ARockmanCharacter::AddToInputBuffer);
	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ARockmanCharacter::ShootEgg);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveRight", this, &ARockmanCharacter::MoveRight);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &ARockmanCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ARockmanCharacter::TouchStopped);
}

void ARockmanCharacter::MoveRight(float Value)
{
	// add movement in that direction
	AddMovementInput(FVector(0.f,-1.f,0.f), Value);
}

void ARockmanCharacter::ShootEgg()
{
	bShoot = true;
}

void ARockmanCharacter::TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	// jump on any touch
	TArray<AActor*> AOverlappingActor;
	GetCapsuleComponent()->GetOverlappingActors(AOverlappingActor);
	if (AOverlappingActor.IsValidIndex(0))
	{
		float fVecDot = FVector::DotProduct(GetActorForwardVector(), AOverlappingActor[0]->GetActorForwardVector());
		if (FMath::IsNearlyEqual(fabsf(fVecDot), float(1.0), float(0.000001)))
		{
			Jump();
		}
	}
	else
	{
		Jump();
	}
}

void ARockmanCharacter::TouchStopped(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	StopJumping();
}

