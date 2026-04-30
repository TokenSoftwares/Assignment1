#include "ProjectileWeapon.h"

AProjectileWeapon::AProjectileWeapon()
{
}

void AProjectileWeapon::FireProjectile()
{
}

bool AProjectileWeapon::ReadyToFire() const
{
    return false;
}

FTransform AProjectileWeapon::GetProjectileSpawnTransform() const
{
    return FTransform::Identity;
}
