// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UQuestCondition;
#ifdef WOODYQUESTS_QuestComponent_generated_h
#error "QuestComponent.generated.h already included, missing '#pragma once' in QuestComponent.h"
#endif
#define WOODYQUESTS_QuestComponent_generated_h

#define CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestStruct_Statics; \
	WOODYQUESTS_API static class UScriptStruct* StaticStruct();


template<> WOODYQUESTS_API UScriptStruct* StaticStruct<struct FQuestStruct>();

#define CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_SPARSE_DATA
#define CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCompletteQuest); \
	DECLARE_FUNCTION(execHaveQuest);


#define CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCompletteQuest); \
	DECLARE_FUNCTION(execHaveQuest);


#define CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestComponent(); \
	friend struct Z_Construct_UClass_UQuestComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WoodyQuests"), NO_API) \
	DECLARE_SERIALIZER(UQuestComponent)


#define CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_INCLASS \
private: \
	static void StaticRegisterNativesUQuestComponent(); \
	friend struct Z_Construct_UClass_UQuestComponent_Statics; \
public: \
	DECLARE_CLASS(UQuestComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/WoodyQuests"), NO_API) \
	DECLARE_SERIALIZER(UQuestComponent)


#define CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestComponent(UQuestComponent&&); \
	NO_API UQuestComponent(const UQuestComponent&); \
public:


#define CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestComponent(UQuestComponent&&); \
	NO_API UQuestComponent(const UQuestComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UQuestComponent)


#define CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_PRIVATE_PROPERTY_OFFSET
#define CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_41_PROLOG
#define CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_PRIVATE_PROPERTY_OFFSET \
	CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_SPARSE_DATA \
	CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_RPC_WRAPPERS \
	CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_INCLASS \
	CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_PRIVATE_PROPERTY_OFFSET \
	CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_SPARSE_DATA \
	CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_INCLASS_NO_PURE_DECLS \
	CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WOODYQUESTS_API UClass* StaticClass<class UQuestComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CppTPS_Plugins_WoodyQuests_Source_WoodyQuests_Public_QuestComponent_h


#define FOREACH_ENUM_EQUESTSTAT(op) \
	op(EQuestStat::Available) \
	op(EQuestStat::NotAvailable) \
	op(EQuestStat::Taken) \
	op(EQuestStat::Completed) \
	op(EQuestStat::Success) 

enum class EQuestStat : uint8;
template<> WOODYQUESTS_API UEnum* StaticEnum<EQuestStat>();

#define FOREACH_ENUM_EOWNERTYPE(op) \
	op(EOwnerType::NPC) \
	op(EOwnerType::Player) \
	op(EOwnerType::Object) 

enum class EOwnerType : uint8;
template<> WOODYQUESTS_API UEnum* StaticEnum<EOwnerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
