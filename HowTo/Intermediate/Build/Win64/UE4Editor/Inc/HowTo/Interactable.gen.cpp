// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HowTo/Interactable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractable() {}
// Cross Module References
	HOWTO_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
	HOWTO_API UClass* Z_Construct_UClass_UInteractable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_HowTo();
// End Cross Module References
	DEFINE_FUNCTION(IInteractable::execOnInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteract_Implementation();
		P_NATIVE_END;
	}
	void IInteractable::OnInteract()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInteract instead.");
	}
	void UInteractable::StaticRegisterNativesUInteractable()
	{
		UClass* Class = UInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteract", &IInteractable::execOnInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractable_OnInteract_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractable_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractable_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractable, nullptr, "OnInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractable_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractable_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractable_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractable_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractable_NoRegister()
	{
		return UInteractable::StaticClass();
	}
	struct Z_Construct_UClass_UInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_HowTo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractable_OnInteract, "OnInteract" }, // 3786685750
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractable_Statics::ClassParams = {
		&UInteractable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractable, 228231456);
	template<> HOWTO_API UClass* StaticClass<UInteractable>()
	{
		return UInteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractable(Z_Construct_UClass_UInteractable, &UInteractable::StaticClass, TEXT("/Script/HowTo"), TEXT("UInteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractable);
	static FName NAME_UInteractable_OnInteract = FName(TEXT("OnInteract"));
	void IInteractable::Execute_OnInteract(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractable::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractable_OnInteract);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInteractable*)(O->GetNativeInterfaceAddress(UInteractable::StaticClass())))
		{
			I->OnInteract_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif