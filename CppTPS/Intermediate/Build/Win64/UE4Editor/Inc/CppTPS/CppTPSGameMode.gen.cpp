// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppTPS/CppTPSGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppTPSGameMode() {}
// Cross Module References
	CPPTPS_API UClass* Z_Construct_UClass_ACppTPSGameMode_NoRegister();
	CPPTPS_API UClass* Z_Construct_UClass_ACppTPSGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CppTPS();
// End Cross Module References
	void ACppTPSGameMode::StaticRegisterNativesACppTPSGameMode()
	{
	}
	UClass* Z_Construct_UClass_ACppTPSGameMode_NoRegister()
	{
		return ACppTPSGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACppTPSGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACppTPSGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CppTPS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACppTPSGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CppTPSGameMode.h" },
		{ "ModuleRelativePath", "CppTPSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACppTPSGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACppTPSGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACppTPSGameMode_Statics::ClassParams = {
		&ACppTPSGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACppTPSGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACppTPSGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACppTPSGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACppTPSGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACppTPSGameMode, 2381809082);
	template<> CPPTPS_API UClass* StaticClass<ACppTPSGameMode>()
	{
		return ACppTPSGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACppTPSGameMode(Z_Construct_UClass_ACppTPSGameMode, &ACppTPSGameMode::StaticClass, TEXT("/Script/CppTPS"), TEXT("ACppTPSGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACppTPSGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
