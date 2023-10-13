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
	CPPTPS_API UEnum* Z_Construct_UEnum_CppTPS_EStatisType();
	UPackage* Z_Construct_UPackage__Script_CppTPS();
	CPPTPS_API UEnum* Z_Construct_UEnum_CppTPS_EDamageType();
	CPPTPS_API UClass* Z_Construct_UClass_UCppLifeSystem_NoRegister();
	CPPTPS_API UClass* Z_Construct_UClass_UCppLifeSystem();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
// End Cross Module References
	static UEnum* EStatisType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CppTPS_EStatisType, Z_Construct_UPackage__Script_CppTPS(), TEXT("EStatisType"));
		}
		return Singleton;
	}
	template<> CPPTPS_API UEnum* StaticEnum<EStatisType>()
	{
		return EStatisType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStatisType(EStatisType_StaticEnum, TEXT("/Script/CppTPS"), TEXT("EStatisType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CppTPS_EStatisType_Hash() { return 4262932530U; }
	UEnum* Z_Construct_UEnum_CppTPS_EStatisType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CppTPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStatisType"), 0, Get_Z_Construct_UEnum_CppTPS_EStatisType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EStatisType::Health", (int64)EStatisType::Health },
				{ "EStatisType::Vitality", (int64)EStatisType::Vitality },
				{ "EStatisType::Thirst", (int64)EStatisType::Thirst },
				{ "EStatisType::Hunger", (int64)EStatisType::Hunger },
				{ "EStatisType::Radiation", (int64)EStatisType::Radiation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Health.Name", "EStatisType::Health" },
				{ "Hunger.Name", "EStatisType::Hunger" },
				{ "ModuleRelativePath", "CppLifeSystem.h" },
				{ "Radiation.Name", "EStatisType::Radiation" },
				{ "Thirst.Name", "EStatisType::Thirst" },
				{ "Vitality.Name", "EStatisType::Vitality" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CppTPS,
				nullptr,
				"EStatisType",
				"EStatisType",
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
	static UEnum* EDamageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CppTPS_EDamageType, Z_Construct_UPackage__Script_CppTPS(), TEXT("EDamageType"));
		}
		return Singleton;
	}
	template<> CPPTPS_API UEnum* StaticEnum<EDamageType>()
	{
		return EDamageType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDamageType(EDamageType_StaticEnum, TEXT("/Script/CppTPS"), TEXT("EDamageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CppTPS_EDamageType_Hash() { return 4233094664U; }
	UEnum* Z_Construct_UEnum_CppTPS_EDamageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CppTPS();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDamageType"), 0, Get_Z_Construct_UEnum_CppTPS_EDamageType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDamageType::bite", (int64)EDamageType::bite },
				{ "EDamageType::shot", (int64)EDamageType::shot },
				{ "EDamageType::explosion", (int64)EDamageType::explosion },
				{ "EDamageType::fire", (int64)EDamageType::fire },
				{ "EDamageType::cold", (int64)EDamageType::cold },
				{ "EDamageType::radiation", (int64)EDamageType::radiation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "bite.Name", "EDamageType::bite" },
				{ "BlueprintType", "true" },
				{ "cold.Name", "EDamageType::cold" },
				{ "explosion.Name", "EDamageType::explosion" },
				{ "fire.Name", "EDamageType::fire" },
				{ "ModuleRelativePath", "CppLifeSystem.h" },
				{ "radiation.Name", "EDamageType::radiation" },
				{ "shot.Name", "EDamageType::shot" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CppTPS,
				nullptr,
				"EDamageType",
				"EDamageType",
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
	DEFINE_FUNCTION(UCppLifeSystem::execAddStat)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_ENUM(EStatisType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AddStat(Z_Param_Value,EStatisType(Z_Param_Type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCppLifeSystem::execFatigue)
	{
		P_GET_UBOOL(Z_Param_Moving);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fatigue(Z_Param_Moving);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCppLifeSystem::execApplyDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_GET_ENUM(EDamageType,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyDamage(Z_Param_Damage,EDamageType(Z_Param_Type));
		P_NATIVE_END;
	}
	static FName NAME_UCppLifeSystem_FatigueCall = FName(TEXT("FatigueCall"));
	void UCppLifeSystem::FatigueCall(float Value, float Seconds)
	{
		CppLifeSystem_eventFatigueCall_Parms Parms;
		Parms.Value=Value;
		Parms.Seconds=Seconds;
		ProcessEvent(FindFunctionChecked(NAME_UCppLifeSystem_FatigueCall),&Parms);
	}
	static FName NAME_UCppLifeSystem_OnDeath = FName(TEXT("OnDeath"));
	void UCppLifeSystem::OnDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCppLifeSystem_OnDeath),NULL);
	}
	static FName NAME_UCppLifeSystem_SetStatus = FName(TEXT("SetStatus"));
	void UCppLifeSystem::SetStatus()
	{
		ProcessEvent(FindFunctionChecked(NAME_UCppLifeSystem_SetStatus),NULL);
	}
	static FName NAME_UCppLifeSystem_TickStatus = FName(TEXT("TickStatus"));
	void UCppLifeSystem::TickStatus(float DeltaTime)
	{
		CppLifeSystem_eventTickStatus_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UCppLifeSystem_TickStatus),&Parms);
	}
	void UCppLifeSystem::StaticRegisterNativesUCppLifeSystem()
	{
		UClass* Class = UCppLifeSystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddStat", &UCppLifeSystem::execAddStat },
			{ "ApplyDamage", &UCppLifeSystem::execApplyDamage },
			{ "Fatigue", &UCppLifeSystem::execFatigue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics
	{
		struct CppLifeSystem_eventAddStat_Parms
		{
			float Value;
			EStatisType Type;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLifeSystem_eventAddStat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLifeSystem_eventAddStat_Parms, Type), Z_Construct_UEnum_CppTPS_EStatisType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CppLifeSystem_eventAddStat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CppLifeSystem_eventAddStat_Parms), &Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ????? ? ??????????\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLifeSystem, nullptr, "AddStat", nullptr, nullptr, sizeof(CppLifeSystem_eventAddStat_Parms), Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLifeSystem_AddStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLifeSystem_AddStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics
	{
		struct CppLifeSystem_eventApplyDamage_Parms
		{
			float Damage;
			EDamageType Type;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLifeSystem_eventApplyDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLifeSystem_eventApplyDamage_Parms, Type), Z_Construct_UEnum_CppTPS_EDamageType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLifeSystem_ApplyDamage_Statics::NewProp_Type,
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
	struct Z_Construct_UFunction_UCppLifeSystem_Fatigue_Statics
	{
		struct CppLifeSystem_eventFatigue_Parms
		{
			bool Moving;
		};
		static void NewProp_Moving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Moving;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCppLifeSystem_Fatigue_Statics::NewProp_Moving_SetBit(void* Obj)
	{
		((CppLifeSystem_eventFatigue_Parms*)Obj)->Moving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCppLifeSystem_Fatigue_Statics::NewProp_Moving = { "Moving", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CppLifeSystem_eventFatigue_Parms), &Z_Construct_UFunction_UCppLifeSystem_Fatigue_Statics::NewProp_Moving_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLifeSystem_Fatigue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLifeSystem_Fatigue_Statics::NewProp_Moving,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLifeSystem_Fatigue_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ??????????? ??????? ???????????????? (?????????) ? ???????? (0 - 1)\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
		{ "ToolTip", "??????????? ??????? ???????????????? (?????????) ? ???????? (0 - 1)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLifeSystem_Fatigue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLifeSystem, nullptr, "Fatigue", nullptr, nullptr, sizeof(CppLifeSystem_eventFatigue_Parms), Z_Construct_UFunction_UCppLifeSystem_Fatigue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLifeSystem_Fatigue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLifeSystem_Fatigue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLifeSystem_Fatigue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLifeSystem_Fatigue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLifeSystem_Fatigue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLifeSystem_FatigueCall_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Seconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCppLifeSystem_FatigueCall_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLifeSystem_eventFatigueCall_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCppLifeSystem_FatigueCall_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLifeSystem_eventFatigueCall_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLifeSystem_FatigueCall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLifeSystem_FatigueCall_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLifeSystem_FatigueCall_Statics::NewProp_Seconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLifeSystem_FatigueCall_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ??????????\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLifeSystem_FatigueCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLifeSystem, nullptr, "FatigueCall", nullptr, nullptr, sizeof(CppLifeSystem_eventFatigueCall_Parms), Z_Construct_UFunction_UCppLifeSystem_FatigueCall_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLifeSystem_FatigueCall_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLifeSystem_FatigueCall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLifeSystem_FatigueCall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLifeSystem_FatigueCall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLifeSystem_FatigueCall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLifeSystem_OnDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLifeSystem_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLifeSystem_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLifeSystem, nullptr, "OnDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLifeSystem_OnDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLifeSystem_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLifeSystem_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLifeSystem_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLifeSystem_SetStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLifeSystem_SetStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLifeSystem_SetStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLifeSystem, nullptr, "SetStatus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLifeSystem_SetStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLifeSystem_SetStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLifeSystem_SetStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLifeSystem_SetStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCppLifeSystem_TickStatus_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCppLifeSystem_TickStatus_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CppLifeSystem_eventTickStatus_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCppLifeSystem_TickStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCppLifeSystem_TickStatus_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCppLifeSystem_TickStatus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCppLifeSystem_TickStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCppLifeSystem, nullptr, "TickStatus", nullptr, nullptr, sizeof(CppLifeSystem_eventTickStatus_Parms), Z_Construct_UFunction_UCppLifeSystem_TickStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLifeSystem_TickStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCppLifeSystem_TickStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCppLifeSystem_TickStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCppLifeSystem_TickStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCppLifeSystem_TickStatus_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[];
#endif
		static void NewProp_isDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tired_MetaData[];
#endif
		static void NewProp_Tired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Tired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_biteEdurance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_biteEdurance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shotEdurance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_shotEdurance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionEdurance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_explosionEdurance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireEdurance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fireEdurance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_coldEdurance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_coldEdurance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NuklearEdurance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NuklearEdurance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VitalityRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VitalityRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TiredRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TiredRatio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCppLifeSystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CppTPS,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCppLifeSystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCppLifeSystem_AddStat, "AddStat" }, // 2203088353
		{ &Z_Construct_UFunction_UCppLifeSystem_ApplyDamage, "ApplyDamage" }, // 1181933192
		{ &Z_Construct_UFunction_UCppLifeSystem_Fatigue, "Fatigue" }, // 2919318683
		{ &Z_Construct_UFunction_UCppLifeSystem_FatigueCall, "FatigueCall" }, // 78326615
		{ &Z_Construct_UFunction_UCppLifeSystem_OnDeath, "OnDeath" }, // 3640232567
		{ &Z_Construct_UFunction_UCppLifeSystem_SetStatus, "SetStatus" }, // 3151588590
		{ &Z_Construct_UFunction_UCppLifeSystem_TickStatus, "TickStatus" }, // 281145544
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CppLifeSystem.h" },
		{ "IsBlueprintBase", "true" },
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Thirst_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// ???????????????? - ??? ??????, ??? ?????? ?????????\n" },
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_isDead_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// ????????\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	void Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_isDead_SetBit(void* Obj)
	{
		((UCppLifeSystem*)Obj)->isDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCppLifeSystem), &Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_isDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_isDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Tired_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// ??????\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	void Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Tired_SetBit(void* Obj)
	{
		((UCppLifeSystem*)Obj)->Tired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Tired = { "Tired", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCppLifeSystem), &Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Tired_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Tired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Tired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_biteEdurance_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// ?????????? ?????? ?? ?????????? ???? ?????\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_biteEdurance = { "biteEdurance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCppLifeSystem, biteEdurance), METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_biteEdurance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_biteEdurance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_shotEdurance_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// ??????? ?????? ?? ?????\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_shotEdurance = { "shotEdurance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCppLifeSystem, shotEdurance), METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_shotEdurance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_shotEdurance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_explosionEdurance_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// ??????? ?????? ?? ?????????\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_explosionEdurance = { "explosionEdurance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCppLifeSystem, explosionEdurance), METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_explosionEdurance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_explosionEdurance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_fireEdurance_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// ??????? ?????? ?? ??????\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_fireEdurance = { "fireEdurance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCppLifeSystem, fireEdurance), METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_fireEdurance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_fireEdurance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_coldEdurance_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// ??????? ?????? ?? ???? ? ????\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_coldEdurance = { "coldEdurance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCppLifeSystem, coldEdurance), METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_coldEdurance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_coldEdurance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_NuklearEdurance_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// ??????? ?????? ?? ??????\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_NuklearEdurance = { "NuklearEdurance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCppLifeSystem, NuklearEdurance), METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_NuklearEdurance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_NuklearEdurance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_VitalityRatio_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "///////////////////////////////////////////////////////////\n// 091123\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
		{ "ToolTip", "091123" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_VitalityRatio = { "VitalityRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCppLifeSystem, VitalityRatio), METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_VitalityRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_VitalityRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_TiredRatio_MetaData[] = {
		{ "Category", "Stats" },
		{ "Comment", "// ??????????? ??????? ???????????????? (?????????) ? ???????? (0 - 10)\n" },
		{ "ModuleRelativePath", "CppLifeSystem.h" },
		{ "ToolTip", "??????????? ??????? ???????????????? (?????????) ? ???????? (0 - 10)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_TiredRatio = { "TiredRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCppLifeSystem, TiredRatio), METADATA_PARAMS(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_TiredRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_TiredRatio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCppLifeSystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Vitality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Thirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Hunger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Radiation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_isDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_Tired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_biteEdurance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_shotEdurance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_explosionEdurance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_fireEdurance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_coldEdurance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_NuklearEdurance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_VitalityRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCppLifeSystem_Statics::NewProp_TiredRatio,
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
	IMPLEMENT_CLASS(UCppLifeSystem, 967445539);
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
