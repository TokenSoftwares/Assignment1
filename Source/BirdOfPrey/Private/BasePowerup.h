#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BasePowerup.generated.h"

class APlayerShip;
class UParticleSystem;
class USoundBase;

UCLASS()
class ABasePowerup : public AActor
{
    GENERATED_BODY()

public:
    ABasePowerup();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* PickUpParticleSystem = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USoundBase* PickUpSoundCue = nullptr;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Apply(APlayerShip* PlayerShip);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayEffects();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Reset();
};
