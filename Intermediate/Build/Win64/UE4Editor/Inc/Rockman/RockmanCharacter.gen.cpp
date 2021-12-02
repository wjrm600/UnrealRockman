// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rockman/RockmanCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRockmanCharacter() {}
// Cross Module References
	ROCKMAN_API UScriptStruct* Z_Construct_UScriptStruct_FCommand();
	UPackage* Z_Construct_UPackage__Script_Rockman();
	ROCKMAN_API UScriptStruct* Z_Construct_UScriptStruct_FInputInfo();
	ROCKMAN_API UClass* Z_Construct_UClass_ARockmanCharacter_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_ARockmanCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ROCKMAN_API UClass* Z_Construct_UClass_UProjectilePoolComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FCommand::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ROCKMAN_API uint32 Get_Z_Construct_UScriptStruct_FCommand_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCommand, Z_Construct_UPackage__Script_Rockman(), TEXT("Command"), sizeof(FCommand), Get_Z_Construct_UScriptStruct_FCommand_Hash());
	}
	return Singleton;
}
template<> ROCKMAN_API UScriptStruct* StaticStruct<FCommand>()
{
	return FCommand::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCommand(FCommand::StaticStruct, TEXT("/Script/Rockman"), TEXT("Command"), false, nullptr, nullptr);
static struct FScriptStruct_Rockman_StaticRegisterNativesFCommand
{
	FScriptStruct_Rockman_StaticRegisterNativesFCommand()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Command")),new UScriptStruct::TCppStructOps<FCommand>);
	}
} ScriptStruct_Rockman_StaticRegisterNativesFCommand;
	struct Z_Construct_UScriptStruct_FCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sComName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sComName;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ComInputs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComInputs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComInputs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommand_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "RockmanCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCommand>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommand_Statics::NewProp_sComName_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "RockmanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCommand_Statics::NewProp_sComName = { "sComName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommand, sComName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_sComName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_sComName_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCommand_Statics::NewProp_ComInputs_Inner = { "ComInputs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCommand_Statics::NewProp_ComInputs_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "RockmanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCommand_Statics::NewProp_ComInputs = { "ComInputs", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCommand, ComInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_ComInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommand_Statics::NewProp_ComInputs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommand_Statics::NewProp_sComName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommand_Statics::NewProp_ComInputs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCommand_Statics::NewProp_ComInputs,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
		nullptr,
		&NewStructOps,
		"Command",
		sizeof(FCommand),
		alignof(FCommand),
		Z_Construct_UScriptStruct_FCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommand_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCommand_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCommand_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCommand()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCommand_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Rockman();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Command"), sizeof(FCommand), Get_Z_Construct_UScriptStruct_FCommand_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCommand_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCommand_Hash() { return 939907594U; }
class UScriptStruct* FInputInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ROCKMAN_API uint32 Get_Z_Construct_UScriptStruct_FInputInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputInfo, Z_Construct_UPackage__Script_Rockman(), TEXT("InputInfo"), sizeof(FInputInfo), Get_Z_Construct_UScriptStruct_FInputInfo_Hash());
	}
	return Singleton;
}
template<> ROCKMAN_API UScriptStruct* StaticStruct<FInputInfo>()
{
	return FInputInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInputInfo(FInputInfo::StaticStruct, TEXT("/Script/Rockman"), TEXT("InputInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Rockman_StaticRegisterNativesFInputInfo
{
	FScriptStruct_Rockman_StaticRegisterNativesFInputInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InputInfo")),new UScriptStruct::TCppStructOps<FInputInfo>);
	}
} ScriptStruct_Rockman_StaticRegisterNativesFInputInfo;
	struct Z_Construct_UScriptStruct_FInputInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sInputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sInputName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fTimeStamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fTimeStamp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "RockmanCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_sInputName_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "RockmanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_sInputName = { "sInputName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputInfo, sInputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_sInputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_sInputName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_fTimeStamp_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "RockmanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_fTimeStamp = { "fTimeStamp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInputInfo, fTimeStamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_fTimeStamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_fTimeStamp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_sInputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputInfo_Statics::NewProp_fTimeStamp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
		nullptr,
		&NewStructOps,
		"InputInfo",
		sizeof(FInputInfo),
		alignof(FInputInfo),
		Z_Construct_UScriptStruct_FInputInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInputInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Rockman();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InputInfo"), sizeof(FInputInfo), Get_Z_Construct_UScriptStruct_FInputInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInputInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInputInfo_Hash() { return 2782151357U; }
	DEFINE_FUNCTION(ARockmanCharacter::execStartCommand)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_commandname);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartCommand(Z_Param_commandname);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARockmanCharacter::execCheckInputBufferForCommand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CheckInputBufferForCommand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARockmanCharacter::execRemoveInputFromInputBuffer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveInputFromInputBuffer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARockmanCharacter::execAddInputToInputBuffer)
	{
		P_GET_STRUCT(FInputInfo,Z_Param_inputinfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInputToInputBuffer(Z_Param_inputinfo);
		P_NATIVE_END;
	}
	void ARockmanCharacter::StaticRegisterNativesARockmanCharacter()
	{
		UClass* Class = ARockmanCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInputToInputBuffer", &ARockmanCharacter::execAddInputToInputBuffer },
			{ "CheckInputBufferForCommand", &ARockmanCharacter::execCheckInputBufferForCommand },
			{ "RemoveInputFromInputBuffer", &ARockmanCharacter::execRemoveInputFromInputBuffer },
			{ "StartCommand", &ARockmanCharacter::execStartCommand },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARockmanCharacter_AddInputToInputBuffer_Statics
	{
		struct RockmanCharacter_eventAddInputToInputBuffer_Parms
		{
			FInputInfo inputinfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_inputinfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARockmanCharacter_AddInputToInputBuffer_Statics::NewProp_inputinfo = { "inputinfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RockmanCharacter_eventAddInputToInputBuffer_Parms, inputinfo), Z_Construct_UScriptStruct_FInputInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARockmanCharacter_AddInputToInputBuffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARockmanCharacter_AddInputToInputBuffer_Statics::NewProp_inputinfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARockmanCharacter_AddInputToInputBuffer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//InputBufferSystem\n" },
		{ "ModuleRelativePath", "RockmanCharacter.h" },
		{ "ToolTip", "InputBufferSystem" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARockmanCharacter_AddInputToInputBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARockmanCharacter, nullptr, "AddInputToInputBuffer", nullptr, nullptr, sizeof(RockmanCharacter_eventAddInputToInputBuffer_Parms), Z_Construct_UFunction_ARockmanCharacter_AddInputToInputBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARockmanCharacter_AddInputToInputBuffer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARockmanCharacter_AddInputToInputBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARockmanCharacter_AddInputToInputBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARockmanCharacter_AddInputToInputBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARockmanCharacter_AddInputToInputBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARockmanCharacter_CheckInputBufferForCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARockmanCharacter_CheckInputBufferForCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RockmanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARockmanCharacter_CheckInputBufferForCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARockmanCharacter, nullptr, "CheckInputBufferForCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARockmanCharacter_CheckInputBufferForCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARockmanCharacter_CheckInputBufferForCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARockmanCharacter_CheckInputBufferForCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARockmanCharacter_CheckInputBufferForCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARockmanCharacter_RemoveInputFromInputBuffer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARockmanCharacter_RemoveInputFromInputBuffer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RockmanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARockmanCharacter_RemoveInputFromInputBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARockmanCharacter, nullptr, "RemoveInputFromInputBuffer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARockmanCharacter_RemoveInputFromInputBuffer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARockmanCharacter_RemoveInputFromInputBuffer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARockmanCharacter_RemoveInputFromInputBuffer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARockmanCharacter_RemoveInputFromInputBuffer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARockmanCharacter_StartCommand_Statics
	{
		struct RockmanCharacter_eventStartCommand_Parms
		{
			FString commandname;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_commandname;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ARockmanCharacter_StartCommand_Statics::NewProp_commandname = { "commandname", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RockmanCharacter_eventStartCommand_Parms, commandname), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARockmanCharacter_StartCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARockmanCharacter_StartCommand_Statics::NewProp_commandname,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARockmanCharacter_StartCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RockmanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARockmanCharacter_StartCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARockmanCharacter, nullptr, "StartCommand", nullptr, nullptr, sizeof(RockmanCharacter_eventStartCommand_Parms), Z_Construct_UFunction_ARockmanCharacter_StartCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARockmanCharacter_StartCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARockmanCharacter_StartCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARockmanCharacter_StartCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARockmanCharacter_StartCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARockmanCharacter_StartCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARockmanCharacter_NoRegister()
	{
		return ARockmanCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARockmanCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SideViewCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SideViewCameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectilePool_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectilePool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HP;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InputInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasUsedTempCommand_MetaData[];
#endif
		static void NewProp_bHasUsedTempCommand_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasUsedTempCommand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShoot_MetaData[];
#endif
		static void NewProp_bShoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShoot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARockmanCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Rockman,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARockmanCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARockmanCharacter_AddInputToInputBuffer, "AddInputToInputBuffer" }, // 2060182212
		{ &Z_Construct_UFunction_ARockmanCharacter_CheckInputBufferForCommand, "CheckInputBufferForCommand" }, // 511677032
		{ &Z_Construct_UFunction_ARockmanCharacter_RemoveInputFromInputBuffer, "RemoveInputFromInputBuffer" }, // 1903073511
		{ &Z_Construct_UFunction_ARockmanCharacter_StartCommand, "StartCommand" }, // 1907174263
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARockmanCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RockmanCharacter.h" },
		{ "ModuleRelativePath", "RockmanCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_SideViewCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Side view camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RockmanCharacter.h" },
		{ "ToolTip", "Side view camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_SideViewCameraComponent = { "SideViewCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARockmanCharacter, SideViewCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_SideViewCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_SideViewCameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera beside the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RockmanCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera beside the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARockmanCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_ProjectilePool_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RockmanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_ProjectilePool = { "ProjectilePool", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARockmanCharacter, ProjectilePool), Z_Construct_UClass_UProjectilePoolComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_ProjectilePool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_ProjectilePool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_CharName_MetaData[] = {
		{ "Category", "profile" },
		{ "ModuleRelativePath", "RockmanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_CharName = { "CharName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARockmanCharacter, CharName), METADATA_PARAMS(Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_CharName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_CharName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "profile" },
		{ "ModuleRelativePath", "RockmanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARockmanCharacter, HP), METADATA_PARAMS(Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_HP_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_InputInfo_Inner = { "InputInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_InputInfo_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "RockmanCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_InputInfo = { "InputInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARockmanCharacter, InputInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_InputInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_InputInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_bHasUsedTempCommand_MetaData[] = {
		{ "Category", "Commands" },
		{ "ModuleRelativePath", "RockmanCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_bHasUsedTempCommand_SetBit(void* Obj)
	{
		((ARockmanCharacter*)Obj)->bHasUsedTempCommand = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_bHasUsedTempCommand = { "bHasUsedTempCommand", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARockmanCharacter), &Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_bHasUsedTempCommand_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_bHasUsedTempCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_bHasUsedTempCommand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_bShoot_MetaData[] = {
		{ "Category", "Shoot" },
		{ "ModuleRelativePath", "RockmanCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_bShoot_SetBit(void* Obj)
	{
		((ARockmanCharacter*)Obj)->bShoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_bShoot = { "bShoot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARockmanCharacter), &Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_bShoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_bShoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_bShoot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARockmanCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_SideViewCameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_ProjectilePool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_CharName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_InputInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_InputInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_bHasUsedTempCommand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARockmanCharacter_Statics::NewProp_bShoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARockmanCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARockmanCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARockmanCharacter_Statics::ClassParams = {
		&ARockmanCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARockmanCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARockmanCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARockmanCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARockmanCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARockmanCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARockmanCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARockmanCharacter, 816784846);
	template<> ROCKMAN_API UClass* StaticClass<ARockmanCharacter>()
	{
		return ARockmanCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARockmanCharacter(Z_Construct_UClass_ARockmanCharacter, &ARockmanCharacter::StaticClass, TEXT("/Script/Rockman"), TEXT("ARockmanCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARockmanCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
