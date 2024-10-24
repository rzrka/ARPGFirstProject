// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"


#include "Alyse.generated.h"

class UInputMappingContext;
class UInputAction;
class USpringArmComponent;
class UCameraComponent;

UCLASS()
class ARPGFIRSTPROJECT_API AAlyse : public ACharacter
{
	GENERATED_BODY()

public:

	AAlyse();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* AlyseMappingContext;

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = Input)
	UInputAction* MovementAction;

	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = Input)
	UInputAction* LookAction;

	virtual void Move(const FInputActionValue& Value);
	virtual void Look(const FInputActionValue& Value);

private:

	UPROPERTY(VisibleAnywhere)
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere)
	UCameraComponent* ViewCamera;

	void _SetInputContext();


};
