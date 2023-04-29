#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ItemInteractive.h"
#include "AEnemy.generated.h"

UCLASS()
class HOWTO_API AAEnemy : public ACharacter
{
    GENERATED_BODY()

public:
    AAEnemy();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    UFUNCTION(BlueprintCallable, Category = "health")
        void OnTakeDamage(float DamageAmount);
    UFUNCTION(BlueprintImplementableEvent, Category = "Rewards")
        void OnReward();
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Rewards")
        TSubclassOf<AItemInteractive> Reward;
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Enemy")
        float MaxHealth = 20.0f;
    float CurrentHealth;
private:
    UPROPERTY(EditAnywhere)
    float PatrolRadius = 500.0f;

    FVector InitialLocation;
    FVector CurrentPatrolLocation;

    bool IsPlayerInSight();
    void RunAwayFromPlayer();
    void Patrol();

};
