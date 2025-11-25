// Fill out your copyright notice in the Description page of Project Settings.


#include "FPS/FPS_Character.h"
#include "UFPS_CharacterMovementComponent.h"

// Sets default values
AFPS_Character::AFPS_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	OurMovementComponent = CreateDefaultSubobject<UUFPS_CharacterMovementComponent>(TEXT("CustomMovementComponent"));
	OurMovementComponent->UpdatedComponent = RootComponent;
	MainInputMap = nullptr;

}

// Called when the game starts or when spawned
void AFPS_Character::BeginPlay()
{
	Super::BeginPlay();
	
	APlayerController* PlayerController = Cast<APlayerController>(GetController());

	if (Controller) {
		UEnhancedInputLocalPlayerSubsystem* SubSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());

		if (SubSystem) {
			SubSystem->ClearAllMappings();

			if (MainInputMap) {
				SubSystem->AddMappingContext(MainInputMap, 0);
			}
		}
	}
}

// Called every frame
void AFPS_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AFPS_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (EnhancedInput) {
		EnhancedInput->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AFPS_Character::MovePlayer);
		EnhancedInput->BindAction(IA_Look, ETriggerEvent::Triggered, this, &AFPS_Character::RotatePlayer);
		EnhancedInput->BindAction(IA_Shoot, ETriggerEvent::Triggered, this, &AFPS_Character::PlayerShoot);
	}
}

UPawnMovementComponent* AFPS_Character::GetMovementComponent() const
{
	return OurMovementComponent;
}

void AFPS_Character::MovePlayer(const FInputActionInstance& Instance)
{

}

void AFPS_Character::RotatePlayer(const FInputActionInstance& Instance)
{

}

void AFPS_Character::PlayerShoot(const FInputActionInstance& Instance)
{

}
