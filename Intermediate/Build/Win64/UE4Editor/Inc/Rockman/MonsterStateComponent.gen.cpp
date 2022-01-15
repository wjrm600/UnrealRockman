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
	ROCKMAN_API UClass* Z_Construct_UClass_UStandState_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_UStandState();
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_state__MetaData[] = {
		{ "Category", "MonsterStateComponent" },
		{ "ModuleRelativePath", "Public/MonsterStateComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_state_ = { "state_", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMonsterStateComponent, state_), Z_Construct_UClass_UMonsterState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_state__MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMonsterStateComponent_Statics::NewProp_state__MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMonsterStateComponent_Statics::PropPointers[] = {
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
	IMPLEMENT_CLASS(UMonsterStateComponent, 2942039090);
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
	void UStandState::StaticRegisterNativesUStandState()
	{
	}
	UClass* Z_Construct_UClass_UStandState_NoRegister()
	{
		return UStandState::StaticClass();
	}
	struct Z_Construct_UClass_UStandState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStandState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMonsterState,
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStandState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MonsterStateComponent.h" },
		{ "ModuleRelativePath", "Public/MonsterStateComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStandState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStandState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStandState_Statics::ClassParams = {
		&UStandState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UStandState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStandState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStandState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStandState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStandState, 1737678385);
	template<> ROCKMAN_API UClass* StaticClass<UStandState>()
	{
		return UStandState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStandState(Z_Construct_UClass_UStandState, &UStandState::StaticClass, TEXT("/Script/Rockman"), TEXT("UStandState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStandState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
