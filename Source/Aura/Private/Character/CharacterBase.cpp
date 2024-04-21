// Copyright Dragon Future Tech


#include "Character/CharacterBase.h"

ACharacterBase::ACharacterBase()
{
	PrimaryActorTick.bCanEverTick = false;
	WeaponComponent = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponComponent");
	WeaponComponent->SetupAttachment(GetMesh(), FName("WeaponSocket"));
	WeaponComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
}