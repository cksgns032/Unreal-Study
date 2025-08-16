// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TEST_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere)
	float MaxHealth = 100.f;
	float Health = 0.f;
	
	UFUNCTION()
	// 데미지 입은 액터, 데미지, 데미지 타입, 데미지 관리 컨트롤러(null가능), 데미지 발생시킨 원인
	void DamageTaken(AActor* DamageActor,float Damage, const UDamageType* DamageType, class AController* Instigator, AActor* DamageCauser);

	class ATankGameMode* TankGamemode;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
