// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rockman/Public/InventoryItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItem() {}
// Cross Module References
	ROCKMAN_API UClass* Z_Construct_UClass_AInventoryItem_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_AInventoryItem();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Rockman();
// End Cross Module References
	void AInventoryItem::StaticRegisterNativesAInventoryItem()
	{
	}
	UClass* Z_Construct_UClass_AInventoryItem_NoRegister()
	{
		return AInventoryItem::StaticClass();
	}
	struct Z_Construct_UClass_AInventoryItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInventoryItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInventoryItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InventoryItem.h" },
		{ "ModuleRelativePath", "Public/InventoryItem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInventoryItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInventoryItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInventoryItem_Statics::ClassParams = {
		&AInventoryItem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AInventoryItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInventoryItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInventoryItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInventoryItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInventoryItem, 376923943);
	template<> ROCKMAN_API UClass* StaticClass<AInventoryItem>()
	{
		return AInventoryItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInventoryItem(Z_Construct_UClass_AInventoryItem, &AInventoryItem::StaticClass, TEXT("/Script/Rockman"), TEXT("AInventoryItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInventoryItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
