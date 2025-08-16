// Fill out your copyright notice in the Description page of Project Settings.


#include "Tank.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"

#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "GameFramework/FloatingPawnMovement.h"

#include "Kismet/GameplayStatics.h"

#include "DrawDebugHelpers.h"

ATank::ATank()
{
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
    
    MovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MovementComponent"));

}
void ATank::Tick(float DelatTime)
{
    Super::Tick(DelatTime);

    if (PlayerController)
    {
        FHitResult HitResult;
        PlayerController->GetHitResultUnderCursor(ECollisionChannel::ECC_Visibility, false, HitResult);
        HitResult.ImpactPoint;

        RotateTurret(HitResult.ImpactPoint);
            /*DrawDebugSphere(GetWorld(), HitResult.ImpactPoint,
        25,12,FColor::Red,true,-1);*/
    }
}
void ATank::BeginPlay() {
    Super::BeginPlay();

    if (APlayerController* Pc = Cast<APlayerController>(Controller))
    {
        PlayerController = Pc;//Cast<APlayerController>(GetController());
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
            ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(Pc->GetLocalPlayer()))
        {
            // InputMappingContext 추가
            Subsystem->AddMappingContext(DefaultMappingContext, 0);
        }
    }
}
void ATank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // EnhancedInputComponent로 캐스팅
    if (UEnhancedInputComponent* EnhancedInput = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
    {
        // 예: 이동 액션 바인딩
        EnhancedInput->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ATank::GetMove);
        EnhancedInput->BindAction(TurnAction, ETriggerEvent::Triggered, this, &ATank::GetTurn);
        EnhancedInput->BindAction(FireAction, ETriggerEvent::Started, this, &ATank::GetFire);
    }
}
void ATank::GetMove(const FInputActionValue& Value) {
    const float CurrentValue = Value.Get<float>();
    FVector DeltaLocation = FVector::ZeroVector;
    DeltaLocation.X = CurrentValue * Speed * UGameplayStatics::GetWorldDeltaSeconds(this);
    AddActorLocalOffset(DeltaLocation,true);
}
void ATank::GetTurn(const FInputActionValue& Value)
{
    const float CurrentValue = Value.Get<float>();
    FRotator DeltaRotation = FRotator::ZeroRotator;
    DeltaRotation.Yaw = CurrentValue * TurnRate * UGameplayStatics::GetWorldDeltaSeconds(this);
    AddActorLocalRotation(DeltaRotation, true);
}
void ATank::GetFire(const FInputActionValue& Value)
{
    const bool CurrentValue = Value.Get<bool>();
    if (CurrentValue)
    {
        ATank::Fire();
    }
}
void ATank::HandleDestruction() {
    Super::HandleDestruction();
    SetActorHiddenInGame(true);
    SetActorTickEnabled(false);
    bAlive = false;
}