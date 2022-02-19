// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rockman/Public/Monster_Base.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonster_Base() {}
// Cross Module References
	ROCKMAN_API UClass* Z_Construct_UClass_AMonster_Base_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_AMonster_Base();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Rockman();
	ROCKMAN_API UClass* Z_Construct_UClass_UMonsterStateComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_UMyTempInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMonster_Base::execIAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMonster_Base::execMonsterAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MonsterAttack();
		P_NATIVE_END;
	}
	void AMonster_Base::StaticRegisterNativesAMonster_Base()
	{
		UClass* Class = AMonster_Base::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IAttack", &AMonster_Base::execIAttack },
			{ "MonsterAttack", &AMonster_Base::execMonsterAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMonster_Base_IAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonster_Base_IAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Monster_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonster_Base_IAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonster_Base, nullptr, "IAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonster_Base_IAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_Base_IAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonster_Base_IAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonster_Base_IAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMonster_Base_MonsterAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonster_Base_MonsterAttack_Statics::Function_MetaDataParams[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Monster_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonster_Base_MonsterAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonster_Base, nullptr, "MonsterAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonster_Base_MonsterAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonster_Base_MonsterAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonster_Base_MonsterAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonster_Base_MonsterAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMonster_Base_NoRegister()
	{
		return AMonster_Base::StaticClass();
	}
	struct Z_Construct_UClass_AMonster_Base_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateCom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateCom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDamageMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IsDamageMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAttackMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_IsAttackMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonster_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMonster_Base_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMonster_Base_IAttack, "IAttack" }, // 524116017
		{ &Z_Construct_UFunction_AMonster_Base_MonsterAttack, "MonsterAttack" }, // 3568602519
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Base_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Monster_Base.h" },
		{ "ModuleRelativePath", "Public/Monster_Base.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Base_Statics::NewProp_StateCom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "State" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Monster_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Base_Statics::NewProp_StateCom = { "StateCom", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster_Base, StateCom), Z_Construct_UClass_UMonsterStateComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Base_Statics::NewProp_StateCom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Base_Statics::NewProp_StateCom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDamageMontage_MetaData[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Public/Monster_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDamageMontage = { "IsDamageMontage", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster_Base, IsDamageMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDamageMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDamageMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsAttackMontage_MetaData[] = {
		{ "Category", "Montage" },
		{ "ModuleRelativePath", "Public/Monster_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsAttackMontage = { "IsAttackMontage", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster_Base, IsAttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsAttackMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsAttackMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Base_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "profile" },
		{ "ModuleRelativePath", "Public/Monster_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMonster_Base_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster_Base, HP), METADATA_PARAMS(Z_Construct_UClass_AMonster_Base_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Base_Statics::NewProp_HP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonster_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Base_Statics::NewProp_StateCom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDamageMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsAttackMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Base_Statics::NewProp_HP,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMonster_Base_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMyTempInterface_NoRegister, (int32)VTABLE_OFFSET(AMonster_Base, IMyTempInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonster_Base_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonster_Base>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonster_Base_Statics::ClassParams = {
		&AMonster_Base::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMonster_Base_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Base_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMonster_Base_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Base_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonster_Base()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonster_Base_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonster_Base, 2446616400);
	template<> ROCKMAN_API UClass* StaticClass<AMonster_Base>()
	{
		return AMonster_Base::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonster_Base(Z_Construct_UClass_AMonster_Base, &AMonster_Base::StaticClass, TEXT("/Script/Rockman"), TEXT("AMonster_Base"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonster_Base);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
