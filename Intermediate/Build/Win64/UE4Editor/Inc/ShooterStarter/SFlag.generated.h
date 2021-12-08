// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SHOOTERSTARTER_SFlag_generated_h
#error "SFlag.generated.h already included, missing '#pragma once' in SFlag.h"
#endif
#define SHOOTERSTARTER_SFlag_generated_h

#define ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_SPARSE_DATA
#define ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerEnterPickUpBox);


#define ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerEnterPickUpBox);


#define ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASFlag(); \
	friend struct Z_Construct_UClass_ASFlag_Statics; \
public: \
	DECLARE_CLASS(ASFlag, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterStarter"), NO_API) \
	DECLARE_SERIALIZER(ASFlag)


#define ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASFlag(); \
	friend struct Z_Construct_UClass_ASFlag_Statics; \
public: \
	DECLARE_CLASS(ASFlag, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterStarter"), NO_API) \
	DECLARE_SERIALIZER(ASFlag)


#define ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASFlag(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASFlag) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASFlag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASFlag); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASFlag(ASFlag&&); \
	NO_API ASFlag(const ASFlag&); \
public:


#define ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASFlag(ASFlag&&); \
	NO_API ASFlag(const ASFlag&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASFlag); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASFlag); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASFlag)


#define ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(ASFlag, MeshComp); } \
	FORCEINLINE static uint32 __PPO__PickupRoot() { return STRUCT_OFFSET(ASFlag, PickupRoot); } \
	FORCEINLINE static uint32 __PPO__PickupBox() { return STRUCT_OFFSET(ASFlag, PickupBox); } \
	FORCEINLINE static uint32 __PPO__FlagAttachSocketName() { return STRUCT_OFFSET(ASFlag, FlagAttachSocketName); } \
	FORCEINLINE static uint32 __PPO__FlagOwner() { return STRUCT_OFFSET(ASFlag, FlagOwner); }


#define ShooterStarter_Source_ShooterStarter_Public_SFlag_h_11_PROLOG
#define ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_PRIVATE_PROPERTY_OFFSET \
	ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_SPARSE_DATA \
	ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_RPC_WRAPPERS \
	ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_INCLASS \
	ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_PRIVATE_PROPERTY_OFFSET \
	ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_SPARSE_DATA \
	ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_INCLASS_NO_PURE_DECLS \
	ShooterStarter_Source_ShooterStarter_Public_SFlag_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERSTARTER_API UClass* StaticClass<class ASFlag>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterStarter_Source_ShooterStarter_Public_SFlag_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
