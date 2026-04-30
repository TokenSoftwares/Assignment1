#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "ProjectileWeapon.generated.h"

class ABaseProjectile;

UCLASS()
class AProjectileWeapon : public ABaseWeapon
{
    GENERATED_BODY()

public:
    AProjectileWeapon();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    TSubclassOf<ABaseProjectile> ProjectileType;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float ProjectileSpeed = 0.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    int32 NumShots = 0;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float RefireTime = 0.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float LastFireTime = 0.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float GroundUnitCheckDistance = 0.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float GroundUnitCheckAngle = 0.0f;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void FireProjectile();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ReadyToFire() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    FTransform GetProjectileSpawnTransform() const;
};
