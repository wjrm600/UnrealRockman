// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rockman/Public/MonsterState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterState() {}
// Cross Module References
	ROCKMAN_API UEnum* Z_Construct_UEnum_Rockman_MInput();
	UPackage* Z_Construct_UPackage__Script_Rockman();
	ROCKMAN_API UClass* Z_Construct_UClass_UMonsterState_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_UMonsterState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* MInput_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Rockman_MInput, Z_Construct_UPackage__Script_Rockman(), TEXT("MInput"));
		}
		return Singleton;
	}
	template<> ROCKMAN_API UEnum* StaticEnum<MInput>()
	{
		return MInput_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_MInput(MInput_StaticEnum, TEXT("/Script/Rockman"), TEXT("MInput"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Rockman_MInput_Hash() { return 3960896151U; }
	UEnum* Z_Construct_UEnum_Rockman_MInput()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Rockman();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("MInput"), 0, Get_Z_Construct_UEnum_Rockman_MInput_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "PRESS_UP", (int64)PRESS_UP },
				{ "RELEASE_UP", (int64)RELEASE_UP },
				{ "PRESS_DOWN", (int64)PRESS_DOWN },
				{ "RELEASE_DOWN", (int64)RELEASE_DOWN },
				{ "PRESS_LEFT", (int64)PRESS_LEFT },
				{ "RELEASE_LEFT", (int64)RELEASE_LEFT },
				{ "PRESS_RIGHT", (int64)PRESS_RIGHT },
				{ "RELEASE_RIGHT", (int64)RELEASE_RIGHT },
				{ "PRESS_MLEFT", (int64)PRESS_MLEFT },
				{ "RELEASE_MLEFT", (int64)RELEASE_MLEFT },
				{ "PRESS_MRIGHT", (int64)PRESS_MRIGHT },
				{ "RELEASE_MRIGHT", (int64)RELEASE_MRIGHT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MonsterState.h" },
				{ "PRESS_DOWN.Name", "PRESS_DOWN" },
				{ "PRESS_LEFT.Name", "PRESS_LEFT" },
				{ "PRESS_MLEFT.Name", "PRESS_MLEFT" },
				{ "PRESS_MRIGHT.Name", "PRESS_MRIGHT" },
				{ "PRESS_RIGHT.Name", "PRESS_RIGHT" },
				{ "PRESS_UP.Name", "PRESS_UP" },
				{ "RELEASE_DOWN.Name", "RELEASE_DOWN" },
				{ "RELEASE_LEFT.Name", "RELEASE_LEFT" },
				{ "RELEASE_MLEFT.Name", "RELEASE_MLEFT" },
				{ "RELEASE_MRIGHT.Name", "RELEASE_MRIGHT" },
				{ "RELEASE_RIGHT.Name", "RELEASE_RIGHT" },
				{ "RELEASE_UP.Name", "RELEASE_UP" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Rockman,
				nullptr,
				"MInput",
				"MInput",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMonsterState::StaticRegisterNativesUMonsterState()
	{
	}
	UClass* Z_Construct_UClass_UMonsterState_NoRegister()
	{
		return UMonsterState::StaticClass();
	}
	struct Z_Construct_UClass_UMonsterState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMonsterState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MonsterState.h" },
		{ "ModuleRelativePath", "Public/MonsterState.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMonsterState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMonsterState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMonsterState_Statics::ClassParams = {
		&UMonsterState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMonsterState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMonsterState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMonsterState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMonsterState, 2891110440);
	template<> ROCKMAN_API UClass* StaticClass<UMonsterState>()
	{
		return UMonsterState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMonsterState(Z_Construct_UClass_UMonsterState, &UMonsterState::StaticClass, TEXT("/Script/Rockman"), TEXT("UMonsterState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMonsterState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
