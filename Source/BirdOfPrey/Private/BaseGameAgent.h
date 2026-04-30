#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/Pawn.h"
#include "BaseGameInstance.h"
#include "BaseGameAgent.generated.h"

class ABaseWeapon;
class USceneComponent;
class USkeletalMeshComponent;
class UCapsuleComponent;
class UParticleSystem;
class USoundBase;

UCLASS()
class ABaseGameAgent : public APawn
{
    GENERATED_BODY()

public:
    ABaseGameAgent();

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USkeletalMeshComponent* SkeletalMesh = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UCapsuleComponent* Capsule = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USceneComponent* WeaponSpawnOffset = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* DeathParticleEffect = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USoundBase* DeathSoundCue = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    USoundBase* HitSoundCue = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    UParticleSystem* HitParticleEffect = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float MoveSpeed = 50.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    ABaseWeapon* Weapon = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    TSubclassOf<ABaseWeapon> DefaultWeaponType;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float Health = 100.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FSAgentInfo AgentInfo;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float Points = 100.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    bool bCheckForOutOfBounds = false;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    float OutOfBoundsCheckTolerance = 0.0f;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FName WeaponSocketName = TEXT("EyeLoc");

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    TEnumAsByte<EAttachmentRule> WeaponAttachRule = EAttachmentRule::SnapToTarget;

    UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
    FVector TargetLocation = FVector::ZeroVector;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ChangeWeaponType(TSubclassOf<ABaseWeapon> NewWeaponType);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    FTransform GetWeaponSpawnTransform() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void SpawnDefaultWeapon();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void StopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    float TakeDamage(float Damage);

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = "BirdOfPrey")
    bool IsAlive() const;

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void Died(AController* Killer);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayHitEffects();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CleanUp();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void ApplyAgentInfo(FSAgentInfo NewAgentInfo);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void AimAt(FVector AimTarget);

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void PlayDeathEffects();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    void CheckForOutOfBounds();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
