#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BaseAIController.generated.h"

class ABaseGameAgent;

UCLASS()
class ABaseAIController : public AAIController
{
    GENERATED_BODY()

public:
    ABaseAIController();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    ABaseGameAgent* ControlledAgent = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float LastFireTime = 0.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float RefireDelay = 0.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    bool bIsFiring = false;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    bool bShouldUpdateAim = false;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    AActor* SelectTarget() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AimAt(const FVector& AimTarget);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void UpdateAim(float DeltaSeconds);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldStartFire() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    bool ShouldStopFire() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CheckFire(float DeltaSeconds);

    virtual void OnPossess(APawn* InPawn) override;
    virtual void Tick(float DeltaSeconds) override;
};
