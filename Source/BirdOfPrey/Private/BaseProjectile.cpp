#include "BaseProjectile.h"

ABaseProjectile::ABaseProjectile()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ABaseProjectile::InitialiseProjectile(FVector Direction, float Speed)
{
}

void ABaseProjectile::DealDamageTo(AActor* Damaging, float Damage)
{
}

void ABaseProjectile::OnHit(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor)
{
}

TEnumAsByte<ECollisionChannel> ABaseProjectile::GetInstigatorCollisionChannel() const
{
    return ECollisionChannel::ECC_WorldStatic;
}

void ABaseProjectile::CheckForGroundUnitTarget()
{
}

bool ABaseProjectile::ShouldCheckForGroundTarget() const
{
    return false;
}

void ABaseProjectile::AdjustToTarget()
{
}

bool ABaseProjectile::IsEnemyProjectile() const
{
    return false;
}

void ABaseProjectile::AdjustToDesiredZ()
{
}

void ABaseProjectile::Reset()
{
}
