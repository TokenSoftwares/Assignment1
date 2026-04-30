#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Actor.h"
#include "BaseProjectile.generated.h"

class ABaseGameAgent;
class UParticleSystem;
class UPrimitiveComponent;
class USoundBase;

UCLASS()
class ABaseProjectile : public AActor
{
    GENERATED_BODY()

public:
    ABaseProjectile();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float ProjectileSpeed = 1000.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float Damage = 50.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* DetonationEmitter = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float GroundUnitCheckDistance = 2000.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float GroundUnitCheckAngle = 10.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    ABaseGameAgent* GroundTarget = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float DesiredZ = 0.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USoundBase* ImpactSound = nullptr;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void InitialiseProjectile(FVector Direction, float Speed);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void DealDamageTo(AActor* Damaging, float Damage);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    TEnumAsByte<ECollisionChannel> GetInstigatorCollisionChannel() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CheckForGroundUnitTarget();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    bool ShouldCheckForGroundTarget() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AdjustToTarget();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    bool IsEnemyProjectile() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AdjustToDesiredZ();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();
};
