// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HowTo/Chest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChest() {}
// Cross Module References
	HOWTO_API UClass* Z_Construct_UClass_AChest_NoRegister();
	HOWTO_API UClass* Z_Construct_UClass_AChest();
	HOWTO_API UClass* Z_Construct_UClass_ABasicInteractive();
	UPackage* Z_Construct_UPackage__Script_HowTo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HOWTO_API UClass* Z_Construct_UClass_AItemInteractive_NoRegister();
	HOWTO_API UClass* Z_Construct_UClass_UInteractable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AChest::execOnInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteract_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AChest_OnInteract = FName(TEXT("OnInteract"));
	void AChest::OnInteract()
	{
		ProcessEvent(FindFunctionChecked(NAME_AChest_OnInteract),NULL);
	}
	void AChest::StaticRegisterNativesAChest()
	{
		UClass* Class = AChest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInteract", &AChest::execOnInteract },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AChest_OnInteract_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AChest_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interact" },
		{ "Comment", "// Interaface\n" },
		{ "ModuleRelativePath", "Chest.h" },
		{ "ToolTip", "Interaface" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AChest_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AChest, nullptr, "OnInteract", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AChest_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AChest_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AChest_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AChest_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AChest_NoRegister()
	{
		return AChest::StaticClass();
	}
	struct Z_Construct_UClass_AChest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reward_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Reward;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasicInteractive,
		(UObject* (*)())Z_Construct_UPackage__Script_HowTo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AChest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AChest_OnInteract, "OnInteract" }, // 3018582488
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChest_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Chest.h" },
		{ "ModuleRelativePath", "Chest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChest_Statics::NewProp_Reward_MetaData[] = {
		{ "Category", "Cat" },
		{ "ModuleRelativePath", "Chest.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AChest_Statics::NewProp_Reward = { "Reward", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AChest, Reward), Z_Construct_UClass_AItemInteractive_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AChest_Statics::NewProp_Reward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AChest_Statics::NewProp_Reward_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AChest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AChest_Statics::NewProp_Reward,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AChest_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractable_NoRegister, (int32)VTABLE_OFFSET(AChest, IInteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AChest_Statics::ClassParams = {
		&AChest::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AChest_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AChest_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AChest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AChest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AChest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AChest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AChest, 1871316553);
	template<> HOWTO_API UClass* StaticClass<AChest>()
	{
		return AChest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AChest(Z_Construct_UClass_AChest, &AChest::StaticClass, TEXT("/Script/HowTo"), TEXT("AChest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
