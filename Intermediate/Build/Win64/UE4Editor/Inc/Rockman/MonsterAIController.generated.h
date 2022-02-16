// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROCKMAN_MonsterAIController_generated_h
#error "MonsterAIController.generated.h already included, missing '#pragma once' in MonsterAIController.h"
#endif
#define ROCKMAN_MonsterAIController_generated_h

#define Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_9_DELEGATE \
static inline void FBehaviorTreeBlackBoardChange_DelegateWrapper(const FMulticastScriptDelegate& BehaviorTreeBlackBoardChange) \
{ \
	BehaviorTreeBlackBoardChange.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_SPARSE_DATA
#define Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetDeadBlackBoard); \
	DECLARE_FUNCTION(execSetDamageBlackBoard); \
	DECLARE_FUNCTION(execSetAttackBlackBoard);


#define Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetDeadBlackBoard); \
	DECLARE_FUNCTION(execSetDamageBlackBoard); \
	DECLARE_FUNCTION(execSetAttackBlackBoard);


#define Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonsterAIController(); \
	friend struct Z_Construct_UClass_AMonsterAIController_Statics; \
public: \
	DECLARE_CLASS(AMonsterAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rockman"), NO_API) \
	DECLARE_SERIALIZER(AMonsterAIController)


#define Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAMonsterAIController(); \
	friend struct Z_Construct_UClass_AMonsterAIController_Statics; \
public: \
	DECLARE_CLASS(AMonsterAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rockman"), NO_API) \
	DECLARE_SERIALIZER(AMonsterAIController)


#define Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonsterAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonsterAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonsterAIController(AMonsterAIController&&); \
	NO_API AMonsterAIController(const AMonsterAIController&); \
public:


#define Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonsterAIController(AMonsterAIController&&); \
	NO_API AMonsterAIController(const AMonsterAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonsterAIController)


#define Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__e_BehaviorTree() { return STRUCT_OFFSET(AMonsterAIController, e_BehaviorTree); }


#define Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_13_PROLOG
#define Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_SPARSE_DATA \
	Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_RPC_WRAPPERS \
	Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_INCLASS \
	Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_PRIVATE_PROPERTY_OFFSET \
	Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_SPARSE_DATA \
	Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_INCLASS_NO_PURE_DECLS \
	Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROCKMAN_API UClass* StaticClass<class AMonsterAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rockman6_12__2__Source_Rockman_Public_MonsterAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
