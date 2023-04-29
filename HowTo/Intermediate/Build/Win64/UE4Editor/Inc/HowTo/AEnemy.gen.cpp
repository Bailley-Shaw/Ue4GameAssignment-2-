// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HowTo/AEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAEnemy() {}
// Cross Module References
	HOWTO_API UClass* Z_Construct_UClass_AAEnemy_NoRegister();
	HOWTO_API UClass* Z_Construct_UClass_AAEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_HowTo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	HOWTO_API UClass* Z_Construct_UClass_AItemInteractive_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AAEnemy::execOnTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTakeDamage(Z_Param_DamageAmount);
		P_NATIVE_END;
	}
	static FName NAME_AAEnemy_OnReward = FName(TEXT("OnReward"));
	void AAEnemy::OnReward()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAEnemy_OnReward),NULL);
	}
	void AAEnemy::StaticRegisterNativesAAEnemy()
	{
		UClass* Class = AAEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTakeDamage", &AAEnemy::execOnTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAEnemy_OnReward_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAEnemy_OnReward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rewards" },
		{ "ModuleRelativePath", "AEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAEnemy_OnReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAEnemy, nullptr, "OnReward", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAEnemy_OnReward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAEnemy_OnReward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAEnemy_OnReward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAEnemy_OnReward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAEnemy_OnTakeDamage_Statics
	{
		struct AEnemy_eventOnTakeDamage_Parms
		{
			float DamageAmount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAEnemy_OnTakeDamage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_eventOnTakeDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAEnemy_OnTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAEnemy_OnTakeDamage_Statics::NewProp_DamageAmount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAEnemy_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "health" },
		{ "ModuleRelativePath", "AEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAEnemy_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAEnemy, nullptr, "OnTakeDamage", nullptr, nullptr, sizeof(AEnemy_eventOnTakeDamage_Parms), Z_Construct_UFunction_AAEnemy_OnTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAEnemy_OnTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAEnemy_OnTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAEnemy_OnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAEnemy_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAEnemy_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAEnemy_NoRegister()
	{
		return AAEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AAEnemy_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PatrolRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PatrolRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_HowTo,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAEnemy_OnReward, "OnReward" }, // 3545015358
		{ &Z_Construct_UFunction_AAEnemy_OnTakeDamage, "OnTakeDamage" }, // 334612846
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AEnemy.h" },
		{ "ModuleRelativePath", "AEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAEnemy_Statics::NewProp_Reward_MetaData[] = {
		{ "Category", "Rewards" },
		{ "ModuleRelativePath", "AEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAEnemy_Statics::NewProp_Reward = { "Reward", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAEnemy, Reward), Z_Construct_UClass_AItemInteractive_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AAEnemy_Statics::NewProp_Reward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAEnemy_Statics::NewProp_Reward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAEnemy_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "AEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEnemy_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAEnemy, MaxHealth), METADATA_PARAMS(Z_Construct_UClass_AAEnemy_Statics::NewProp_MaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAEnemy_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAEnemy_Statics::NewProp_PatrolRadius_MetaData[] = {
		{ "Category", "AEnemy" },
		{ "ModuleRelativePath", "AEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAEnemy_Statics::NewProp_PatrolRadius = { "PatrolRadius", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAEnemy, PatrolRadius), METADATA_PARAMS(Z_Construct_UClass_AAEnemy_Statics::NewProp_PatrolRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAEnemy_Statics::NewProp_PatrolRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEnemy_Statics::NewProp_Reward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEnemy_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAEnemy_Statics::NewProp_PatrolRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAEnemy_Statics::ClassParams = {
		&AAEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAEnemy, 3692616847);
	template<> HOWTO_API UClass* StaticClass<AAEnemy>()
	{
		return AAEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAEnemy(Z_Construct_UClass_AAEnemy, &AAEnemy::StaticClass, TEXT("/Script/HowTo"), TEXT("AAEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
