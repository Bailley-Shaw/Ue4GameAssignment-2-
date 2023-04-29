#include "AEnemy.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "AI/Navigation/NavigationTypes.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

AAEnemy::AAEnemy()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AAEnemy::BeginPlay()
{
    Super::BeginPlay();

    // Set the enemy's initial patrol location to its starting location
    InitialLocation = GetActorLocation();
    CurrentPatrolLocation = InitialLocation;
}

void AAEnemy::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Check the distance between the enemy and the player
    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    FVector PlayerLocation = PlayerCharacter->GetActorLocation();
    float DistanceToPlayer = FVector::Distance(GetActorLocation(), PlayerLocation);

    // If the player is too close, run away from them
    if (DistanceToPlayer < 500.0f)
    {
        RunAwayFromPlayer();
    }
    else
    {
        Patrol();
    }
}


bool AAEnemy::IsPlayerInSight()
{
    // Check if the player is in sight by drawing a line from the enemy's eyes to the player's location
    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    FVector PlayerLocation = PlayerCharacter->GetActorLocation();
    FVector EnemyEyeLocation = GetActorLocation() + FVector(0.0f, 0.0f, 50.0f); // Assume eyes are 50 units above the actor
    FHitResult HitResult;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);
    bool bHit = GetWorld()->LineTraceSingleByChannel(HitResult, EnemyEyeLocation, PlayerLocation, ECC_Visibility, Params);

    // Draw a debug line to visualize the sight check
    if (bHit)
    {
        DrawDebugLine(GetWorld(), EnemyEyeLocation, HitResult.Location, FColor::Red, false, 0.1f);
        DrawDebugLine(GetWorld(), HitResult.Location, PlayerLocation, FColor::Red, false, 0.1f);
    }
    else
    {
        DrawDebugLine(GetWorld(), EnemyEyeLocation, PlayerLocation, FColor::Green, false, 0.1f);
    }

    // Return true if the player is in sight
    return bHit && HitResult.Actor == PlayerCharacter;
}

void AAEnemy::RunAwayFromPlayer()
{
    // Get the direction away from the player and apply a movement input
    ACharacter* PlayerCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);
    FVector PlayerLocation = PlayerCharacter->GetActorLocation();
    FVector AwayFromPlayerDirection = GetActorLocation() - PlayerLocation;
    FVector AwayFromPlayerDirection2D = FVector(AwayFromPlayerDirection.X, AwayFromPlayerDirection.Y, 0.0f);
    AddMovementInput(AwayFromPlayerDirection2D, 1.0f);
    // Set the actor's rotation to face the AwayFromPlayerDirection
    FRotator NewRotation = FRotationMatrix::MakeFromX(AwayFromPlayerDirection).Rotator();
    SetActorRotation(NewRotation);

    // Draw a debug line to visualize the run away behavior
    FVector RunAwayDestination = GetActorLocation() + AwayFromPlayerDirection * 100.0f;
    DrawDebugLine(GetWorld(), GetActorLocation(), RunAwayDestination, FColor::Yellow, false, 0.1f);
}

void AAEnemy::Patrol()
{
    // Move towards the current patrol location using the nav mesh pathfinding and change the patrol location if reached
    FVector PatrolDirection = CurrentPatrolLocation - GetActorLocation();
    PatrolDirection.Normalize();
    // Use the nav mesh pathfinding to find a path to the patrol location
    UNavigationSystemV1* NavSystem = UNavigationSystemV1::GetCurrent(GetWorld());
    FNavLocation NextPatrolLocation;
    if (NavSystem && NavSystem->GetRandomPointInNavigableRadius(CurrentPatrolLocation, 50.0f, NextPatrolLocation))
    {
        FVector NextPatrolDirection = NextPatrolLocation.Location - GetActorLocation();
        NextPatrolDirection.Z = 0.0f; // Ignore the z component
        NextPatrolDirection.Normalize();
        AddMovementInput(NextPatrolDirection, 1.0f);

        // Draw a debug line to visualize the patrol behavior
        FVector PatrolDestination = GetActorLocation() + NextPatrolDirection * 100.0f;
        DrawDebugLine(GetWorld(), GetActorLocation(), PatrolDestination, FColor::Blue, false, 0.1f);

        // Check if the enemy has reached the patrol location
        float DistanceToPatrolLocation = FVector::Distance(GetActorLocation(), NextPatrolLocation.Location);
        if (DistanceToPatrolLocation < 100.0f)
        {
            // Pick a new patrol location
            FNavLocation RandomLocation;
            UNavigationSystemV1::GetCurrent(GetWorld())->GetRandomPointInNavigableRadius(InitialLocation, 500.0f, RandomLocation);
            CurrentPatrolLocation = RandomLocation.Location;

            // Draw a debug line to visualize the new patrol location
            DrawDebugLine(GetWorld(), GetActorLocation(), CurrentPatrolLocation, FColor::Yellow, false, 0.1f);
        }
    }

    // Face the direction the enemy is moving towards
    if (!PatrolDirection.IsNearlyZero())
    {
        FRotator NewRotation = PatrolDirection.Rotation();
        NewRotation.Pitch = 0.0f;
        NewRotation.Roll = 0.0f;
        SetActorRotation(NewRotation);
    }
}
void AAEnemy::OnTakeDamage(float DamageAmount)
{
    CurrentHealth -= DamageAmount;

    if (CurrentHealth <= 0)
    {
        // Spawn the reward item at the enemy's location and call OnReward
        FActorSpawnParameters SpawnParams;
        SpawnParams.Owner = this;
        AItemInteractive* RewardItem = GetWorld()->SpawnActor<AItemInteractive>(Reward, GetActorLocation(), FRotator::ZeroRotator, SpawnParams);
        if (RewardItem != nullptr)
        {
            RewardItem->OnInteract();
        }
        OnReward();

        // Destroy the enemy actor
        Destroy();
    }
}
