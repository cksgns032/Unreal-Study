// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BasePawn.h"
#include "InputActionValue.h"
#include "Tank.generated.h"

/**
 * 
 */
class UInputMappingContext;
class UInputAction;
class UFloatingPawnMovement;

UCLASS()
class TEST_API ATank : public ABasePawn
{
	GENERATED_BODY()
	
public:
	ATank();

	virtual void Tick(float DeltaTime) override;

	void HandleDestruction();

	APlayerController* GetTankPlayerController() const { return PlayerController; }

	bool bAlive = true;

protected:
	virtual void BeginPlay() override;
	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent);
public:
	UPROPERTY(EditAnyWhere, Category = "Input")
	class UInputMappingContext* DefaultMappingContext;
	UPROPERTY(EditAnyWhere, Category = "Input")
	UInputAction* MoveAction;
	UPROPERTY(EditAnyWhere, Category = "Input")
	UInputAction* TurnAction;
	UPROPERTY(EditAnyWhere, Category = "Input")
	UInputAction* FireAction;
	UPROPERTY(VisibleAnywhere, Category = "Movement")
	UFloatingPawnMovement* MovementComponent;
	
private:
	UPROPERTY(EditAnywhere, Category = "Movement")
	float Speed = 200.f;
	UPROPERTY(EditAnywhere, Category = "Movement")
	float TurnRate = 45.f;
	void GetMove(const FInputActionValue& value);
	void GetTurn(const FInputActionValue& value);
	void GetFire(const FInputActionValue& value);

	APlayerController* PlayerController;

private:
	UPROPERTY(VisibleAnyWhere, Category = "Components");
	class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnyWhere, Category = "Components");
	class UCameraComponent* Camera;
};
