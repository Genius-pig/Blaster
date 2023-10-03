// Fill out your copyright notice in the Description page of Project Settings.


#include "BlasterAnimInstance.h"

#include "BlasterCharacter.h"


void UBlasterAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	BlasterCharacter = Cast<ABlasterCharacter>(TryGetPawnOwner());

	if(BlasterCharacter)
	{
		CharacterMovementComponent = BlasterCharacter->GetCharacterMovement();
	}
}

bool UBlasterAnimInstance::IsWeaponEquipped()
{
	if(BlasterCharacter)
	{
		return BlasterCharacter->IsWeaponEquipped();
	}
	return false;
}

bool UBlasterAnimInstance::IsAiming()
{
	if(BlasterCharacter)
	{
		return BlasterCharacter->IsAiming();
	}
	return  false;
}

