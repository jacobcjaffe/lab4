// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    // create standard root component, set root component to skeletal mesh
    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal Mesh"));
    RootComponent = WeaponMesh;
    
    
    PrimaryActorTick.bCanEverTick = true;
    
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

/*
virtual void AWeapon::onStartFire()
{
    
}

virtual void AWeapon::onStopFire()
{
    
}
*/
