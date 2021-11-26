// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UDamageType;
class AController;
#ifdef SHOOTERSTARTER_SHealthComponent_generated_h
#error "SHealthComponent.generated.h already included, missing '#pragma once' in SHealthComponent.h"
#endif
#define SHOOTERSTARTER_SHealthComponent_generated_h

#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_SPARSE_DATA
#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage);


#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage);


#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSHealthComponent(); \
	friend struct Z_Construct_UClass_USHealthComponent_Statics; \
public: \
	DECLARE_CLASS(USHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterStarter"), NO_API) \
	DECLARE_SERIALIZER(USHealthComponent)


#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUSHealthComponent(); \
	friend struct Z_Construct_UClass_USHealthComponent_Statics; \
public: \
	DECLARE_CLASS(USHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterStarter"), NO_API) \
	DECLARE_SERIALIZER(USHealthComponent)


#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_STANDARD_CONSTRUCTORS \
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


#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USHealthComponent(USHealthComponent&&); \
	NO_API USHealthComponent(const USHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USHealthComponent)


#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(USHealthComponent, Health); } \
	FORCEINLINE static uint32 __PPO__DefaultHealth() { return STRUCT_OFFSET(USHealthComponent, DefaultHealth); }


#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_10_PROLOG
#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_SPARSE_DATA \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_RPC_WRAPPERS \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_INCLASS \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_SPARSE_DATA \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_INCLASS_NO_PURE_DECLS \
	ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERSTARTER_API UClass* StaticClass<class USHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterStarter_Source_ShooterStarter_Public_Components_SHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
