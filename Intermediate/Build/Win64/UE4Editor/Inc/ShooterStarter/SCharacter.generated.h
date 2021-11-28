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
#ifdef SHOOTERSTARTER_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define SHOOTERSTARTER_SCharacter_generated_h

#define ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_SPARSE_DATA
#define ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execOnHealthChanged);


#define ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execOnHealthChanged);


#define ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterStarter"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentWeapon=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterStarter"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentWeapon=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentWeapon	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public:


#define ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASCharacter(ASCharacter&&); \
	NO_API ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter)


#define ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ASCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(ASCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__HealthComp() { return STRUCT_OFFSET(ASCharacter, HealthComp); } \
	FORCEINLINE static uint32 __PPO__zoomFOV() { return STRUCT_OFFSET(ASCharacter, zoomFOV); } \
	FORCEINLINE static uint32 __PPO__ZoomInterpSpeed() { return STRUCT_OFFSET(ASCharacter, ZoomInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(ASCharacter, CurrentWeapon); } \
	FORCEINLINE static uint32 __PPO__StarterWeaponClass() { return STRUCT_OFFSET(ASCharacter, StarterWeaponClass); } \
	FORCEINLINE static uint32 __PPO__WeaponAttachSocketName() { return STRUCT_OFFSET(ASCharacter, WeaponAttachSocketName); } \
	FORCEINLINE static uint32 __PPO__AmmoTotal() { return STRUCT_OFFSET(ASCharacter, AmmoTotal); } \
	FORCEINLINE static uint32 __PPO__isDead() { return STRUCT_OFFSET(ASCharacter, isDead); }


#define ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_15_PROLOG
#define ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_SPARSE_DATA \
	ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_RPC_WRAPPERS \
	ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_INCLASS \
	ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_SPARSE_DATA \
	ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_INCLASS_NO_PURE_DECLS \
	ShooterStarter_Source_ShooterStarter_Public_SCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERSTARTER_API UClass* StaticClass<class ASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterStarter_Source_ShooterStarter_Public_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
