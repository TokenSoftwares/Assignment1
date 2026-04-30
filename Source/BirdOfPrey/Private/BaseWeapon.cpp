#include "BaseWeapon.h"

ABaseWeapon::ABaseWeapon()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ABaseWeapon::StartFire()
{
}

void ABaseWeapon::StopFire()
{
}

bool ABaseWeapon::HasFinishedFiring() const
{
    return false;
}

void ABaseWeapon::PlayFireEffects()
{
}

FTransform ABaseWeapon::GetFireEffectSpawnTransform() const
{
    return FTransform::Identity;
}

bool ABaseWeapon::IsFiring() const
{
    return false;
}
