// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Public/HoudiniEngineRuntimeCommon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineRuntimeCommon() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType();
// End Cross Module References
	static UEnum* EHoudiniProxyRefineRequestResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniProxyRefineRequestResult"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniProxyRefineRequestResult>()
	{
		return EHoudiniProxyRefineRequestResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniProxyRefineRequestResult(EHoudiniProxyRefineRequestResult_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniProxyRefineRequestResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Hash() { return 1310617343U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniProxyRefineRequestResult"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineRequestResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniProxyRefineRequestResult::Invalid", (int64)EHoudiniProxyRefineRequestResult::Invalid },
				{ "EHoudiniProxyRefineRequestResult::None", (int64)EHoudiniProxyRefineRequestResult::None },
				{ "EHoudiniProxyRefineRequestResult::PendingCooks", (int64)EHoudiniProxyRefineRequestResult::PendingCooks },
				{ "EHoudiniProxyRefineRequestResult::Refined", (int64)EHoudiniProxyRefineRequestResult::Refined },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// When attempting to refine proxy mesh outputs it is a possible that a cook is needed. \n// This enum defines the possible return values on a request to refine proxies.\n" },
				{ "Invalid.Name", "EHoudiniProxyRefineRequestResult::Invalid" },
				{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
				{ "None.Comment", "// No refinement is needed\n" },
				{ "None.Name", "EHoudiniProxyRefineRequestResult::None" },
				{ "None.ToolTip", "No refinement is needed" },
				{ "PendingCooks.Comment", "// A cook is needed, refinement will commence automatically after the cook\n" },
				{ "PendingCooks.Name", "EHoudiniProxyRefineRequestResult::PendingCooks" },
				{ "PendingCooks.ToolTip", "A cook is needed, refinement will commence automatically after the cook" },
				{ "Refined.Comment", "// Successfully refined\n" },
				{ "Refined.Name", "EHoudiniProxyRefineRequestResult::Refined" },
				{ "Refined.ToolTip", "Successfully refined" },
				{ "ToolTip", "When attempting to refine proxy mesh outputs it is a possible that a cook is needed.\nThis enum defines the possible return values on a request to refine proxies." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniProxyRefineRequestResult",
				"EHoudiniProxyRefineRequestResult",
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
	static UEnum* EHoudiniProxyRefineResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniProxyRefineResult"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniProxyRefineResult>()
	{
		return EHoudiniProxyRefineResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniProxyRefineResult(EHoudiniProxyRefineResult_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniProxyRefineResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Hash() { return 491520788U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniProxyRefineResult"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniProxyRefineResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniProxyRefineResult::Invalid", (int64)EHoudiniProxyRefineResult::Invalid },
				{ "EHoudiniProxyRefineResult::Failed", (int64)EHoudiniProxyRefineResult::Failed },
				{ "EHoudiniProxyRefineResult::Success", (int64)EHoudiniProxyRefineResult::Success },
				{ "EHoudiniProxyRefineResult::Skipped", (int64)EHoudiniProxyRefineResult::Skipped },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "// When attempting to refine proxy mesh outputs it is a possible that a cook is needed. \n// This enum defines the possible return values on a request to refine proxies.\n" },
				{ "Failed.Comment", "// Refinement (or cook if needed) failed\n" },
				{ "Failed.Name", "EHoudiniProxyRefineResult::Failed" },
				{ "Failed.ToolTip", "Refinement (or cook if needed) failed" },
				{ "Invalid.Name", "EHoudiniProxyRefineResult::Invalid" },
				{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
				{ "Skipped.Comment", "// Refinement was skipped, either it was not necessary or the operation was cancelled by the user\n" },
				{ "Skipped.Name", "EHoudiniProxyRefineResult::Skipped" },
				{ "Skipped.ToolTip", "Refinement was skipped, either it was not necessary or the operation was cancelled by the user" },
				{ "Success.Comment", "// Refinement completed successfully\n" },
				{ "Success.Name", "EHoudiniProxyRefineResult::Success" },
				{ "Success.ToolTip", "Refinement completed successfully" },
				{ "ToolTip", "When attempting to refine proxy mesh outputs it is a possible that a cook is needed.\nThis enum defines the possible return values on a request to refine proxies." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniProxyRefineResult",
				"EHoudiniProxyRefineResult",
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
#if WITH_EDITORONLY_DATA
	static UEnum* EPDGBakePackageReplaceModeOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGBakePackageReplaceModeOption"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGBakePackageReplaceModeOption>()
	{
		return EPDGBakePackageReplaceModeOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPDGBakePackageReplaceModeOption(EPDGBakePackageReplaceModeOption_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EPDGBakePackageReplaceModeOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Hash() { return 1073140918U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPDGBakePackageReplaceModeOption"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakePackageReplaceModeOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPDGBakePackageReplaceModeOption::CreateNewAssets", (int64)EPDGBakePackageReplaceModeOption::CreateNewAssets },
				{ "EPDGBakePackageReplaceModeOption::ReplaceExistingAssets", (int64)EPDGBakePackageReplaceModeOption::ReplaceExistingAssets },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CreateNewAssets.Name", "EPDGBakePackageReplaceModeOption::CreateNewAssets" },
				{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
				{ "ReplaceExistingAssets.Name", "EPDGBakePackageReplaceModeOption::ReplaceExistingAssets" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EPDGBakePackageReplaceModeOption",
				"EPDGBakePackageReplaceModeOption",
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
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
	static UEnum* EPDGBakeSelectionOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EPDGBakeSelectionOption"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EPDGBakeSelectionOption>()
	{
		return EPDGBakeSelectionOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPDGBakeSelectionOption(EPDGBakeSelectionOption_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EPDGBakeSelectionOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Hash() { return 2041601547U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPDGBakeSelectionOption"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EPDGBakeSelectionOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPDGBakeSelectionOption::All", (int64)EPDGBakeSelectionOption::All },
				{ "EPDGBakeSelectionOption::SelectedNetwork", (int64)EPDGBakeSelectionOption::SelectedNetwork },
				{ "EPDGBakeSelectionOption::SelectedNode", (int64)EPDGBakeSelectionOption::SelectedNode },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "EPDGBakeSelectionOption::All" },
				{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
				{ "SelectedNetwork.Name", "EPDGBakeSelectionOption::SelectedNetwork" },
				{ "SelectedNode.Name", "EPDGBakeSelectionOption::SelectedNode" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EPDGBakeSelectionOption",
				"EPDGBakeSelectionOption",
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
#endif // WITH_EDITORONLY_DATA
	static UEnum* EHoudiniLandscapeExportType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniLandscapeExportType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniLandscapeExportType>()
	{
		return EHoudiniLandscapeExportType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniLandscapeExportType(EHoudiniLandscapeExportType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniLandscapeExportType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Hash() { return 3512769497U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniLandscapeExportType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniLandscapeExportType::Heightfield", (int64)EHoudiniLandscapeExportType::Heightfield },
				{ "EHoudiniLandscapeExportType::Mesh", (int64)EHoudiniLandscapeExportType::Mesh },
				{ "EHoudiniLandscapeExportType::Points", (int64)EHoudiniLandscapeExportType::Points },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Heightfield.Name", "EHoudiniLandscapeExportType::Heightfield" },
				{ "Mesh.Name", "EHoudiniLandscapeExportType::Mesh" },
				{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
				{ "Points.Name", "EHoudiniLandscapeExportType::Points" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniLandscapeExportType",
				"EHoudiniLandscapeExportType",
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
	static UEnum* EHoudiniCurveMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniCurveMethod"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveMethod>()
	{
		return EHoudiniCurveMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniCurveMethod(EHoudiniCurveMethod_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniCurveMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Hash() { return 4094000551U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniCurveMethod"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniCurveMethod::Invalid", (int64)EHoudiniCurveMethod::Invalid },
				{ "EHoudiniCurveMethod::CVs", (int64)EHoudiniCurveMethod::CVs },
				{ "EHoudiniCurveMethod::Breakpoints", (int64)EHoudiniCurveMethod::Breakpoints },
				{ "EHoudiniCurveMethod::Freehand", (int64)EHoudiniCurveMethod::Freehand },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Breakpoints.Name", "EHoudiniCurveMethod::Breakpoints" },
				{ "CVs.Name", "EHoudiniCurveMethod::CVs" },
				{ "Freehand.Name", "EHoudiniCurveMethod::Freehand" },
				{ "Invalid.Name", "EHoudiniCurveMethod::Invalid" },
				{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniCurveMethod",
				"EHoudiniCurveMethod",
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
	static UEnum* EHoudiniCurveType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniCurveType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveType>()
	{
		return EHoudiniCurveType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniCurveType(EHoudiniCurveType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniCurveType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Hash() { return 3748172803U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniCurveType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniCurveType::Invalid", (int64)EHoudiniCurveType::Invalid },
				{ "EHoudiniCurveType::Polygon", (int64)EHoudiniCurveType::Polygon },
				{ "EHoudiniCurveType::Nurbs", (int64)EHoudiniCurveType::Nurbs },
				{ "EHoudiniCurveType::Bezier", (int64)EHoudiniCurveType::Bezier },
				{ "EHoudiniCurveType::Points", (int64)EHoudiniCurveType::Points },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bezier.Name", "EHoudiniCurveType::Bezier" },
				{ "Invalid.Name", "EHoudiniCurveType::Invalid" },
				{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
				{ "Nurbs.Name", "EHoudiniCurveType::Nurbs" },
				{ "Points.Name", "EHoudiniCurveType::Points" },
				{ "Polygon.Name", "EHoudiniCurveType::Polygon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniCurveType",
				"EHoudiniCurveType",
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
	static UEnum* EHoudiniOutputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniOutputType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniOutputType>()
	{
		return EHoudiniOutputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniOutputType(EHoudiniOutputType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniOutputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Hash() { return 3760798257U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniOutputType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniOutputType::Invalid", (int64)EHoudiniOutputType::Invalid },
				{ "EHoudiniOutputType::Mesh", (int64)EHoudiniOutputType::Mesh },
				{ "EHoudiniOutputType::Instancer", (int64)EHoudiniOutputType::Instancer },
				{ "EHoudiniOutputType::Landscape", (int64)EHoudiniOutputType::Landscape },
				{ "EHoudiniOutputType::Curve", (int64)EHoudiniOutputType::Curve },
				{ "EHoudiniOutputType::Skeletal", (int64)EHoudiniOutputType::Skeletal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Curve.Name", "EHoudiniOutputType::Curve" },
				{ "Instancer.Name", "EHoudiniOutputType::Instancer" },
				{ "Invalid.Name", "EHoudiniOutputType::Invalid" },
				{ "Landscape.Name", "EHoudiniOutputType::Landscape" },
				{ "Mesh.Name", "EHoudiniOutputType::Mesh" },
				{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
				{ "Skeletal.Name", "EHoudiniOutputType::Skeletal" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniOutputType",
				"EHoudiniOutputType",
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
	static UEnum* EHoudiniInputType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniInputType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniInputType>()
	{
		return EHoudiniInputType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniInputType(EHoudiniInputType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniInputType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Hash() { return 741042115U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniInputType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniInputType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniInputType::Invalid", (int64)EHoudiniInputType::Invalid },
				{ "EHoudiniInputType::Geometry", (int64)EHoudiniInputType::Geometry },
				{ "EHoudiniInputType::Curve", (int64)EHoudiniInputType::Curve },
				{ "EHoudiniInputType::Asset", (int64)EHoudiniInputType::Asset },
				{ "EHoudiniInputType::Landscape", (int64)EHoudiniInputType::Landscape },
				{ "EHoudiniInputType::World", (int64)EHoudiniInputType::World },
				{ "EHoudiniInputType::Skeletal", (int64)EHoudiniInputType::Skeletal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Asset.Name", "EHoudiniInputType::Asset" },
				{ "Curve.Name", "EHoudiniInputType::Curve" },
				{ "Geometry.Name", "EHoudiniInputType::Geometry" },
				{ "Invalid.Name", "EHoudiniInputType::Invalid" },
				{ "Landscape.Name", "EHoudiniInputType::Landscape" },
				{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
				{ "Skeletal.Name", "EHoudiniInputType::Skeletal" },
				{ "World.Name", "EHoudiniInputType::World" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniInputType",
				"EHoudiniInputType",
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
	static UEnum* EHoudiniLandscapeOutputBakeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniLandscapeOutputBakeType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniLandscapeOutputBakeType>()
	{
		return EHoudiniLandscapeOutputBakeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniLandscapeOutputBakeType(EHoudiniLandscapeOutputBakeType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniLandscapeOutputBakeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Hash() { return 2587098866U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniLandscapeOutputBakeType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniLandscapeOutputBakeType::Detachment", (int64)EHoudiniLandscapeOutputBakeType::Detachment },
				{ "EHoudiniLandscapeOutputBakeType::BakeToImage", (int64)EHoudiniLandscapeOutputBakeType::BakeToImage },
				{ "EHoudiniLandscapeOutputBakeType::BakeToWorld", (int64)EHoudiniLandscapeOutputBakeType::BakeToWorld },
				{ "EHoudiniLandscapeOutputBakeType::InValid", (int64)EHoudiniLandscapeOutputBakeType::InValid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BakeToImage.Name", "EHoudiniLandscapeOutputBakeType::BakeToImage" },
				{ "BakeToWorld.Name", "EHoudiniLandscapeOutputBakeType::BakeToWorld" },
				{ "Detachment.Name", "EHoudiniLandscapeOutputBakeType::Detachment" },
				{ "InValid.Name", "EHoudiniLandscapeOutputBakeType::InValid" },
				{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniLandscapeOutputBakeType",
				"EHoudiniLandscapeOutputBakeType",
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
#if WITH_EDITORONLY_DATA
	static UEnum* EHoudiniEngineBakeOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniEngineBakeOption"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniEngineBakeOption>()
	{
		return EHoudiniEngineBakeOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniEngineBakeOption(EHoudiniEngineBakeOption_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniEngineBakeOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Hash() { return 1146734987U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniEngineBakeOption"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniEngineBakeOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniEngineBakeOption::ToActor", (int64)EHoudiniEngineBakeOption::ToActor },
				{ "EHoudiniEngineBakeOption::ToBlueprint", (int64)EHoudiniEngineBakeOption::ToBlueprint },
				{ "EHoudiniEngineBakeOption::ToFoliage", (int64)EHoudiniEngineBakeOption::ToFoliage },
				{ "EHoudiniEngineBakeOption::ToWorldOutliner", (int64)EHoudiniEngineBakeOption::ToWorldOutliner },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
				{ "ToActor.Name", "EHoudiniEngineBakeOption::ToActor" },
				{ "ToBlueprint.Name", "EHoudiniEngineBakeOption::ToBlueprint" },
				{ "ToFoliage.Name", "EHoudiniEngineBakeOption::ToFoliage" },
				{ "ToWorldOutliner.Name", "EHoudiniEngineBakeOption::ToWorldOutliner" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniEngineBakeOption",
				"EHoudiniEngineBakeOption",
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
#endif // WITH_EDITORONLY_DATA
	static UEnum* EHoudiniRampInterpolationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType, Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniRampInterpolationType"));
		}
		return Singleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniRampInterpolationType>()
	{
		return EHoudiniRampInterpolationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EHoudiniRampInterpolationType(EHoudiniRampInterpolationType_StaticEnum, TEXT("/Script/HoudiniEngineRuntime"), TEXT("EHoudiniRampInterpolationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Hash() { return 2330600041U; }
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_HoudiniEngineRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EHoudiniRampInterpolationType"), 0, Get_Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniRampInterpolationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EHoudiniRampInterpolationType::InValid", (int64)EHoudiniRampInterpolationType::InValid },
				{ "EHoudiniRampInterpolationType::CONSTANT", (int64)EHoudiniRampInterpolationType::CONSTANT },
				{ "EHoudiniRampInterpolationType::LINEAR", (int64)EHoudiniRampInterpolationType::LINEAR },
				{ "EHoudiniRampInterpolationType::CATMULL_ROM", (int64)EHoudiniRampInterpolationType::CATMULL_ROM },
				{ "EHoudiniRampInterpolationType::MONOTONE_CUBIC", (int64)EHoudiniRampInterpolationType::MONOTONE_CUBIC },
				{ "EHoudiniRampInterpolationType::BEZIER", (int64)EHoudiniRampInterpolationType::BEZIER },
				{ "EHoudiniRampInterpolationType::BSPLINE", (int64)EHoudiniRampInterpolationType::BSPLINE },
				{ "EHoudiniRampInterpolationType::HERMITE", (int64)EHoudiniRampInterpolationType::HERMITE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BEZIER.Name", "EHoudiniRampInterpolationType::BEZIER" },
				{ "BSPLINE.Name", "EHoudiniRampInterpolationType::BSPLINE" },
				{ "CATMULL_ROM.Name", "EHoudiniRampInterpolationType::CATMULL_ROM" },
				{ "CONSTANT.Name", "EHoudiniRampInterpolationType::CONSTANT" },
				{ "HERMITE.Name", "EHoudiniRampInterpolationType::HERMITE" },
				{ "InValid.Name", "EHoudiniRampInterpolationType::InValid" },
				{ "LINEAR.Name", "EHoudiniRampInterpolationType::LINEAR" },
				{ "ModuleRelativePath", "Public/HoudiniEngineRuntimeCommon.h" },
				{ "MONOTONE_CUBIC.Name", "EHoudiniRampInterpolationType::MONOTONE_CUBIC" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
				nullptr,
				"EHoudiniRampInterpolationType",
				"EHoudiniRampInterpolationType",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
