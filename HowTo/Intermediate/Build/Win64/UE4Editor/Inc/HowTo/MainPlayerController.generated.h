// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOWTO_MainPlayerController_generated_h
#error "MainPlayerController.generated.h already included, missing '#pragma once' in MainPlayerController.h"
#endif
#define HOWTO_MainPlayerController_generated_h

#define HowTo_Source_HowTo_MainPlayerController_h_13_SPARSE_DATA
#define HowTo_Source_HowTo_MainPlayerController_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFreeHands); \
	DECLARE_FUNCTION(execSwitchItem); \
	DECLARE_FUNCTION(execAction);


#define HowTo_Source_HowTo_MainPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFreeHands); \
	DECLARE_FUNCTION(execSwitchItem); \
	DECLARE_FUNCTION(execAction);


#define HowTo_Source_HowTo_MainPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainPlayerController(); \
	friend struct Z_Construct_UClass_AMainPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMainPlayerController, AUINavController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayerController)


#define HowTo_Source_HowTo_MainPlayerController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMainPlayerController(); \
	friend struct Z_Construct_UClass_AMainPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMainPlayerController, AUINavController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(AMainPlayerController)


#define HowTo_Source_HowTo_MainPlayerController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayerController(AMainPlayerController&&); \
	NO_API AMainPlayerController(const AMainPlayerController&); \
public:


#define HowTo_Source_HowTo_MainPlayerController_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainPlayerController() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMainPlayerController(AMainPlayerController&&); \
	NO_API AMainPlayerController(const AMainPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMainPlayerController)


#define HowTo_Source_HowTo_MainPlayerController_h_13_PRIVATE_PROPERTY_OFFSET
#define HowTo_Source_HowTo_MainPlayerController_h_10_PROLOG
#define HowTo_Source_HowTo_MainPlayerController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_MainPlayerController_h_13_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_MainPlayerController_h_13_SPARSE_DATA \
	HowTo_Source_HowTo_MainPlayerController_h_13_RPC_WRAPPERS \
	HowTo_Source_HowTo_MainPlayerController_h_13_INCLASS \
	HowTo_Source_HowTo_MainPlayerController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_Source_HowTo_MainPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_MainPlayerController_h_13_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_MainPlayerController_h_13_SPARSE_DATA \
	HowTo_Source_HowTo_MainPlayerController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_Source_HowTo_MainPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	HowTo_Source_HowTo_MainPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOWTO_API UClass* StaticClass<class AMainPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_Source_HowTo_MainPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
