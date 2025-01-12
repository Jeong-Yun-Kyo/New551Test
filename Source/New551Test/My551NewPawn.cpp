// Fill out your copyright notice in the Description page of Project Settings.


#include "My551NewPawn.h"
#include "Camera/CameraComponent.h"

// Sets default values
AMy551NewPawn::AMy551NewPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AutoPossessPlayer = EAutoReceiveInput::Player0;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootCompo"));

	UCameraComponent* OurCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("OurCam"));
	OurCamera->SetupAttachment(RootComponent);
	OurCamera->SetRelativeLocation(FVector(-200.0f, 0.0f, 200.0f));
	OurCamera->SetRelativeRotation(FRotator(-25.0f, 0.0f, 0.0f));

	OurVisibleComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OurVisibleComp"));
	OurVisibleComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AMy551NewPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMy551NewPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//Moving Tick
	float CurrentScale = OurVisibleComponent->GetComponentScale().X;
	if (bGrowing) {
		CurrentScale += DeltaTime;
	}
	else {
		CurrentScale -= DeltaTime * 0.5f;
	}
	CurrentScale = FMath::Clamp(CurrentScale, 1.0f, 2.0f);
	OurVisibleComponent->SetWorldScale3D(FVector(CurrentScale));

	if (!CurVelo.IsZero()) {
		InputTime += DeltaTime;
		FVector NewLocation = GetActorLocation() + (CurVelo * DeltaTime * (InputTime <= 1.0f ? 1.0f : 3.0f));
		SetActorLocation(NewLocation);
	}
	else {
		InputTime = 0.0f;
	}
}

// Called to bind functionality to input
void AMy551NewPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Moving Binding
	PlayerInputComponent->BindAction("Grow", IE_Pressed, this, &AMy551NewPawn::StartGrowing);
	PlayerInputComponent->BindAction("Grow", IE_Released, this, &AMy551NewPawn::StopGrowing);

	PlayerInputComponent->BindAxis("XMove", this, &AMy551NewPawn::Move_XAxis);
	PlayerInputComponent->BindAxis("YMove", this, &AMy551NewPawn::Move_YAxis);
}

//Moving Function
void AMy551NewPawn::Move_XAxis(float AxisValue) {
	CurVelo.X = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 50.0f;
}

void AMy551NewPawn::Move_YAxis(float AxisValue) {
	CurVelo.Y = FMath::Clamp(AxisValue, -1.0f, 1.0f) * 50.0f;
}

void AMy551NewPawn::StartGrowing() {
	bGrowing = true;
}

void AMy551NewPawn::StopGrowing() {
	bGrowing = false;
}