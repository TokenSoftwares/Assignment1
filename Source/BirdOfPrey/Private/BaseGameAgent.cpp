#include "BaseGameAgent.h"

ABaseGameAgent::ABaseGameAgent()
{
    PrimaryActorTick.bCanEverTick = true;
}

void ABaseGameAgent::ChangeWeaponType(TSubclassOf<ABaseWeapon> NewWeaponType)
{
}

FTransform ABaseGameAgent::GetWeaponSpawnTransform() const
{
    return FTransform::Identity;
}

void ABaseGameAgent::SpawnDefaultWeapon()
{
}

void ABaseGameAgent::StartFire()
{
}

void ABaseGameAgent::StopFire()
{
}

float ABaseGameAgent::TakeDamage(float Damage)
{
    return 0.0f;
}

bool ABaseGameAgent::IsAlive() const
{
    return false;
}

void ABaseGameAgent::Died(AController* Killer)
{
}

void ABaseGameAgent::PlayHitEffects()
{
}

void ABaseGameAgent::CleanUp()
{
}

void ABaseGameAgent::ApplyAgentInfo(FSAgentInfo NewAgentInfo)
{
}

void ABaseGameAgent::AimAt(FVector AimTarget)
{
}

void ABaseGameAgent::PlayDeathEffects()
{
}

void ABaseGameAgent::CheckForOutOfBounds()
{
}

void ABaseGameAgent::BeginPlay()
{
    Super::BeginPlay();
}

void ABaseGameAgent::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ABaseGameAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
}
