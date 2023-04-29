// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HowTo/ItemInteractive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemInteractive() {}
// Cross Module References
	HOWTO_API UClass* Z_Construct_UClass_AItemInteractive_NoRegister();
	HOWTO_API UClass* Z_Construct_UClass_AItemInteractive();
	HOWTO_API UClass* Z_Construct_UClass_ABasicInteractive();
	UPackage* Z_Construct_UPackage__Script_HowTo();
	HOWTO_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AItemInteractive::execOnInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteract_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AItemInteractive_OnInteract = FName(TEXT("OnInteract"));
	void AItemInteractive::OnInteract()
	{
		ProcessEvent(FindFunctionChecked(NAME_AItemInteractive_OnInteract),NULL);
	}
	static FName NAME_AItemInteractive_OnItemCollected = FName(TEXT("OnItemCollected"));
	void AItemInteractive::OnItemCollected()
	{
		ProcessEvent(FindFunctionChecked(NAME_AItemInteractive_OnItemCollected),NULL);
	}
	void AItemInteractive::StaticRegisterNativesAItemInteractive()
	{
		UClass* Class = AItemInteractive::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteract", &AItemInteractive::execOnInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AItemInteractive_OnInteract_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemInteractive_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "Comment", "// Interaface\n" },
		{ "ModuleRelativePath", "ItemInteractive.h" },
		{ "ToolTip", "Interaface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemInteractive_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemInteractive, nullptr, "OnInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemInteractive_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemInteractive_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemInteractive_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemInteractive_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AItemInteractive_OnItemCollected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AItemInteractive_OnItemCollected_Statics::Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "ItemInteractive.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemInteractive_OnItemCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemInteractive, nullptr, "OnItemCollected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AItemInteractive_OnItemCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemInteractive_OnItemCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AItemInteractive_OnItemCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AItemInteractive_OnItemCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AItemInteractive_NoRegister()
	{
		return AItemInteractive::StaticClass();
	}
	struct Z_Construct_UClass_AItemInteractive_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bItemCollected_MetaData[];
#endif
		static void NewProp_bItemCollected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bItemCollected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemInteractive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasicInteractive,
		(UObject* (*)())Z_Construct_UPackage__Script_HowTo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AItemInteractive_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemInteractive_OnInteract, "OnInteract" }, // 978879466
		{ &Z_Construct_UFunction_AItemInteractive_OnItemCollected, "OnItemCollected" }, // 3601689437
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemInteractive_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ItemInteractive.h" },
		{ "ModuleRelativePath", "ItemInteractive.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemInteractive_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "ItemInteractive.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AItemInteractive_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AItemInteractive, ItemID), METADATA_PARAMS(Z_Construct_UClass_AItemInteractive_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemInteractive_Statics::NewProp_ItemID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemInteractive_Statics::NewProp_bItemCollected_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "ItemInteractive.h" },
	};
#endif
	void Z_Construct_UClass_AItemInteractive_Statics::NewProp_bItemCollected_SetBit(void* Obj)
	{
		((AItemInteractive*)Obj)->bItemCollected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AItemInteractive_Statics::NewProp_bItemCollected = { "bItemCollected", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AItemInteractive), &Z_Construct_UClass_AItemInteractive_Statics::NewProp_bItemCollected_SetBit, METADATA_PARAMS(Z_Construct_UClass_AItemInteractive_Statics::NewProp_bItemCollected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AItemInteractive_Statics::NewProp_bItemCollected_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemInteractive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemInteractive_Statics::NewProp_ItemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemInteractive_Statics::NewProp_bItemCollected,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AItemInteractive_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AItemInteractive, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemInteractive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemInteractive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItemInteractive_Statics::ClassParams = {
		&AItemInteractive::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AItemInteractive_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AItemInteractive_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AItemInteractive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItemInteractive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItemInteractive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItemInteractive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItemInteractive, 2295147914);
	template<> HOWTO_API UClass* StaticClass<AItemInteractive>()
	{
		return AItemInteractive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItemInteractive(Z_Construct_UClass_AItemInteractive, &AItemInteractive::StaticClass, TEXT("/Script/HowTo"), TEXT("AItemInteractive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemInteractive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
