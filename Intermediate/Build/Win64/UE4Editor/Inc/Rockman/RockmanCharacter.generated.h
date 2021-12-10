// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputInfo;
#ifdef ROCKMAN_RockmanCharacter_generated_h
#error "RockmanCharacter.generated.h already included, missing '#pragma once' in RockmanCharacter.h"
#endif
#define ROCKMAN_RockmanCharacter_generated_h

#define Rockman6_12__2__Source_Rockman_RockmanCharacter_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCommand_Statics; \
	ROCKMAN_API static class UScriptStruct* StaticStruct();


template<> ROCKMAN_API UScriptStruct* StaticStruct<struct FCommand>();

#define Rockman6_12__2__Source_Rockman_RockmanCharacter_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInputInfo_Statics; \
	ROCKMAN_API static class UScriptStruct* StaticStruct();


template<> ROCKMAN_API UScriptStruct* StaticStruct<struct FInputInfo>();

#define Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_SPARSE_DATA
#define Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartCommand); \
	DECLARE_FUNCTION(execCheckInputBufferForCommand); \
	DECLARE_FUNCTION(execRemoveInputFromInputBuffer); \
	DECLARE_FUNCTION(execAddInputToInputBuffer);


#define Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartCommand); \
	DECLARE_FUNCTION(execCheckInputBufferForCommand); \
	DECLARE_FUNCTION(execRemoveInputFromInputBuffer); \
	DECLARE_FUNCTION(execAddInputToInputBuffer);


#define Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARockmanCharacter(); \
	friend struct Z_Construct_UClass_ARockmanCharacter_Statics; \
public: \
	DECLARE_CLASS(ARockmanCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rockman"), NO_API) \
	DECLARE_SERIALIZER(ARockmanCharacter)


#define Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_INCLASS \
private: \
	static void StaticRegisterNativesARockmanCharacter(); \
	friend struct Z_Construct_UClass_ARockmanCharacter_Statics; \
public: \
	DECLARE_CLASS(ARockmanCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rockman"), NO_API) \
	DECLARE_SERIALIZER(ARockmanCharacter)


#define Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARockmanCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARockmanCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARockmanCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARockmanCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARockmanCharacter(ARockmanCharacter&&); \
	NO_API ARockmanCharacter(const ARockmanCharacter&); \
public:


#define Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARockmanCharacter(ARockmanCharacter&&); \
	NO_API ARockmanCharacter(const ARockmanCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARockmanCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARockmanCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARockmanCharacter)


#define Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(ARockmanCharacter, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ARockmanCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__ProjectilePool() { return STRUCT_OFFSET(ARockmanCharacter, ProjectilePool); } \
	FORCEINLINE static uint32 __PPO__Bridge_BP_Class() { return STRUCT_OFFSET(ARockmanCharacter, Bridge_BP_Class); }


#define Rockman6_12__2__Source_Rockman_RockmanCharacter_h_35_PROLOG
#define Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_PRIVATE_PROPERTY_OFFSET \
	Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_SPARSE_DATA \
	Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_RPC_WRAPPERS \
	Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_INCLASS \
	Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_PRIVATE_PROPERTY_OFFSET \
	Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_SPARSE_DATA \
	Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_INCLASS_NO_PURE_DECLS \
	Rockman6_12__2__Source_Rockman_RockmanCharacter_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROCKMAN_API UClass* StaticClass<class ARockmanCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rockman6_12__2__Source_Rockman_RockmanCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
