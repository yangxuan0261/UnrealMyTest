
#include "MyTest.h"
#include "CoolDownComp.h"

UCoolDownComp::UCoolDownComp()
	: Super()
{

}

UCoolDownComp::~UCoolDownComp()
{
    UE_LOG(LogMyTest, Warning, TEXT("--- UCoolDownComp::~UCoolDownComp"));
}

void UCoolDownComp::BeginPlay()
{
	Super::BeginPlay();
    UE_LOG(LogMyTest, Warning, TEXT("--- UCoolDownComp::BeginPlay"));
}

void UCoolDownComp::BeginDestroy()
{
    UE_LOG(LogMyTest, Warning, TEXT("--- UCoolDownComp::BeginDestroy"));
    Super::BeginDestroy();
}

void UCoolDownComp::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    UE_LOG(LogMyTest, Warning, TEXT("--- UCoolDownComp::EndPlay"));
}

void UCoolDownComp::OnComponentCreated()
{
	UE_LOG(LogMyTest, Warning, TEXT("--- UCoolDownComp::OnComponentCreated"));
}

void UCoolDownComp::OnComponentDestroyed(bool bDestroyingHierarchy)
{
	UE_LOG(LogMyTest, Warning, TEXT("--- UCoolDownComp::OnComponentDestroyed"));
}
