// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WoodyQuests/Public/QuestComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestComponent() {}
// Cross Module References
	WOODYQUESTS_API UEnum* Z_Construct_UEnum_WoodyQuests_EQuestStat();
	UPackage* Z_Construct_UPackage__Script_WoodyQuests();
	WOODYQUESTS_API UEnum* Z_Construct_UEnum_WoodyQuests_EOwnerType();
	WOODYQUESTS_API UScriptStruct* Z_Construct_UScriptStruct_FQuestStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	WOODYQUESTS_API UClass* Z_Construct_UClass_UQuestCondition_NoRegister();
	WOODYQUESTS_API UClass* Z_Construct_UClass_UQuestComponent_NoRegister();
	WOODYQUESTS_API UClass* Z_Construct_UClass_UQuestComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static UEnum* EQuestStat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WoodyQuests_EQuestStat, Z_Construct_UPackage__Script_WoodyQuests(), TEXT("EQuestStat"));
		}
		return Singleton;
	}
	template<> WOODYQUESTS_API UEnum* StaticEnum<EQuestStat>()
	{
		return EQuestStat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuestStat(EQuestStat_StaticEnum, TEXT("/Script/WoodyQuests"), TEXT("EQuestStat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WoodyQuests_EQuestStat_Hash() { return 302459878U; }
	UEnum* Z_Construct_UEnum_WoodyQuests_EQuestStat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WoodyQuests();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuestStat"), 0, Get_Z_Construct_UEnum_WoodyQuests_EQuestStat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuestStat::Available", (int64)EQuestStat::Available },
				{ "EQuestStat::NotAvailable", (int64)EQuestStat::NotAvailable },
				{ "EQuestStat::Taken", (int64)EQuestStat::Taken },
				{ "EQuestStat::Completed", (int64)EQuestStat::Completed },
				{ "EQuestStat::Success", (int64)EQuestStat::Success },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Available.Name", "EQuestStat::Available" },
				{ "BlueprintType", "true" },
				{ "Completed.Name", "EQuestStat::Completed" },
				{ "ModuleRelativePath", "Public/QuestComponent.h" },
				{ "NotAvailable.Name", "EQuestStat::NotAvailable" },
				{ "Success.Name", "EQuestStat::Success" },
				{ "Taken.Name", "EQuestStat::Taken" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WoodyQuests,
				nullptr,
				"EQuestStat",
				"EQuestStat",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOwnerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_WoodyQuests_EOwnerType, Z_Construct_UPackage__Script_WoodyQuests(), TEXT("EOwnerType"));
		}
		return Singleton;
	}
	template<> WOODYQUESTS_API UEnum* StaticEnum<EOwnerType>()
	{
		return EOwnerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOwnerType(EOwnerType_StaticEnum, TEXT("/Script/WoodyQuests"), TEXT("EOwnerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_WoodyQuests_EOwnerType_Hash() { return 624663840U; }
	UEnum* Z_Construct_UEnum_WoodyQuests_EOwnerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_WoodyQuests();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOwnerType"), 0, Get_Z_Construct_UEnum_WoodyQuests_EOwnerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOwnerType::NPC", (int64)EOwnerType::NPC },
				{ "EOwnerType::Player", (int64)EOwnerType::Player },
				{ "EOwnerType::Object", (int64)EOwnerType::Object },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/QuestComponent.h" },
				{ "NPC.Name", "EOwnerType::NPC" },
				{ "Object.Name", "EOwnerType::Object" },
				{ "Player.Name", "EOwnerType::Player" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_WoodyQuests,
				nullptr,
				"EOwnerType",
				"EOwnerType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FQuestStruct::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WOODYQUESTS_API uint32 Get_Z_Construct_UScriptStruct_FQuestStruct_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestStruct, Z_Construct_UPackage__Script_WoodyQuests(), TEXT("QuestStruct"), sizeof(FQuestStruct), Get_Z_Construct_UScriptStruct_FQuestStruct_Hash());
	}
	return Singleton;
}
template<> WOODYQUESTS_API UScriptStruct* StaticStruct<FQuestStruct>()
{
	return FQuestStruct::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestStruct(FQuestStruct::StaticStruct, TEXT("/Script/WoodyQuests"), TEXT("QuestStruct"), false, nullptr, nullptr);
static struct FScriptStruct_WoodyQuests_StaticRegisterNativesFQuestStruct
{
	FScriptStruct_WoodyQuests_StaticRegisterNativesFQuestStruct()
	{
		UScriptStruct::DeferCppStructOps<FQuestStruct>(FName(TEXT("QuestStruct")));
	}
} ScriptStruct_WoodyQuests_StaticRegisterNativesFQuestStruct;
	struct Z_Construct_UScriptStruct_FQuestStruct_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quest_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Quest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Complette_MetaData[];
#endif
		static void NewProp_Complette_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Complette;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestStruct>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Quest_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Quest = { "Quest", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestStruct, Quest), Z_Construct_UClass_UQuestCondition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Quest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Quest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Success_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FQuestStruct*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQuestStruct), &Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Complette_MetaData[] = {
		{ "Category", "QuestStruct" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Complette_SetBit(void* Obj)
	{
		((FQuestStruct*)Obj)->Complette = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Complette = { "Complette", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQuestStruct), &Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Complette_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Complette_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Complette_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestStruct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Quest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestStruct_Statics::NewProp_Complette,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WoodyQuests,
		nullptr,
		&NewStructOps,
		"QuestStruct",
		sizeof(FQuestStruct),
		alignof(FQuestStruct),
		Z_Construct_UScriptStruct_FQuestStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestStruct()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestStruct_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WoodyQuests();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestStruct"), sizeof(FQuestStruct), Get_Z_Construct_UScriptStruct_FQuestStruct_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestStruct_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestStruct_Hash() { return 2207810074U; }
	DEFINE_FUNCTION(UQuestComponent::execCompletteQuest)
	{
		P_GET_OBJECT(UClass,Z_Param_Qst);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CompletteQuest(Z_Param_Qst);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestComponent::execHaveQuest)
	{
		P_GET_OBJECT(UClass,Z_Param_Qst);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HaveQuest(Z_Param_Qst);
		P_NATIVE_END;
	}
	void UQuestComponent::StaticRegisterNativesUQuestComponent()
	{
		UClass* Class = UQuestComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CompletteQuest", &UQuestComponent::execCompletteQuest },
			{ "HaveQuest", &UQuestComponent::execHaveQuest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestComponent_CompletteQuest_Statics
	{
		struct QuestComponent_eventCompletteQuest_Parms
		{
			TSubclassOf<UQuestCondition>  Qst;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Qst;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UQuestComponent_CompletteQuest_Statics::NewProp_Qst = { "Qst", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestComponent_eventCompletteQuest_Parms, Qst), Z_Construct_UClass_UQuestCondition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestComponent_CompletteQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestComponent_CompletteQuest_Statics::NewProp_Qst,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestComponent_CompletteQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestComponent_CompletteQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestComponent, nullptr, "CompletteQuest", nullptr, nullptr, sizeof(QuestComponent_eventCompletteQuest_Parms), Z_Construct_UFunction_UQuestComponent_CompletteQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_CompletteQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestComponent_CompletteQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_CompletteQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestComponent_CompletteQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestComponent_CompletteQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestComponent_HaveQuest_Statics
	{
		struct QuestComponent_eventHaveQuest_Parms
		{
			TSubclassOf<UQuestCondition>  Qst;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Qst;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UQuestComponent_HaveQuest_Statics::NewProp_Qst = { "Qst", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestComponent_eventHaveQuest_Parms, Qst), Z_Construct_UClass_UQuestCondition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestComponent_HaveQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((QuestComponent_eventHaveQuest_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestComponent_HaveQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestComponent_eventHaveQuest_Parms), &Z_Construct_UFunction_UQuestComponent_HaveQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestComponent_HaveQuest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestComponent_HaveQuest_Statics::NewProp_Qst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestComponent_HaveQuest_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestComponent_HaveQuest_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestComponent_HaveQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestComponent, nullptr, "HaveQuest", nullptr, nullptr, sizeof(QuestComponent_eventHaveQuest_Parms), Z_Construct_UFunction_UQuestComponent_HaveQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_HaveQuest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestComponent_HaveQuest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestComponent_HaveQuest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestComponent_HaveQuest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestComponent_HaveQuest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestComponent_NoRegister()
	{
		return UQuestComponent::StaticClass();
	}
	struct Z_Construct_UClass_UQuestComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OwnerType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OwnerType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllQuests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllQuests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllQuests;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompletteQuests_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompletteQuests_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CompletteQuests;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_WoodyQuests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestComponent_CompletteQuest, "CompletteQuest" }, // 2553716628
		{ &Z_Construct_UFunction_UQuestComponent_HaveQuest, "HaveQuest" }, // 2905840075
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "QuestComponent.h" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UQuestComponent_Statics::NewProp_OwnerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestComponent_Statics::NewProp_OwnerType_MetaData[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UQuestComponent_Statics::NewProp_OwnerType = { "OwnerType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestComponent, OwnerType), Z_Construct_UEnum_WoodyQuests_EOwnerType, METADATA_PARAMS(Z_Construct_UClass_UQuestComponent_Statics::NewProp_OwnerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::NewProp_OwnerType_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestComponent_Statics::NewProp_AllQuests_Inner = { "AllQuests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuestStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestComponent_Statics::NewProp_AllQuests_MetaData[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestComponent_Statics::NewProp_AllQuests = { "AllQuests", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestComponent, AllQuests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestComponent_Statics::NewProp_AllQuests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::NewProp_AllQuests_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UQuestComponent_Statics::NewProp_CompletteQuests_Inner = { "CompletteQuests", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuestStruct, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestComponent_Statics::NewProp_CompletteQuests_MetaData[] = {
		{ "Category", "Quests" },
		{ "ModuleRelativePath", "Public/QuestComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestComponent_Statics::NewProp_CompletteQuests = { "CompletteQuests", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestComponent, CompletteQuests), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestComponent_Statics::NewProp_CompletteQuests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::NewProp_CompletteQuests_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestComponent_Statics::NewProp_OwnerType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestComponent_Statics::NewProp_OwnerType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestComponent_Statics::NewProp_AllQuests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestComponent_Statics::NewProp_AllQuests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestComponent_Statics::NewProp_CompletteQuests_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestComponent_Statics::NewProp_CompletteQuests,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestComponent_Statics::ClassParams = {
		&UQuestComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestComponent, 2692332876);
	template<> WOODYQUESTS_API UClass* StaticClass<UQuestComponent>()
	{
		return UQuestComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestComponent(Z_Construct_UClass_UQuestComponent, &UQuestComponent::StaticClass, TEXT("/Script/WoodyQuests"), TEXT("UQuestComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
