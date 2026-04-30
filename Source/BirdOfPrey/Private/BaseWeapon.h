#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

class UParticleSystem;
class USceneComponent;
class USoundBase;

UCLASS()
class ABaseWeapon : public AActor
{
    GENERATED_BODY()

public:
    ABaseWeapon();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USceneComponent* DefaultSceneRoot = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* FireParticleEffect = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USoundBase* FireSoundCue = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    bool bRequiresAimForAI = true;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    bool bIsAutomatic = true;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StopFire();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    bool HasFinishedFiring() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayFireEffects();

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    FTransform GetFireEffectSpawnTransform() const;

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    bool IsFiring() const;
};
