// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "mi_ancla.generated.h"

UCLASS()
class NUEVOGOOGLEVR_API Ami_ancla : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Ami_ancla();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
