// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CppTPS/CppLifeSystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCppLifeSystem() {}
// Cross Module References
	CPPTPS_API UClass* Z_Construct_UClass_UCppLifeSystem_NoRegister();
	CPPTPS_API UClass* Z_Construct_UClass_UCppLifeSystem();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CppTPS();
// End Cross Module References
	DEFINE_FUNCTION(UCppLifeSystem::execApplyDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDamage(Z_Param_Damage);
		P_NATIVE_END;
	}
	void UCppLifeSystem::StaticRegisterNativesUCppLifeSystem()
	{
		UClass* Class = UCppLifeSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyDamage", &UCppLifeSystem::execApplyDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics
	{
		struct CppLifeSystem_eventApplyDamage_Parms
		{
			float Damage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLifeSystem_eventApplyDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLifeSystem, nullptr, "ApplyDamage", nullptr, nullptr, sizeof(CppLifeSystem_eventApplyDamage_Parms), Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLifeSystem_ApplyDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCppLifeSystem_NoRegister()
	{
		return UCppLifeSystem::StaticClass();
	}
	struct Z_Construct_UClass_UCppLifeSystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vitality_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Vitality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Edurance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Edurance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thirst_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Thirst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hunger_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hunger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radiation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radiation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Death_MetaData[];
#endif
		static void NewProp_Death_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Death;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCppLifeSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CppTPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCppLifeSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCppLifeSystem_ApplyDamage, "ApplyDamage" }, // 2177728862
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CppLifeSystem.h" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCppLifeSystem, Health), METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Vitality_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// ????????\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Vitality = { "Vitality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCppLifeSystem, Vitality), METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Vitality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Vitality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Edurance_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// ???????????????? - ??? ??????, ??? ?????? ?????????\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Edurance = { "Edurance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCppLifeSystem, Edurance), METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Edurance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Edurance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Thirst_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// ??????? ??????\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Thirst = { "Thirst", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCppLifeSystem, Thirst), METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Thirst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Thirst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Hunger_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// ?????\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Hunger = { "Hunger", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCppLifeSystem, Hunger), METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Hunger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Hunger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Radiation_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// ?????\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Radiation = { "Radiation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCppLifeSystem, Radiation), METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Radiation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Radiation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Death_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// ????????\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	void Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Death_SetBit(void* Obj)
	{
		((UCppLifeSystem*)Obj)->Death = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Death = { "Death", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCppLifeSystem), &Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Death_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Death_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Death_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCppLifeSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Vitality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Edurance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Thirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Hunger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Radiation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Death,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCppLifeSystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCppLifeSystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCppLifeSystem_Statics::ClassParams = {
		&UCppLifeSystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCppLifeSystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCppLifeSystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCppLifeSystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCppLifeSystem, 2967842252);
	template<> CPPTPS_API UClass* StaticClass<UCppLifeSystem>()
	{
		return UCppLifeSystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCppLifeSystem(Z_Construct_UClass_UCppLifeSystem, &UCppLifeSystem::StaticClass, TEXT("/Script/CppTPS"), TEXT("UCppLifeSystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCppLifeSystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
