// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/Actor.h"
#include "NewActor.generated.h"

UCLASS()
class SIMPLEUNREAL_API ANewActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ANewActor();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BaseMesh;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float Amplitude = 50.0f;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float Frequency = 20.0f;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FVector InitialLocation;
};
