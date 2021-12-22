// Fill out your copyright notice in the Description page of Project Settings.


#include "NewActor.h"

// Sets default values
ANewActor::ANewActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMesh");
	SetRootComponent(BaseMesh);
}

// Called when the game starts or when spawned
void ANewActor::BeginPlay()
{
	Super::BeginPlay();
	PrintTypes();
}

// Called every frame
void ANewActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ANewActor::PrintTypes()
{
	UE_LOG(LogTemp, Display, TEXT("Porno actor fuck begin"));
	UE_LOG(LogTemp, Warning, TEXT("Porno actor fuck begin"));
	UE_LOG(LogTemp, Error, TEXT("Porno actor fuck begin"));
}

