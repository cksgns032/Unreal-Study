// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "TankGameMode.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	Health = MaxHealth;

	GetOwner()->OnTakeAnyDamage.AddDynamic(this,&UHealthComponent::DamageTaken);
	TankGamemode = Cast<ATankGameMode>(UGameplayStatics::GetGameMode(this));
	if (TankGamemode)
	{
		UE_LOG(LogTemp, Log, TEXT("Get"));
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("No Get"));
	}
}
void UHealthComponent::DamageTaken(AActor* DamageActor, float Damage, const UDamageType* DamageType, class AController* Instigator, AActor* DamageCauser)
{
	if (Damage <= 0.f )
	{
		return;
	}

	Health -= Damage;
	if (Health <= 0.f && TankGamemode)
	{
		TankGamemode->ActorDied(DamageActor);
	}
	UE_LOG(LogTemp, Warning, TEXT("Health : %f"), Health);
}

// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

