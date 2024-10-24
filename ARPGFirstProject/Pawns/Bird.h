// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h"


#include "Bird.generated.h"

class UCapsuleComponent;
class USkeletalMeshComponent;
class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;

UCLASS()
class ARPGFIRSTPROJECT_API ABird : public APawn
{
	GENERATED_BODY()

public:
	ABird();
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* BirdMappingContext;

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = Input)
	UInputAction* MoveAction;

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = Input)
	UInputAction* LookAction;

	virtual void Move(const FInputActionValue& Value);
	virtual void Look(const FInputActionValue& Value);

	virtual void MoveTurn(float Value);

private:

	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* BirdMesh;

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* ViewCamera;
};
