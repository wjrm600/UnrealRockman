// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROCKMAN_Monster_Base_generated_h
#error "Monster_Base.generated.h already included, missing '#pragma once' in Monster_Base.h"
#endif
#define ROCKMAN_Monster_Base_generated_h

#define Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_SPARSE_DATA
#define Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIAttack); \
	DECLARE_FUNCTION(execMonsterAttack);


#define Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIAttack); \
	DECLARE_FUNCTION(execMonsterAttack);


#define Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonster_Base(); \
	friend struct Z_Construct_UClass_AMonster_Base_Statics; \
public: \
	DECLARE_CLASS(AMonster_Base, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rockman"), NO_API) \
	DECLARE_SERIALIZER(AMonster_Base) \
	virtual UObject* _getUObject() const override { return const_cast<AMonster_Base*>(this); }


#define Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMonster_Base(); \
	friend struct Z_Construct_UClass_AMonster_Base_Statics; \
public: \
	DECLARE_CLASS(AMonster_Base, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rockman"), NO_API) \
	DECLARE_SERIALIZER(AMonster_Base) \
	virtual UObject* _getUObject() const override { return const_cast<AMonster_Base*>(this); }


#define Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonster_Base(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonster_Base) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster_Base); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster_Base(AMonster_Base&&); \
	NO_API AMonster_Base(const AMonster_Base&); \
public:


#define Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonster_Base(AMonster_Base&&); \
	NO_API AMonster_Base(const AMonster_Base&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonster_Base); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonster_Base); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonster_Base)


#define Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_PRIVATE_PROPERTY_OFFSET
#define Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_12_PROLOG
#define Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_PRIVATE_PROPERTY_OFFSET \
	Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_SPARSE_DATA \
	Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_RPC_WRAPPERS \
	Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_INCLASS \
	Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_PRIVATE_PROPERTY_OFFSET \
	Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_SPARSE_DATA \
	Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_INCLASS_NO_PURE_DECLS \
	Rockman6_12__2__Source_Rockman_Public_Monster_Base_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROCKMAN_API UClass* StaticClass<class AMonster_Base>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rockman6_12__2__Source_Rockman_Public_Monster_Base_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
