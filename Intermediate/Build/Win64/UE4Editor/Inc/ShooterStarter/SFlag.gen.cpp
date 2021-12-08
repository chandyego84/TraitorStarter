// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterStarter/Public/SFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSFlag() {}
// Cross Module References
	SHOOTERSTARTER_API UClass* Z_Construct_UClass_ASFlag_NoRegister();
	SHOOTERSTARTER_API UClass* Z_Construct_UClass_ASFlag();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ShooterStarter();
// End Cross Module References
	void ASFlag::StaticRegisterNativesASFlag()
	{
	}
	UClass* Z_Construct_UClass_ASFlag_NoRegister()
	{
		return ASFlag::StaticClass();
	}
	struct Z_Construct_UClass_ASFlag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASFlag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterStarter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASFlag_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SFlag.h" },
		{ "ModuleRelativePath", "Public/SFlag.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASFlag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASFlag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASFlag_Statics::ClassParams = {
		&ASFlag::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASFlag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASFlag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASFlag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASFlag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASFlag, 1092347143);
	template<> SHOOTERSTARTER_API UClass* StaticClass<ASFlag>()
	{
		return ASFlag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASFlag(Z_Construct_UClass_ASFlag, &ASFlag::StaticClass, TEXT("/Script/ShooterStarter"), TEXT("ASFlag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASFlag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
