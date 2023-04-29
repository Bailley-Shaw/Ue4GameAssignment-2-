// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOWTO_ComplexAnimInstance_generated_h
#error "ComplexAnimInstance.generated.h already included, missing '#pragma once' in ComplexAnimInstance.h"
#endif
#define HOWTO_ComplexAnimInstance_generated_h

#define HowTo_Source_HowTo_ComplexAnimInstance_h_15_SPARSE_DATA
#define HowTo_Source_HowTo_ComplexAnimInstance_h_15_RPC_WRAPPERS
#define HowTo_Source_HowTo_ComplexAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define HowTo_Source_HowTo_ComplexAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUComplexAnimInstance(); \
	friend struct Z_Construct_UClass_UComplexAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UComplexAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(UComplexAnimInstance)


#define HowTo_Source_HowTo_ComplexAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUComplexAnimInstance(); \
	friend struct Z_Construct_UClass_UComplexAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UComplexAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/HowTo"), NO_API) \
	DECLARE_SERIALIZER(UComplexAnimInstance)


#define HowTo_Source_HowTo_ComplexAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComplexAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComplexAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComplexAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComplexAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComplexAnimInstance(UComplexAnimInstance&&); \
	NO_API UComplexAnimInstance(const UComplexAnimInstance&); \
public:


#define HowTo_Source_HowTo_ComplexAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UComplexAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UComplexAnimInstance(UComplexAnimInstance&&); \
	NO_API UComplexAnimInstance(const UComplexAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UComplexAnimInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UComplexAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UComplexAnimInstance)


#define HowTo_Source_HowTo_ComplexAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RotationHead() { return STRUCT_OFFSET(UComplexAnimInstance, RotationHead); } \
	FORCEINLINE static uint32 __PPO__RotationHeadAlpha() { return STRUCT_OFFSET(UComplexAnimInstance, RotationHeadAlpha); } \
	FORCEINLINE static uint32 __PPO__MaxRotationHead() { return STRUCT_OFFSET(UComplexAnimInstance, MaxRotationHead); } \
	FORCEINLINE static uint32 __PPO__AlphaLeftArm() { return STRUCT_OFFSET(UComplexAnimInstance, AlphaLeftArm); } \
	FORCEINLINE static uint32 __PPO__AlphaRigthArm() { return STRUCT_OFFSET(UComplexAnimInstance, AlphaRigthArm); } \
	FORCEINLINE static uint32 __PPO__CurrentAnimation() { return STRUCT_OFFSET(UComplexAnimInstance, CurrentAnimation); }


#define HowTo_Source_HowTo_ComplexAnimInstance_h_12_PROLOG
#define HowTo_Source_HowTo_ComplexAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_ComplexAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_ComplexAnimInstance_h_15_SPARSE_DATA \
	HowTo_Source_HowTo_ComplexAnimInstance_h_15_RPC_WRAPPERS \
	HowTo_Source_HowTo_ComplexAnimInstance_h_15_INCLASS \
	HowTo_Source_HowTo_ComplexAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_Source_HowTo_ComplexAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_ComplexAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	HowTo_Source_HowTo_ComplexAnimInstance_h_15_SPARSE_DATA \
	HowTo_Source_HowTo_ComplexAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_Source_HowTo_ComplexAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	HowTo_Source_HowTo_ComplexAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOWTO_API UClass* StaticClass<class UComplexAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_Source_HowTo_ComplexAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
