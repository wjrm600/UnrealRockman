// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rockman/RockmanGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRockmanGameMode() {}
// Cross Module References
	ROCKMAN_API UClass* Z_Construct_UClass_ARockmanGameMode_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_ARockmanGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Rockman();
// End Cross Module References
	void ARockmanGameMode::StaticRegisterNativesARockmanGameMode()
	{
	}
	UClass* Z_Construct_UClass_ARockmanGameMode_NoRegister()
	{
		return ARockmanGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARockmanGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARockmanGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARockmanGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RockmanGameMode.h" },
		{ "ModuleRelativePath", "RockmanGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARockmanGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARockmanGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARockmanGameMode_Statics::ClassParams = {
		&ARockmanGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARockmanGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARockmanGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARockmanGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARockmanGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARockmanGameMode, 1868926918);
	template<> ROCKMAN_API UClass* StaticClass<ARockmanGameMode>()
	{
		return ARockmanGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARockmanGameMode(Z_Construct_UClass_ARockmanGameMode, &ARockmanGameMode::StaticClass, TEXT("/Script/Rockman"), TEXT("ARockmanGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARockmanGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
