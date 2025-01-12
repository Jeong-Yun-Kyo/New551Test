// Fill out your copyright notice in the Description page of Project Settings.


#include "My551NewActor.h"


// Sets default values
AMy551NewActor::AMy551NewActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMy551NewActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMy551NewActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	NewVector.X -= 1;
	SetActorLocation(NewVector);
}

