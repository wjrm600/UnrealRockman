// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rockman/Public/MonsterAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterAIController() {}
// Cross Module References
	ROCKMAN_API UFunction* Z_Construct_UDelegateFunction_Rockman_BehaviorTreeBlackBoardChange__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Rockman();
	ROCKMAN_API UClass* Z_Construct_UClass_AMonsterAIController_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_AMonsterAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Rockman_BehaviorTreeBlackBoardChange__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Rockman_BehaviorTreeBlackBoardChange__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rockman_BehaviorTreeBlackBoardChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rockman, nullptr, "BehaviorTreeBlackBoardChange__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Rockman_BehaviorTreeBlackBoardChange__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rockman_BehaviorTreeBlackBoardChange__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Rockman_BehaviorTreeBlackBoardChange__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Rockman_BehaviorTreeBlackBoardChange__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AMonsterAIController::execSetDeadBlackBoard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDeadBlackBoard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMonsterAIController::execSetDamageBlackBoard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDamageBlackBoard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMonsterAIController::execSetAttackBlackBoard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttackBlackBoard();
		P_NATIVE_END;
	}
	void AMonsterAIController::StaticRegisterNativesAMonsterAIController()
	{
		UClass* Class = AMonsterAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAttackBlackBoard", &AMonsterAIController::execSetAttackBlackBoard },
			{ "SetDamageBlackBoard", &AMonsterAIController::execSetDamageBlackBoard },
			{ "SetDeadBlackBoard", &AMonsterAIController::execSetDeadBlackBoard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMonsterAIController_SetAttackBlackBoard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonsterAIController_SetAttackBlackBoard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonsterAIController_SetAttackBlackBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonsterAIController, nullptr, "SetAttackBlackBoard", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonsterAIController_SetAttackBlackBoard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonsterAIController_SetAttackBlackBoard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonsterAIController_SetAttackBlackBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonsterAIController_SetAttackBlackBoard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMonsterAIController_SetDamageBlackBoard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonsterAIController_SetDamageBlackBoard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonsterAIController_SetDamageBlackBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonsterAIController, nullptr, "SetDamageBlackBoard", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonsterAIController_SetDamageBlackBoard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonsterAIController_SetDamageBlackBoard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonsterAIController_SetDamageBlackBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonsterAIController_SetDamageBlackBoard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMonsterAIController_SetDeadBlackBoard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMonsterAIController_SetDeadBlackBoard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMonsterAIController_SetDeadBlackBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMonsterAIController, nullptr, "SetDeadBlackBoard", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMonsterAIController_SetDeadBlackBoard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMonsterAIController_SetDeadBlackBoard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMonsterAIController_SetDeadBlackBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMonsterAIController_SetDeadBlackBoard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMonsterAIController_NoRegister()
	{
		return AMonsterAIController::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_e_BehaviorTree_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_e_BehaviorTree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FUNC_BTBBChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FUNC_BTBBChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMonsterAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMonsterAIController_SetAttackBlackBoard, "SetAttackBlackBoard" }, // 2240585605
		{ &Z_Construct_UFunction_AMonsterAIController_SetDamageBlackBoard, "SetDamageBlackBoard" }, // 1452888239
		{ &Z_Construct_UFunction_AMonsterAIController_SetDeadBlackBoard, "SetDeadBlackBoard" }, // 710826366
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MonsterAIController.h" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterAIController_Statics::NewProp_e_BehaviorTree_MetaData[] = {
		{ "Category", "MonsterAIController" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_e_BehaviorTree = { "e_BehaviorTree", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterAIController, e_BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonsterAIController_Statics::NewProp_e_BehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::NewProp_e_BehaviorTree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterAIController_Statics::NewProp_FUNC_BTBBChange_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/MonsterAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AMonsterAIController_Statics::NewProp_FUNC_BTBBChange = { "FUNC_BTBBChange", nullptr, (EPropertyFlags)0x00101000100a0001, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterAIController, FUNC_BTBBChange), Z_Construct_UDelegateFunction_Rockman_BehaviorTreeBlackBoardChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AMonsterAIController_Statics::NewProp_FUNC_BTBBChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::NewProp_FUNC_BTBBChange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_e_BehaviorTree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterAIController_Statics::NewProp_FUNC_BTBBChange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonsterAIController_Statics::ClassParams = {
		&AMonsterAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMonsterAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonsterAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonsterAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonsterAIController, 1389620413);
	template<> ROCKMAN_API UClass* StaticClass<AMonsterAIController>()
	{
		return AMonsterAIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonsterAIController(Z_Construct_UClass_AMonsterAIController, &AMonsterAIController::StaticClass, TEXT("/Script/Rockman"), TEXT("AMonsterAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
