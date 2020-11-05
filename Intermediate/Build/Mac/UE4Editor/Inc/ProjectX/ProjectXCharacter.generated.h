// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTX_ProjectXCharacter_generated_h
#error "ProjectXCharacter.generated.h already included, missing '#pragma once' in ProjectXCharacter.h"
#endif
#define PROJECTX_ProjectXCharacter_generated_h

#define ProjectX_Source_ProjectX_ProjectXCharacter_h_12_SPARSE_DATA
#define ProjectX_Source_ProjectX_ProjectXCharacter_h_12_RPC_WRAPPERS
#define ProjectX_Source_ProjectX_ProjectXCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectX_Source_ProjectX_ProjectXCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectXCharacter(); \
	friend struct Z_Construct_UClass_AProjectXCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectXCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectX"), NO_API) \
	DECLARE_SERIALIZER(AProjectXCharacter)


#define ProjectX_Source_ProjectX_ProjectXCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProjectXCharacter(); \
	friend struct Z_Construct_UClass_AProjectXCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectXCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectX"), NO_API) \
	DECLARE_SERIALIZER(AProjectXCharacter)


#define ProjectX_Source_ProjectX_ProjectXCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectXCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectXCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectXCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectXCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectXCharacter(AProjectXCharacter&&); \
	NO_API AProjectXCharacter(const AProjectXCharacter&); \
public:


#define ProjectX_Source_ProjectX_ProjectXCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectXCharacter(AProjectXCharacter&&); \
	NO_API AProjectXCharacter(const AProjectXCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectXCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectXCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectXCharacter)


#define ProjectX_Source_ProjectX_ProjectXCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(AProjectXCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AProjectXCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AProjectXCharacter, CursorToWorld); }


#define ProjectX_Source_ProjectX_ProjectXCharacter_h_9_PROLOG
#define ProjectX_Source_ProjectX_ProjectXCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectX_Source_ProjectX_ProjectXCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectX_Source_ProjectX_ProjectXCharacter_h_12_SPARSE_DATA \
	ProjectX_Source_ProjectX_ProjectXCharacter_h_12_RPC_WRAPPERS \
	ProjectX_Source_ProjectX_ProjectXCharacter_h_12_INCLASS \
	ProjectX_Source_ProjectX_ProjectXCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectX_Source_ProjectX_ProjectXCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectX_Source_ProjectX_ProjectXCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectX_Source_ProjectX_ProjectXCharacter_h_12_SPARSE_DATA \
	ProjectX_Source_ProjectX_ProjectXCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectX_Source_ProjectX_ProjectXCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ProjectX_Source_ProjectX_ProjectXCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTX_API UClass* StaticClass<class AProjectXCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectX_Source_ProjectX_ProjectXCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
