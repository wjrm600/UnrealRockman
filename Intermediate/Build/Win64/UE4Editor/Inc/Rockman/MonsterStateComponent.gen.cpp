// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rockman/Public/MonsterStateComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterStateComponent() {}
// Cross Module References
	ROCKMAN_API UClass* Z_Construct_UClass_UMonsterStateComponent_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_UMonsterStateComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Rockman();
	ROCKMAN_API UEnum* Z_Construct_UEnum_Rockman_MInput();
	ROCKMAN_API UClass* Z_Construct_UClass_UMonsterState_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_UJumpState_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_UJumpState();
	ROCKMAN_API UClass* Z_Construct_UClass_UMonsterState();
	ROCKMAN_API UClass* Z_Construct_UClass_URunState_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_URunState();
	ROCKMAN_API UClass* Z_Construct_UClass_UAttackState_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_UAttackState();
	ROCKMAN_API UClass* Z_Construct_UClass_UIdleState_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_UIdleState();
	ROCKMAN_API UClass* Z_Construct_UClass_UDamageState_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_UDamageState();
	ROCKMAN_API UClass* Z_Construct_UClass_UDeadState_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_UDeadState();
// End Cross Module References
	DEFINE_FUNCTION(UMonsterStateComponent::execHandleInput)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_input);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInput(MInput(Z_Param_input));
		P_NATIVE_END;
	}
	void UMonsterStateComponent::StaticRegisterNativesUMonsterStateComponent()
	{
		UClass* Class = UMonsterStateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleInput", &UMonsterStateComponent::execHandleInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMonsterStateComponent_HandleInput_Statics
	{
		struct MonsterStateComponent_eventHandleInput_Parms
		{
			TEnumAsByte<MInput> input;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_input;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMonsterStateComponent_HandleInput_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MonsterStateComponent_eventHandleInput_Parms, input), Z_Construct_UEnum_Rockman_MInput, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMonsterStateComponent_HandleInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMonsterStateComponent_HandleInput_Statics::NewProp_input,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMonsterStateComponent_HandleInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MonsterStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMonsterStateComponent_HandleInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMonsterStateComponent, nullptr, "HandleInput", nullptr, nullptr, sizeof(MonsterStateComponent_eventHandleInput_Parms), Z_Construct_UFunction_UMonsterStateComponent_HandleInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMonsterStateComponent_HandleInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMonsterStateComponent_HandleInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMonsterStateComponent_HandleInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMonsterStateComponent_HandleInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMonsterStateComponent_HandleInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMonsterStateComponent_NoRegister()
	{
		return UMonsterStateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMonsterStateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsIdle_MetaData[];
#endif
		static void NewProp_IsIdle_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsIdle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsJump_MetaData[];
#endif
		static void NewProp_IsJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsJump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRun_MetaData[];
#endif
		static void NewProp_IsRun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_state__MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_state_;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMonsterStateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMonsterStateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMonsterStateComponent_HandleInput, "HandleInput" }, // 1060274457
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterStateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MonsterStateComponent.h" },
		{ "ModuleRelativePath", "Public/MonsterStateComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsAttack_MetaData[] = {
		{ "Category", "state" },
		{ "ModuleRelativePath", "Public/MonsterStateComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsAttack_SetBit(void* Obj)
	{
		((UMonsterStateComponent*)Obj)->IsAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsAttack = { "IsAttack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMonsterStateComponent), &Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsDead_MetaData[] = {
		{ "Category", "state" },
		{ "ModuleRelativePath", "Public/MonsterStateComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsDead_SetBit(void* Obj)
	{
		((UMonsterStateComponent*)Obj)->IsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsDead = { "IsDead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMonsterStateComponent), &Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsDamage_MetaData[] = {
		{ "Category", "state" },
		{ "ModuleRelativePath", "Public/MonsterStateComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsDamage_SetBit(void* Obj)
	{
		((UMonsterStateComponent*)Obj)->IsDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsDamage = { "IsDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMonsterStateComponent), &Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsIdle_MetaData[] = {
		{ "Category", "state" },
		{ "ModuleRelativePath", "Public/MonsterStateComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsIdle_SetBit(void* Obj)
	{
		((UMonsterStateComponent*)Obj)->IsIdle = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsIdle = { "IsIdle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMonsterStateComponent), &Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsIdle_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsIdle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsIdle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsJump_MetaData[] = {
		{ "Category", "state" },
		{ "ModuleRelativePath", "Public/MonsterStateComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsJump_SetBit(void* Obj)
	{
		((UMonsterStateComponent*)Obj)->IsJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsJump = { "IsJump", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMonsterStateComponent), &Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsJump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsRun_MetaData[] = {
		{ "Category", "state" },
		{ "ModuleRelativePath", "Public/MonsterStateComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsRun_SetBit(void* Obj)
	{
		((UMonsterStateComponent*)Obj)->IsRun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsRun = { "IsRun", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMonsterStateComponent), &Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsRun_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsRun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsRun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_state__MetaData[] = {
		{ "Category", "MonsterStateComponent" },
		{ "ModuleRelativePath", "Public/MonsterStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_state_ = { "state_", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMonsterStateComponent, state_), Z_Construct_UClass_UMonsterState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_state__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_state__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMonsterStateComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsIdle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_IsRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_state_,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMonsterStateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMonsterStateComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMonsterStateComponent_Statics::ClassParams = {
		&UMonsterStateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMonsterStateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterStateComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMonsterStateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterStateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMonsterStateComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMonsterStateComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMonsterStateComponent, 1835027947);
	template<> ROCKMAN_API UClass* StaticClass<UMonsterStateComponent>()
	{
		return UMonsterStateComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMonsterStateComponent(Z_Construct_UClass_UMonsterStateComponent, &UMonsterStateComponent::StaticClass, TEXT("/Script/Rockman"), TEXT("UMonsterStateComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMonsterStateComponent);
	void UJumpState::StaticRegisterNativesUJumpState()
	{
	}
	UClass* Z_Construct_UClass_UJumpState_NoRegister()
	{
		return UJumpState::StaticClass();
	}
	struct Z_Construct_UClass_UJumpState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJumpState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMonsterState,
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJumpState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MonsterStateComponent.h" },
		{ "ModuleRelativePath", "Public/MonsterStateComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJumpState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJumpState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UJumpState_Statics::ClassParams = {
		&UJumpState::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UJumpState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJumpState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJumpState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UJumpState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UJumpState, 3756043947);
	template<> ROCKMAN_API UClass* StaticClass<UJumpState>()
	{
		return UJumpState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UJumpState(Z_Construct_UClass_UJumpState, &UJumpState::StaticClass, TEXT("/Script/Rockman"), TEXT("UJumpState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJumpState);
	void URunState::StaticRegisterNativesURunState()
	{
	}
	UClass* Z_Construct_UClass_URunState_NoRegister()
	{
		return URunState::StaticClass();
	}
	struct Z_Construct_UClass_URunState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URunState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMonsterState,
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URunState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MonsterStateComponent.h" },
		{ "ModuleRelativePath", "Public/MonsterStateComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URunState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URunState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URunState_Statics::ClassParams = {
		&URunState::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URunState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URunState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URunState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URunState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URunState, 856882067);
	template<> ROCKMAN_API UClass* StaticClass<URunState>()
	{
		return URunState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URunState(Z_Construct_UClass_URunState, &URunState::StaticClass, TEXT("/Script/Rockman"), TEXT("URunState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URunState);
	void UAttackState::StaticRegisterNativesUAttackState()
	{
	}
	UClass* Z_Construct_UClass_UAttackState_NoRegister()
	{
		return UAttackState::StaticClass();
	}
	struct Z_Construct_UClass_UAttackState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttackState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMonsterState,
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttackState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MonsterStateComponent.h" },
		{ "ModuleRelativePath", "Public/MonsterStateComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttackState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAttackState_Statics::ClassParams = {
		&UAttackState::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAttackState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttackState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttackState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAttackState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAttackState, 274089729);
	template<> ROCKMAN_API UClass* StaticClass<UAttackState>()
	{
		return UAttackState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAttackState(Z_Construct_UClass_UAttackState, &UAttackState::StaticClass, TEXT("/Script/Rockman"), TEXT("UAttackState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackState);
	void UIdleState::StaticRegisterNativesUIdleState()
	{
	}
	UClass* Z_Construct_UClass_UIdleState_NoRegister()
	{
		return UIdleState::StaticClass();
	}
	struct Z_Construct_UClass_UIdleState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIdleState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMonsterState,
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIdleState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MonsterStateComponent.h" },
		{ "ModuleRelativePath", "Public/MonsterStateComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIdleState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIdleState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIdleState_Statics::ClassParams = {
		&UIdleState::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIdleState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIdleState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIdleState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIdleState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIdleState, 3353478806);
	template<> ROCKMAN_API UClass* StaticClass<UIdleState>()
	{
		return UIdleState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIdleState(Z_Construct_UClass_UIdleState, &UIdleState::StaticClass, TEXT("/Script/Rockman"), TEXT("UIdleState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIdleState);
	void UDamageState::StaticRegisterNativesUDamageState()
	{
	}
	UClass* Z_Construct_UClass_UDamageState_NoRegister()
	{
		return UDamageState::StaticClass();
	}
	struct Z_Construct_UClass_UDamageState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMonsterState,
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MonsterStateComponent.h" },
		{ "ModuleRelativePath", "Public/MonsterStateComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDamageState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDamageState_Statics::ClassParams = {
		&UDamageState::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDamageState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDamageState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDamageState, 3323100029);
	template<> ROCKMAN_API UClass* StaticClass<UDamageState>()
	{
		return UDamageState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDamageState(Z_Construct_UClass_UDamageState, &UDamageState::StaticClass, TEXT("/Script/Rockman"), TEXT("UDamageState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageState);
	void UDeadState::StaticRegisterNativesUDeadState()
	{
	}
	UClass* Z_Construct_UClass_UDeadState_NoRegister()
	{
		return UDeadState::StaticClass();
	}
	struct Z_Construct_UClass_UDeadState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeadState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMonsterState,
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeadState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MonsterStateComponent.h" },
		{ "ModuleRelativePath", "Public/MonsterStateComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeadState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeadState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeadState_Statics::ClassParams = {
		&UDeadState::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDeadState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeadState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeadState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeadState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeadState, 3478583);
	template<> ROCKMAN_API UClass* StaticClass<UDeadState>()
	{
		return UDeadState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeadState(Z_Construct_UClass_UDeadState, &UDeadState::StaticClass, TEXT("/Script/Rockman"), TEXT("UDeadState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeadState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
