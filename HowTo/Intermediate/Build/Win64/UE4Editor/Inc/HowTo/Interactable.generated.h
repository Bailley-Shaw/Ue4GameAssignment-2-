// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOWTO_Interactable_generated_h
#error "Interactable.generated.h already included, missing '#pragma once' in Interactable.h"
#endif
#define HOWTO_Interactable_generated_h

#define HowTo_Source_HowTo_Interactable_h_11_SPARSE_DATA
#define HowTo_Source_HowTo_Interactable_h_11_RPC_WRAPPERS \
	virtual void OnInteract_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnInteract);


#define HowTo_Source_HowTo_Interactable_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnInteract_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnInteract);


#define HowTo_Source_HowTo_Interactable_h_11_EVENT_PARMS
#define HowTo_Source_HowTo_Interactable_h_11_CALLBACK_WRAPPERS
#define HowTo_Source_HowTo_Interactable_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HOWTO_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOWTO_API, UInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HOWTO_API UInteractable(UInteractable&&); \
	HOWTO_API UInteractable(const UInteractable&); \
public:


#define HowTo_Source_HowTo_Interactable_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	HOWTO_API UInteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	HOWTO_API UInteractable(UInteractable&&); \
	HOWTO_API UInteractable(const UInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(HOWTO_API, UInteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractable)


#define HowTo_Source_HowTo_Interactable_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractable(); \
	friend struct Z_Construct_UClass_UInteractable_Statics; \
public: \
	DECLARE_CLASS(UInteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/HowTo"), HOWTO_API) \
	DECLARE_SERIALIZER(UInteractable)


#define HowTo_Source_HowTo_Interactable_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HowTo_Source_HowTo_Interactable_h_11_GENERATED_UINTERFACE_BODY() \
	HowTo_Source_HowTo_Interactable_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_Source_HowTo_Interactable_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	HowTo_Source_HowTo_Interactable_h_11_GENERATED_UINTERFACE_BODY() \
	HowTo_Source_HowTo_Interactable_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_Source_HowTo_Interactable_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static void Execute_OnInteract(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HowTo_Source_HowTo_Interactable_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractable() {} \
public: \
	typedef UInteractable UClassType; \
	typedef IInteractable ThisClass; \
	static void Execute_OnInteract(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define HowTo_Source_HowTo_Interactable_h_8_PROLOG \
	HowTo_Source_HowTo_Interactable_h_11_EVENT_PARMS


#define HowTo_Source_HowTo_Interactable_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_Interactable_h_11_SPARSE_DATA \
	HowTo_Source_HowTo_Interactable_h_11_RPC_WRAPPERS \
	HowTo_Source_HowTo_Interactable_h_11_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_Interactable_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HowTo_Source_HowTo_Interactable_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HowTo_Source_HowTo_Interactable_h_11_SPARSE_DATA \
	HowTo_Source_HowTo_Interactable_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	HowTo_Source_HowTo_Interactable_h_11_CALLBACK_WRAPPERS \
	HowTo_Source_HowTo_Interactable_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOWTO_API UClass* StaticClass<class UInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HowTo_Source_HowTo_Interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
