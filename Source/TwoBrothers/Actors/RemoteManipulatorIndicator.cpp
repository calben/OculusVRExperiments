// Fill out your copyright notice in the Description page of Project Settings.

#include "TwoBrothers.h"
#include "RemoteManipulatorIndicator.h"


// Sets default values
ARemoteManipulatorIndicator::ARemoteManipulatorIndicator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARemoteManipulatorIndicator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARemoteManipulatorIndicator::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

