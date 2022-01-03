// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rockman/ProjectilePoolComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectilePoolComponent() {}
// Cross Module References
	ROCKMAN_API UClass* Z_Construct_UClass_UProjectilePoolComponent_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_UProjectilePoolComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Rockman();
	ROCKMAN_API UClass* Z_Construct_UClass_ARM_Projectile_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UProjectilePoolComponent::execGetDeactiveProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ARM_Projectile**)Z_Param__Result=P_THIS->GetDeactiveProjectile();
		P_NATIVE_END;
	}
	void UProjectilePoolComponent::StaticRegisterNativesUProjectilePoolComponent()
	{
		UClass* Class = UProjectilePoolComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDeactiveProjectile", &UProjectilePoolComponent::execGetDeactiveProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProjectilePoolComponent_GetDeactiveProjectile_Statics
	{
		struct ProjectilePoolComponent_eventGetDeactiveProjectile_Parms
		{
			ARM_Projectile* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UProjectilePoolComponent_GetDeactiveProjectile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ProjectilePoolComponent_eventGetDeactiveProjectile_Parms, ReturnValue), Z_Construct_UClass_ARM_Projectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectilePoolComponent_GetDeactiveProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectilePoolComponent_GetDeactiveProjectile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectilePoolComponent_GetDeactiveProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ProjectilePoolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectilePoolComponent_GetDeactiveProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectilePoolComponent, nullptr, "GetDeactiveProjectile", nullptr, nullptr, sizeof(ProjectilePoolComponent_eventGetDeactiveProjectile_Parms), Z_Construct_UFunction_UProjectilePoolComponent_GetDeactiveProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectilePoolComponent_GetDeactiveProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UProjectilePoolComponent_GetDeactiveProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectilePoolComponent_GetDeactiveProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UProjectilePoolComponent_GetDeactiveProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UProjectilePoolComponent_GetDeactiveProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UProjectilePoolComponent_NoRegister()
	{
		return UProjectilePoolComponent::StaticClass();
	}
	struct Z_Construct_UClass_UProjectilePoolComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolProjectileSubclass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PoolProjectileSubclass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectilePoolComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UProjectilePoolComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectilePoolComponent_GetDeactiveProjectile, "GetDeactiveProjectile" }, // 964039945
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectilePoolComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ProjectilePoolComponent.h" },
		{ "ModuleRelativePath", "ProjectilePoolComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectilePoolComponent_Statics::NewProp_PoolSize_MetaData[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "ProjectilePoolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProjectilePoolComponent_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectilePoolComponent, PoolSize), METADATA_PARAMS(Z_Construct_UClass_UProjectilePoolComponent_Statics::NewProp_PoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectilePoolComponent_Statics::NewProp_PoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectilePoolComponent_Statics::NewProp_PoolProjectileSubclass_MetaData[] = {
		{ "Category", "Pool" },
		{ "ModuleRelativePath", "ProjectilePoolComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UProjectilePoolComponent_Statics::NewProp_PoolProjectileSubclass = { "PoolProjectileSubclass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UProjectilePoolComponent, PoolProjectileSubclass), Z_Construct_UClass_ARM_Projectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UProjectilePoolComponent_Statics::NewProp_PoolProjectileSubclass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectilePoolComponent_Statics::NewProp_PoolProjectileSubclass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectilePoolComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectilePoolComponent_Statics::NewProp_PoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectilePoolComponent_Statics::NewProp_PoolProjectileSubclass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectilePoolComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectilePoolComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProjectilePoolComponent_Statics::ClassParams = {
		&UProjectilePoolComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UProjectilePoolComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UProjectilePoolComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UProjectilePoolComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProjectilePoolComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProjectilePoolComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProjectilePoolComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProjectilePoolComponent, 891108400);
	template<> ROCKMAN_API UClass* StaticClass<UProjectilePoolComponent>()
	{
		return UProjectilePoolComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProjectilePoolComponent(Z_Construct_UClass_UProjectilePoolComponent, &UProjectilePoolComponent::StaticClass, TEXT("/Script/Rockman"), TEXT("UProjectilePoolComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectilePoolComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
