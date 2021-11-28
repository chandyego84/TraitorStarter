// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef SHOOTERSTARTER_SWeapon_generated_h
#error "SWeapon.generated.h already included, missing '#pragma once' in SWeapon.h"
#endif
#define SHOOTERSTARTER_SWeapon_generated_h

#define ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHitScanTrace_Statics; \
	SHOOTERSTARTER_API static class UScriptStruct* StaticStruct();


template<> SHOOTERSTARTER_API UScriptStruct* StaticStruct<struct FHitScanTrace>();

#define ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_SPARSE_DATA
#define ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_RPC_WRAPPERS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execOnRep_HitScanTrace); \
	DECLARE_FUNCTION(execPlayImpactEffects); \
	DECLARE_FUNCTION(execPlayFireEffect);


#define ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerFire_Validate(); \
	virtual void ServerFire_Implementation(); \
 \
	DECLARE_FUNCTION(execServerFire); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execOnRep_HitScanTrace); \
	DECLARE_FUNCTION(execPlayImpactEffects); \
	DECLARE_FUNCTION(execPlayFireEffect);


#define ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_EVENT_PARMS
#define ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_CALLBACK_WRAPPERS
#define ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend struct Z_Construct_UClass_ASWeapon_Statics; \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterStarter"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitScanTrace=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitScanTrace	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_INCLASS \
private: \
	static void StaticRegisterNativesASWeapon(); \
	friend struct Z_Construct_UClass_ASWeapon_Statics; \
public: \
	DECLARE_CLASS(ASWeapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterStarter"), NO_API) \
	DECLARE_SERIALIZER(ASWeapon) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		HitScanTrace=NETFIELD_REP_START, \
		NETFIELD_REP_END=HitScanTrace	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public:


#define ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASWeapon(ASWeapon&&); \
	NO_API ASWeapon(const ASWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASWeapon)


#define ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASWeapon, MeshComp); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ASWeapon, DamageType); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(ASWeapon, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__TracerTargetName() { return STRUCT_OFFSET(ASWeapon, TracerTargetName); } \
	FORCEINLINE static uint32 __PPO__MuzzleEffect() { return STRUCT_OFFSET(ASWeapon, MuzzleEffect); } \
	FORCEINLINE static uint32 __PPO__DefaultImpactEffect() { return STRUCT_OFFSET(ASWeapon, DefaultImpactEffect); } \
	FORCEINLINE static uint32 __PPO__FleshImpactEffect() { return STRUCT_OFFSET(ASWeapon, FleshImpactEffect); } \
	FORCEINLINE static uint32 __PPO__TracerEffect() { return STRUCT_OFFSET(ASWeapon, TracerEffect); } \
	FORCEINLINE static uint32 __PPO__FireCamShake() { return STRUCT_OFFSET(ASWeapon, FireCamShake); } \
	FORCEINLINE static uint32 __PPO__HitScanTrace() { return STRUCT_OFFSET(ASWeapon, HitScanTrace); }


#define ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_27_PROLOG \
	ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_EVENT_PARMS


#define ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_PRIVATE_PROPERTY_OFFSET \
	ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_SPARSE_DATA \
	ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_RPC_WRAPPERS \
	ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_CALLBACK_WRAPPERS \
	ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_INCLASS \
	ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_PRIVATE_PROPERTY_OFFSET \
	ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_SPARSE_DATA \
	ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_CALLBACK_WRAPPERS \
	ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_INCLASS_NO_PURE_DECLS \
	ShooterStarter_Source_ShooterStarter_Public_SWeapon_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERSTARTER_API UClass* StaticClass<class ASWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterStarter_Source_ShooterStarter_Public_SWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
