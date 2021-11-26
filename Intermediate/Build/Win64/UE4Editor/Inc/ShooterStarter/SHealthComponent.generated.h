// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef SHOOTERSTARTER_SHealthComponent_generated_h
#error "SHealthComponent.generated.h already included, missing '#pragma once' in SHealthComponent.h"
#endif
#define SHOOTERSTARTER_SHealthComponent_generated_h

#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_12_DELEGATE \
struct _Script_ShooterStarter_eventOnHealthChangedSignature_Parms \
{ \
	USHealthComponent* HealthComp; \
	float Health; \
	float HealthDelta; \
	const UDamageType* DamageType; \
	AController* InstigatedBy; \
	AActor* DamageCauser; \
}; \
static inline void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, USHealthComponent* HealthComp, float Health, float HealthDelta, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) \
{ \
	_Script_ShooterStarter_eventOnHealthChangedSignature_Parms Parms; \
	Parms.HealthComp=HealthComp; \
	Parms.Health=Health; \
	Parms.HealthDelta=HealthDelta; \
	Parms.DamageType=DamageType; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.DamageCauser=DamageCauser; \
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_SPARSE_DATA
#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage);


#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage);


#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSHealthComponent(); \
	friend struct Z_Construct_UClass_USHealthComponent_Statics; \
public: \
	DECLARE_CLASS(USHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterStarter"), NO_API) \
	DECLARE_SERIALIZER(USHealthComponent)


#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUSHealthComponent(); \
	friend struct Z_Construct_UClass_USHealthComponent_Statics; \
public: \
	DECLARE_CLASS(USHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterStarter"), NO_API) \
	DECLARE_SERIALIZER(USHealthComponent)


#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USHealthComponent(USHealthComponent&&); \
	NO_API USHealthComponent(const USHealthComponent&); \
public:


#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USHealthComponent(USHealthComponent&&); \
	NO_API USHealthComponent(const USHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USHealthComponent)


#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(USHealthComponent, Health); } \
	FORCEINLINE static uint32 __PPO__DefaultHealth() { return STRUCT_OFFSET(USHealthComponent, DefaultHealth); }


#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_14_PROLOG
#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_SPARSE_DATA \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_RPC_WRAPPERS \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_INCLASS \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_SPARSE_DATA \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_INCLASS_NO_PURE_DECLS \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERSTARTER_API UClass* StaticClass<class USHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
