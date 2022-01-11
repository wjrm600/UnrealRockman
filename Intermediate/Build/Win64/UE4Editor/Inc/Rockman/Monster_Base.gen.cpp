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
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
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
			{ "MonsterAttack", &AMonster_Base::execMonsterAttack },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDamageMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IsDamageMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAttack_MetaData[];
#endif
		static void NewProp_IsAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDead_MetaData[];
#endif
		static void NewProp_IsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDamage_MetaData[];
#endif
		static void NewProp_IsDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonster_Base_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMonster_Base_Statics::FuncInfo[] = {
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDamageMontage_MetaData[] = {
		{ "ModuleRelativePath", "Public/Monster_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDamageMontage = { "IsDamageMontage", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster_Base, IsDamageMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDamageMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDamageMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Base_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "profile" },
		{ "ModuleRelativePath", "Public/Monster_Base.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMonster_Base_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonster_Base, HP), METADATA_PARAMS(Z_Construct_UClass_AMonster_Base_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Base_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsAttack_MetaData[] = {
		{ "Category", "state" },
		{ "ModuleRelativePath", "Public/Monster_Base.h" },
	};
#endif
	void Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsAttack_SetBit(void* Obj)
	{
		((AMonster_Base*)Obj)->IsAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsAttack = { "IsAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMonster_Base), &Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDead_MetaData[] = {
		{ "Category", "state" },
		{ "ModuleRelativePath", "Public/Monster_Base.h" },
	};
#endif
	void Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDead_SetBit(void* Obj)
	{
		((AMonster_Base*)Obj)->IsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDead = { "IsDead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMonster_Base), &Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDamage_MetaData[] = {
		{ "Category", "state" },
		{ "ModuleRelativePath", "Public/Monster_Base.h" },
	};
#endif
	void Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDamage_SetBit(void* Obj)
	{
		((AMonster_Base*)Obj)->IsDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDamage = { "IsDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMonster_Base), &Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonster_Base_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDamageMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Base_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonster_Base_Statics::NewProp_IsDamage,
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
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMonster_Base_Statics::PropPointers),
		0,
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
	IMPLEMENT_CLASS(AMonster_Base, 4104588393);
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
