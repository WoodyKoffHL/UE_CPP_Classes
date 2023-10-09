// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WoodyQuests/Public/QuestCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestCondition() {}
// Cross Module References
	WOODYQUESTS_API UClass* Z_Construct_UClass_UQuestCondition_NoRegister();
	WOODYQUESTS_API UClass* Z_Construct_UClass_UQuestCondition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WoodyQuests();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static FName NAME_UQuestCondition_QuestComplette = FName(TEXT("QuestComplette"));
	void UQuestCondition::QuestComplette()
	{
		ProcessEvent(FindFunctionChecked(NAME_UQuestCondition_QuestComplette),NULL);
	}
	void UQuestCondition::StaticRegisterNativesUQuestCondition()
	{
	}
	struct Z_Construct_UFunction_UQuestCondition_QuestComplette_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestCondition_QuestComplette_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestCondition_QuestComplette_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestCondition, nullptr, "QuestComplette", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestCondition_QuestComplette_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestCondition_QuestComplette_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestCondition_QuestComplette()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestCondition_QuestComplette_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestCondition_NoRegister()
	{
		return UQuestCondition::StaticClass();
	}
	struct Z_Construct_UClass_UQuestCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuestName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuestOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_QuestOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionsText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ConditionsText;
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WoodyQuests,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestCondition_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestCondition_QuestComplette, "QuestComplette" }, // 4150559767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "QuestCondition.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/QuestCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::NewProp_id_MetaData[] = {
		{ "Category", "Quest" },
		{ "Comment", "// QUEST PARAMS\n" },
		{ "ModuleRelativePath", "Public/QuestCondition.h" },
		{ "ToolTip", "QUEST PARAMS" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestCondition, id), METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::NewProp_QuestName_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_QuestName = { "QuestName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestCondition, QuestName), METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::NewProp_QuestName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::NewProp_QuestName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestCondition, Description), METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::NewProp_QuestOwner_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_QuestOwner = { "QuestOwner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestCondition, QuestOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::NewProp_QuestOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::NewProp_QuestOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::NewProp_ConditionsText_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_ConditionsText = { "ConditionsText", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestCondition, ConditionsText), METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::NewProp_ConditionsText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::NewProp_ConditionsText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::NewProp_Success_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestCondition.h" },
	};
#endif
	void Z_Construct_UClass_UQuestCondition_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((UQuestCondition*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UQuestCondition), &Z_Construct_UClass_UQuestCondition_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestCondition_Statics::NewProp_Complette_MetaData[] = {
		{ "Category", "Quest" },
		{ "ModuleRelativePath", "Public/QuestCondition.h" },
	};
#endif
	void Z_Construct_UClass_UQuestCondition_Statics::NewProp_Complette_SetBit(void* Obj)
	{
		((UQuestCondition*)Obj)->Complette = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UQuestCondition_Statics::NewProp_Complette = { "Complette", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UQuestCondition), &Z_Construct_UClass_UQuestCondition_Statics::NewProp_Complette_SetBit, METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::NewProp_Complette_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::NewProp_Complette_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_QuestName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_QuestOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_ConditionsText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestCondition_Statics::NewProp_Complette,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestCondition_Statics::ClassParams = {
		&UQuestCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestCondition, 134808317);
	template<> WOODYQUESTS_API UClass* StaticClass<UQuestCondition>()
	{
		return UQuestCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestCondition(Z_Construct_UClass_UQuestCondition, &UQuestCondition::StaticClass, TEXT("/Script/WoodyQuests"), TEXT("UQuestCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
