#pragma once

#include "CoreMinimal.h"
#include "UINavController.h"
#include "MainPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class HOWTO_API AMainPlayerController : public AUINavController
{
	GENERATED_BODY()
	
protected:

	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;

protected:

	UFUNCTION()
	void Action();
	
	UFUNCTION()
	void SwitchItem();

	UFUNCTION()
	void FreeHands();

protected:

	class AHowToCharacter* MyCharacter;	
};
