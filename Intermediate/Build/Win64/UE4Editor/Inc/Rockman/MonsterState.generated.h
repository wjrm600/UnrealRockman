// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROCKMAN_MonsterState_generated_h
#error "MonsterState.generated.h already included, missing '#pragma once' in MonsterState.h"
#endif
#define ROCKMAN_MonsterState_generated_h

#define Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_SPARSE_DATA
#define Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_RPC_WRAPPERS
#define Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMonsterState(); \
	friend struct Z_Construct_UClass_UMonsterState_Statics; \
public: \
	DECLARE_CLASS(UMonsterState, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Rockman"), NO_API) \
	DECLARE_SERIALIZER(UMonsterState)


#define Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUMonsterState(); \
	friend struct Z_Construct_UClass_UMonsterState_Statics; \
public: \
	DECLARE_CLASS(UMonsterState, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Rockman"), NO_API) \
	DECLARE_SERIALIZER(UMonsterState)


#define Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMonsterState(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMonsterState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMonsterState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMonsterState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMonsterState(UMonsterState&&); \
	NO_API UMonsterState(const UMonsterState&); \
public:


#define Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMonsterState(UMonsterState&&); \
	NO_API UMonsterState(const UMonsterState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMonsterState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMonsterState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMonsterState)


#define Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_PRIVATE_PROPERTY_OFFSET
#define Rockman6_12__2__Source_Rockman_Public_MonsterState_h_20_PROLOG
#define Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_PRIVATE_PROPERTY_OFFSET \
	Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_SPARSE_DATA \
	Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_RPC_WRAPPERS \
	Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_INCLASS \
	Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_PRIVATE_PROPERTY_OFFSET \
	Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_SPARSE_DATA \
	Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_INCLASS_NO_PURE_DECLS \
	Rockman6_12__2__Source_Rockman_Public_MonsterState_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROCKMAN_API UClass* StaticClass<class UMonsterState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rockman6_12__2__Source_Rockman_Public_MonsterState_h


#define FOREACH_ENUM_MINPUT(op) \
	op(IDLE) \
	op(ATTACK) \
	op(DAMAGE) \
	op(JUMP) \
	op(CHASE) \
	op(SEARCH) \
	op(DEAD) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
