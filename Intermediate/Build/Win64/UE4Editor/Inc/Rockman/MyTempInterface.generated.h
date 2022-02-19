// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROCKMAN_MyTempInterface_generated_h
#error "MyTempInterface.generated.h already included, missing '#pragma once' in MyTempInterface.h"
#endif
#define ROCKMAN_MyTempInterface_generated_h

#define Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_SPARSE_DATA
#define Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_RPC_WRAPPERS
#define Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_RPC_WRAPPERS_NO_PURE_DECLS
#define Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyTempInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyTempInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyTempInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyTempInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyTempInterface(UMyTempInterface&&); \
	NO_API UMyTempInterface(const UMyTempInterface&); \
public:


#define Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyTempInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyTempInterface(UMyTempInterface&&); \
	NO_API UMyTempInterface(const UMyTempInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyTempInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyTempInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyTempInterface)


#define Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMyTempInterface(); \
	friend struct Z_Construct_UClass_UMyTempInterface_Statics; \
public: \
	DECLARE_CLASS(UMyTempInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Rockman"), NO_API) \
	DECLARE_SERIALIZER(UMyTempInterface)


#define Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_GENERATED_UINTERFACE_BODY() \
	Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_GENERATED_UINTERFACE_BODY() \
	Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMyTempInterface() {} \
public: \
	typedef UMyTempInterface UClassType; \
	typedef IMyTempInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_INCLASS_IINTERFACE \
protected: \
	virtual ~IMyTempInterface() {} \
public: \
	typedef UMyTempInterface UClassType; \
	typedef IMyTempInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Rockman6_12__2__Source_Rockman_MyTempInterface_h_4_PROLOG
#define Rockman6_12__2__Source_Rockman_MyTempInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_SPARSE_DATA \
	Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_RPC_WRAPPERS \
	Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Rockman6_12__2__Source_Rockman_MyTempInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_SPARSE_DATA \
	Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_RPC_WRAPPERS_NO_PURE_DECLS \
	Rockman6_12__2__Source_Rockman_MyTempInterface_h_7_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROCKMAN_API UClass* StaticClass<class UMyTempInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Rockman6_12__2__Source_Rockman_MyTempInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
