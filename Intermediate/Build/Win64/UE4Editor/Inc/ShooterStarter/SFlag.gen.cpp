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
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
	SHOOTERSTARTER_API UClass* Z_Construct_UClass_ASCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASFlag::execOnPlayerEnterPickUpBox)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerEnterPickUpBox(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void ASFlag::StaticRegisterNativesASFlag()
	{
		UClass* Class = ASFlag::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPlayerEnterPickUpBox", &ASFlag::execOnPlayerEnterPickUpBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics
	{
		struct SFlag_eventOnPlayerEnterPickUpBox_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SFlag_eventOnPlayerEnterPickUpBox_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SFlag_eventOnPlayerEnterPickUpBox_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SFlag_eventOnPlayerEnterPickUpBox_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SFlag_eventOnPlayerEnterPickUpBox_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((SFlag_eventOnPlayerEnterPickUpBox_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SFlag_eventOnPlayerEnterPickUpBox_Parms), &Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SFlag_eventOnPlayerEnterPickUpBox_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SFlag.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASFlag, nullptr, "OnPlayerEnterPickUpBox", nullptr, nullptr, sizeof(SFlag_eventOnPlayerEnterPickUpBox_Parms), Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASFlag_NoRegister()
	{
		return ASFlag::StaticClass();
	}
	struct Z_Construct_UClass_ASFlag_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlagAttachSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FlagAttachSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlagOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlagOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickedUp_MetaData[];
#endif
		static void NewProp_PickedUp_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PickedUp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASFlag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterStarter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASFlag_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASFlag_OnPlayerEnterPickUpBox, "OnPlayerEnterPickUpBox" }, // 3214260325
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASFlag_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SFlag.h" },
		{ "ModuleRelativePath", "Public/SFlag.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASFlag_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "SFlag" },
		{ "Comment", "// static mesh for pickup flag\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SFlag.h" },
		{ "ToolTip", "static mesh for pickup flag" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASFlag_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASFlag, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASFlag_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASFlag_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASFlag_Statics::NewProp_PickupRoot_MetaData[] = {
		{ "Category", "SFlag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SFlag.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASFlag_Statics::NewProp_PickupRoot = { "PickupRoot", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASFlag, PickupRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASFlag_Statics::NewProp_PickupRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASFlag_Statics::NewProp_PickupRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASFlag_Statics::NewProp_PickupBox_MetaData[] = {
		{ "Category", "SFlag" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SFlag.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASFlag_Statics::NewProp_PickupBox = { "PickupBox", nullptr, (EPropertyFlags)0x0020080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASFlag, PickupBox), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASFlag_Statics::NewProp_PickupBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASFlag_Statics::NewProp_PickupBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASFlag_Statics::NewProp_FlagAttachSocketName_MetaData[] = {
		{ "Category", "Equip" },
		{ "ModuleRelativePath", "Public/SFlag.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASFlag_Statics::NewProp_FlagAttachSocketName = { "FlagAttachSocketName", nullptr, (EPropertyFlags)0x0020080000030001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASFlag, FlagAttachSocketName), METADATA_PARAMS(Z_Construct_UClass_ASFlag_Statics::NewProp_FlagAttachSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASFlag_Statics::NewProp_FlagAttachSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASFlag_Statics::NewProp_FlagOwner_MetaData[] = {
		{ "Category", "Owner" },
		{ "ModuleRelativePath", "Public/SFlag.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASFlag_Statics::NewProp_FlagOwner = { "FlagOwner", nullptr, (EPropertyFlags)0x0020080000030001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASFlag, FlagOwner), Z_Construct_UClass_ASCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASFlag_Statics::NewProp_FlagOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASFlag_Statics::NewProp_FlagOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASFlag_Statics::NewProp_PickedUp_MetaData[] = {
		{ "Category", "Pickup Status" },
		{ "Comment", "// Called every frame\n//virtual void Tick(float DeltaTime) override;\n" },
		{ "ModuleRelativePath", "Public/SFlag.h" },
		{ "ToolTip", "Called every frame\nvirtual void Tick(float DeltaTime) override;" },
	};
#endif
	void Z_Construct_UClass_ASFlag_Statics::NewProp_PickedUp_SetBit(void* Obj)
	{
		((ASFlag*)Obj)->PickedUp = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASFlag_Statics::NewProp_PickedUp = { "PickedUp", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASFlag), &Z_Construct_UClass_ASFlag_Statics::NewProp_PickedUp_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASFlag_Statics::NewProp_PickedUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASFlag_Statics::NewProp_PickedUp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASFlag_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASFlag_Statics::NewProp_PickupRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASFlag_Statics::NewProp_PickupBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASFlag_Statics::NewProp_FlagAttachSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASFlag_Statics::NewProp_FlagOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASFlag_Statics::NewProp_PickedUp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASFlag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASFlag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASFlag_Statics::ClassParams = {
		&ASFlag::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASFlag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASFlag_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ASFlag, 2748170315);
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
