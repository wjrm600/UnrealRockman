// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef ROCKMAN_RM_Projectile_generated_h
#error "RM_Projectile.generated.h already included, missing '#pragma once' in RM_Projectile.h"
#endif
#define ROCKMAN_RM_Projectile_generated_h

#define UnrealRockman_Source_Rockman_RM_Projectile_h_14_SPARSE_DATA
#define UnrealRockman_Source_Rockman_RM_Projectile_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execProjectileSetLocation);


#define UnrealRockman_Source_Rockman_RM_Projectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execProjectileSetLocation);


#define UnrealRockman_Source_Rockman_RM_Projectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARM_Projectile(); \
	friend struct Z_Construct_UClass_ARM_Projectile_Statics; \
public: \
	DECLARE_CLASS(ARM_Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rockman"), NO_API) \
	DECLARE_SERIALIZER(ARM_Projectile)


#define UnrealRockman_Source_Rockman_RM_Projectile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesARM_Projectile(); \
	friend struct Z_Construct_UClass_ARM_Projectile_Statics; \
public: \
	DECLARE_CLASS(ARM_Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rockman"), NO_API) \
	DECLARE_SERIALIZER(ARM_Projectile)


#define UnrealRockman_Source_Rockman_RM_Projectile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARM_Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARM_Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARM_Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARM_Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARM_Projectile(ARM_Projectile&&); \
	NO_API ARM_Projectile(const ARM_Projectile&); \
public:


#define UnrealRockman_Source_Rockman_RM_Projectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARM_Projectile(ARM_Projectile&&); \
	NO_API ARM_Projectile(const ARM_Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARM_Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARM_Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARM_Projectile)


#define UnrealRockman_Source_Rockman_RM_Projectile_h_14_PRIVATE_PROPERTY_OFFSET
#define UnrealRockman_Source_Rockman_RM_Projectile_h_11_PROLOG
#define UnrealRockman_Source_Rockman_RM_Projectile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealRockman_Source_Rockman_RM_Projectile_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealRockman_Source_Rockman_RM_Projectile_h_14_SPARSE_DATA \
	UnrealRockman_Source_Rockman_RM_Projectile_h_14_RPC_WRAPPERS \
	UnrealRockman_Source_Rockman_RM_Projectile_h_14_INCLASS \
	UnrealRockman_Source_Rockman_RM_Projectile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UnrealRockman_Source_Rockman_RM_Projectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UnrealRockman_Source_Rockman_RM_Projectile_h_14_PRIVATE_PROPERTY_OFFSET \
	UnrealRockman_Source_Rockman_RM_Projectile_h_14_SPARSE_DATA \
	UnrealRockman_Source_Rockman_RM_Projectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	UnrealRockman_Source_Rockman_RM_Projectile_h_14_INCLASS_NO_PURE_DECLS \
	UnrealRockman_Source_Rockman_RM_Projectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROCKMAN_API UClass* StaticClass<class ARM_Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UnrealRockman_Source_Rockman_RM_Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
