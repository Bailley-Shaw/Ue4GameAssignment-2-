// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef HOWTO_BasicInteractive_generated_h
#error "BasicInteractive.generated.h already included, missing '#pragma once' in BasicInteractive.h"
#endif
#define HOWTO_BasicInteractive_generated_h

#define HowTo_Source_HowTo_BasicInteractive_h_11_SPARSE_DATA
#define HowTo_Source_HowTo_BasicInteractive_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execBeginOverlap);


#define HowTo_Source_HowTo_BasicInteractive_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execBeginOverlap);


#define HowTo_Source_HowTo_BasicInteractive_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicInteractive(); \
	friend struct Z_Construct_UClass_ABasicInteractive_Statics; \
public: \
	DECLARE_CLASS(ABasicInteractive, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(ABasicInteractive)


#define HowTo_Source_HowTo_BasicInteractive_h_11_INCLASS \
private: \
	static void StaticRegisterNativesABasicInteractive(); \
	friend struct Z_Construct_UClass_ABasicInteractive_Statics; \
public: \
	DECLARE_CLASS(ABasicInteractive, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(ABasicInteractive)


#define HowTo_Source_HowTo_BasicInteractive_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicInteractive(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicInteractive) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicInteractive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicInteractive); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicInteractive(ABasicInteractive&&); \
	NO_API ABasicInteractive(const ABasicInteractive&); \
public:


#define HowTo_Source_HowTo_BasicInteractive_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicInteractive(ABasicInteractive&&); \
	NO_API ABasicInteractive(const ABasicInteractive&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicInteractive); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicInteractive); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicInteractive)


#define HowTo_Source_HowTo_BasicInteractive_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootScene() { return STRUCT_OFFSET(ABasicInteractive, RootScene); } \
	FORCEINLINE static uint32 __PPO__Trigger() { return STRUCT_OFFSET(ABasicInteractive, Trigger); } \
	FORCEINLINE static uint32 __PPO__InteractiveName() { return STRUCT_OFFSET(ABasicInteractive, InteractiveName); } \
	FORCEINLINE static uint32 __PPO__QuestID() { return STRUCT_OFFSET(ABasicInteractive, QuestID); } \
	FORCEINLINE static uint32 __PPO__QuestActivated() { return STRUCT_OFFSET(ABasicInteractive, QuestActivated); }


#define HowTo_Source_HowTo_BasicInteractive_h_8_PROLOG
#define HowTo_Source_HowTo_BasicInteractive_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_BasicInteractive_h_11_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_BasicInteractive_h_11_SPARSE_DATA \
	HowTo_Source_HowTo_BasicInteractive_h_11_RPC_WRAPPERS \
	HowTo_Source_HowTo_BasicInteractive_h_11_INCLASS \
	HowTo_Source_HowTo_BasicInteractive_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_Source_HowTo_BasicInteractive_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_BasicInteractive_h_11_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_BasicInteractive_h_11_SPARSE_DATA \
	HowTo_Source_HowTo_BasicInteractive_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_Source_HowTo_BasicInteractive_h_11_INCLASS_NO_PURE_DECLS \
	HowTo_Source_HowTo_BasicInteractive_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOWTO_API UClass* StaticClass<class ABasicInteractive>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_Source_HowTo_BasicInteractive_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
