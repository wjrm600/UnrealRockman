// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rockman/RM_Projectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRM_Projectile() {}
// Cross Module References
	ROCKMAN_API UClass* Z_Construct_UClass_ARM_Projectile_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_ARM_Projectile();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Rockman();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_UProjectilePoolComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ARM_Projectile::execSetActive)
	{
		P_GET_UBOOL(Z_Param_active);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActive(Z_Param_active);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARM_Projectile::execProjectileSetLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_vec);
		P_GET_STRUCT(FRotator,Z_Param_rot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ProjectileSetLocation(Z_Param_vec,Z_Param_rot);
		P_NATIVE_END;
	}
	void ARM_Projectile::StaticRegisterNativesARM_Projectile()
	{
		UClass* Class = ARM_Projectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ProjectileSetLocation", &ARM_Projectile::execProjectileSetLocation },
			{ "SetActive", &ARM_Projectile::execSetActive },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARM_Projectile_ProjectileSetLocation_Statics
	{
		struct RM_Projectile_eventProjectileSetLocation_Parms
		{
			FVector vec;
			FRotator rot;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vec;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARM_Projectile_ProjectileSetLocation_Statics::NewProp_vec = { "vec", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RM_Projectile_eventProjectileSetLocation_Parms, vec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARM_Projectile_ProjectileSetLocation_Statics::NewProp_rot = { "rot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RM_Projectile_eventProjectileSetLocation_Parms, rot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARM_Projectile_ProjectileSetLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARM_Projectile_ProjectileSetLocation_Statics::NewProp_vec,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARM_Projectile_ProjectileSetLocation_Statics::NewProp_rot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARM_Projectile_ProjectileSetLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RM_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARM_Projectile_ProjectileSetLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARM_Projectile, nullptr, "ProjectileSetLocation", nullptr, nullptr, sizeof(RM_Projectile_eventProjectileSetLocation_Parms), Z_Construct_UFunction_ARM_Projectile_ProjectileSetLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARM_Projectile_ProjectileSetLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARM_Projectile_ProjectileSetLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARM_Projectile_ProjectileSetLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARM_Projectile_ProjectileSetLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARM_Projectile_ProjectileSetLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARM_Projectile_SetActive_Statics
	{
		struct RM_Projectile_eventSetActive_Parms
		{
			bool active;
		};
		static void NewProp_active_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_active;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARM_Projectile_SetActive_Statics::NewProp_active_SetBit(void* Obj)
	{
		((RM_Projectile_eventSetActive_Parms*)Obj)->active = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARM_Projectile_SetActive_Statics::NewProp_active = { "active", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RM_Projectile_eventSetActive_Parms), &Z_Construct_UFunction_ARM_Projectile_SetActive_Statics::NewProp_active_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARM_Projectile_SetActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARM_Projectile_SetActive_Statics::NewProp_active,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARM_Projectile_SetActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RM_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARM_Projectile_SetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARM_Projectile, nullptr, "SetActive", nullptr, nullptr, sizeof(RM_Projectile_eventSetActive_Parms), Z_Construct_UFunction_ARM_Projectile_SetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARM_Projectile_SetActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARM_Projectile_SetActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARM_Projectile_SetActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARM_Projectile_SetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARM_Projectile_SetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARM_Projectile_NoRegister()
	{
		return ARM_Projectile::StaticClass();
	}
	struct Z_Construct_UClass_ARM_Projectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProMoveCom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProMoveCom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[];
#endif
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolCom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PoolCom;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARM_Projectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARM_Projectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARM_Projectile_ProjectileSetLocation, "ProjectileSetLocation" }, // 3102980831
		{ &Z_Construct_UFunction_ARM_Projectile_SetActive, "SetActive" }, // 4228043480
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARM_Projectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RM_Projectile.h" },
		{ "ModuleRelativePath", "RM_Projectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARM_Projectile_Statics::NewProp_ProMoveCom_MetaData[] = {
		{ "Category", "movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RM_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARM_Projectile_Statics::NewProp_ProMoveCom = { "ProMoveCom", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARM_Projectile, ProMoveCom), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARM_Projectile_Statics::NewProp_ProMoveCom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARM_Projectile_Statics::NewProp_ProMoveCom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARM_Projectile_Statics::NewProp_bActive_MetaData[] = {
		{ "Category", "projectileproperty" },
		{ "ModuleRelativePath", "RM_Projectile.h" },
	};
#endif
	void Z_Construct_UClass_ARM_Projectile_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((ARM_Projectile*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARM_Projectile_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARM_Projectile), &Z_Construct_UClass_ARM_Projectile_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARM_Projectile_Statics::NewProp_bActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARM_Projectile_Statics::NewProp_bActive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARM_Projectile_Statics::NewProp_PoolCom_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RM_Projectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARM_Projectile_Statics::NewProp_PoolCom = { "PoolCom", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARM_Projectile, PoolCom), Z_Construct_UClass_UProjectilePoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARM_Projectile_Statics::NewProp_PoolCom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARM_Projectile_Statics::NewProp_PoolCom_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARM_Projectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARM_Projectile_Statics::NewProp_ProMoveCom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARM_Projectile_Statics::NewProp_bActive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARM_Projectile_Statics::NewProp_PoolCom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARM_Projectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARM_Projectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARM_Projectile_Statics::ClassParams = {
		&ARM_Projectile::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARM_Projectile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARM_Projectile_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARM_Projectile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARM_Projectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARM_Projectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARM_Projectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARM_Projectile, 2337556812);
	template<> ROCKMAN_API UClass* StaticClass<ARM_Projectile>()
	{
		return ARM_Projectile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARM_Projectile(Z_Construct_UClass_ARM_Projectile, &ARM_Projectile::StaticClass, TEXT("/Script/Rockman"), TEXT("ARM_Projectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARM_Projectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
