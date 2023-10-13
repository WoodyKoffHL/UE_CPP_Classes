// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EStatisType : uint8;
enum class EDamageType : uint8;
#ifdef CPPTPS_CppLifeSystem_generated_h
#error "CppLifeSystem.generated.h already included, missing '#pragma once' in CppLifeSystem.h"
#endif
#define CPPTPS_CppLifeSystem_generated_h

#define CppTPS_Source_CppTPS_CppLifeSystem_h_32_SPARSE_DATA
#define CppTPS_Source_CppTPS_CppLifeSystem_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddStat); \
	DECLARE_FUNCTION(execFatigue); \
	DECLARE_FUNCTION(execApplyDamage);


#define CppTPS_Source_CppTPS_CppLifeSystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddStat); \
	DECLARE_FUNCTION(execFatigue); \
	DECLARE_FUNCTION(execApplyDamage);


#define CppTPS_Source_CppTPS_CppLifeSystem_h_32_EVENT_PARMS \
	struct CppLifeSystem_eventFatigueCall_Parms \
	{ \
		float Value; \
		float Seconds; \
	}; \
	struct CppLifeSystem_eventTickStatus_Parms \
	{ \
		float DeltaTime; \
	};


#define CppTPS_Source_CppTPS_CppLifeSystem_h_32_CALLBACK_WRAPPERS
#define CppTPS_Source_CppTPS_CppLifeSystem_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCppLifeSystem(); \
	friend struct Z_Construct_UClass_UCppLifeSystem_Statics; \
public: \
	DECLARE_CLASS(UCppLifeSystem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CppTPS"), NO_API) \
	DECLARE_SERIALIZER(UCppLifeSystem)


#define CppTPS_Source_CppTPS_CppLifeSystem_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUCppLifeSystem(); \
	friend struct Z_Construct_UClass_UCppLifeSystem_Statics; \
public: \
	DECLARE_CLASS(UCppLifeSystem, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CppTPS"), NO_API) \
	DECLARE_SERIALIZER(UCppLifeSystem)


#define CppTPS_Source_CppTPS_CppLifeSystem_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCppLifeSystem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCppLifeSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCppLifeSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCppLifeSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCppLifeSystem(UCppLifeSystem&&); \
	NO_API UCppLifeSystem(const UCppLifeSystem&); \
public:


#define CppTPS_Source_CppTPS_CppLifeSystem_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCppLifeSystem(UCppLifeSystem&&); \
	NO_API UCppLifeSystem(const UCppLifeSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCppLifeSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCppLifeSystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCppLifeSystem)


#define CppTPS_Source_CppTPS_CppLifeSystem_h_32_PRIVATE_PROPERTY_OFFSET
#define CppTPS_Source_CppTPS_CppLifeSystem_h_29_PROLOG \
	CppTPS_Source_CppTPS_CppLifeSystem_h_32_EVENT_PARMS


#define CppTPS_Source_CppTPS_CppLifeSystem_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppTPS_Source_CppTPS_CppLifeSystem_h_32_PRIVATE_PROPERTY_OFFSET \
	CppTPS_Source_CppTPS_CppLifeSystem_h_32_SPARSE_DATA \
	CppTPS_Source_CppTPS_CppLifeSystem_h_32_RPC_WRAPPERS \
	CppTPS_Source_CppTPS_CppLifeSystem_h_32_CALLBACK_WRAPPERS \
	CppTPS_Source_CppTPS_CppLifeSystem_h_32_INCLASS \
	CppTPS_Source_CppTPS_CppLifeSystem_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CppTPS_Source_CppTPS_CppLifeSystem_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CppTPS_Source_CppTPS_CppLifeSystem_h_32_PRIVATE_PROPERTY_OFFSET \
	CppTPS_Source_CppTPS_CppLifeSystem_h_32_SPARSE_DATA \
	CppTPS_Source_CppTPS_CppLifeSystem_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	CppTPS_Source_CppTPS_CppLifeSystem_h_32_CALLBACK_WRAPPERS \
	CppTPS_Source_CppTPS_CppLifeSystem_h_32_INCLASS_NO_PURE_DECLS \
	CppTPS_Source_CppTPS_CppLifeSystem_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPPTPS_API UClass* StaticClass<class UCppLifeSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CppTPS_Source_CppTPS_CppLifeSystem_h


#define FOREACH_ENUM_ESTATISTYPE(op) \
	op(EStatisType::Health) \
	op(EStatisType::Vitality) \
	op(EStatisType::Thirst) \
	op(EStatisType::Hunger) \
	op(EStatisType::Radiation) 

enum class EStatisType : uint8;
template<> CPPTPS_API UEnum* StaticEnum<EStatisType>();

#define FOREACH_ENUM_EDAMAGETYPE(op) \
	op(EDamageType::bite) \
	op(EDamageType::shot) \
	op(EDamageType::explosion) \
	op(EDamageType::fire) \
	op(EDamageType::cold) \
	op(EDamageType::radiation) 

enum class EDamageType : uint8;
template<> CPPTPS_API UEnum* StaticEnum<EDamageType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
