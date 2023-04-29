// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HowTo/ComplexAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComplexAnimInstance() {}
// Cross Module References
	HOWTO_API UClass* Z_Construct_UClass_UComplexAnimInstance_NoRegister();
	HOWTO_API UClass* Z_Construct_UClass_UComplexAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_HowTo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void UComplexAnimInstance::StaticRegisterNativesUComplexAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UComplexAnimInstance_NoRegister()
	{
		return UComplexAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UComplexAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationHeadAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationHeadAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRotationHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxRotationHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaLeftArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaLeftArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlphaRigthArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AlphaRigthArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurrentAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComplexAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_HowTo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComplexAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ComplexAnimInstance.h" },
		{ "ModuleRelativePath", "ComplexAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_RotationHead_MetaData[] = {
		{ "Category", "IK Settings" },
		{ "ModuleRelativePath", "ComplexAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_RotationHead = { "RotationHead", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComplexAnimInstance, RotationHead), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_RotationHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_RotationHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_RotationHeadAlpha_MetaData[] = {
		{ "Category", "IK Settings" },
		{ "ModuleRelativePath", "ComplexAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_RotationHeadAlpha = { "RotationHeadAlpha", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComplexAnimInstance, RotationHeadAlpha), METADATA_PARAMS(Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_RotationHeadAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_RotationHeadAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_MaxRotationHead_MetaData[] = {
		{ "Category", "IK Settings" },
		{ "ModuleRelativePath", "ComplexAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_MaxRotationHead = { "MaxRotationHead", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComplexAnimInstance, MaxRotationHead), METADATA_PARAMS(Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_MaxRotationHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_MaxRotationHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_AlphaLeftArm_MetaData[] = {
		{ "Category", "IK Settings" },
		{ "ModuleRelativePath", "ComplexAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_AlphaLeftArm = { "AlphaLeftArm", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComplexAnimInstance, AlphaLeftArm), METADATA_PARAMS(Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_AlphaLeftArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_AlphaLeftArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_AlphaRigthArm_MetaData[] = {
		{ "Category", "IK Settings" },
		{ "ModuleRelativePath", "ComplexAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_AlphaRigthArm = { "AlphaRigthArm", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComplexAnimInstance, AlphaRigthArm), METADATA_PARAMS(Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_AlphaRigthArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_AlphaRigthArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_CurrentAnimation_MetaData[] = {
		{ "Category", "IK Settings" },
		{ "ModuleRelativePath", "ComplexAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_CurrentAnimation = { "CurrentAnimation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComplexAnimInstance, CurrentAnimation), METADATA_PARAMS(Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_CurrentAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_CurrentAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComplexAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_RotationHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_RotationHeadAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_MaxRotationHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_AlphaLeftArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_AlphaRigthArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComplexAnimInstance_Statics::NewProp_CurrentAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComplexAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComplexAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComplexAnimInstance_Statics::ClassParams = {
		&UComplexAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComplexAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComplexAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UComplexAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComplexAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComplexAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComplexAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComplexAnimInstance, 3212825724);
	template<> HOWTO_API UClass* StaticClass<UComplexAnimInstance>()
	{
		return UComplexAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComplexAnimInstance(Z_Construct_UClass_UComplexAnimInstance, &UComplexAnimInstance::StaticClass, TEXT("/Script/HowTo"), TEXT("UComplexAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComplexAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
