// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FTransform;
enum class EHoudiniPublicAPICurveMethod : uint8;
enum class EHoudiniPublicAPICurveType : uint8;
#ifdef HOUDINIENGINEEDITOR_HoudiniPublicAPIInputTypes_generated_h
#error "HoudiniPublicAPIInputTypes.generated.h already included, missing '#pragma once' in HoudiniPublicAPIInputTypes.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniPublicAPIInputTypes_generated_h

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_SPARSE_DATA
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_RPC_WRAPPERS \
	virtual bool GetInputObjects_Implementation(TArray<UObject*>& OutObjects); \
	virtual bool SetInputObjects_Implementation(TArray<UObject*> const& InObjects); \
	virtual bool IsAcceptableObjectForInput_Implementation(UObject* InObject) const; \
 \
	DECLARE_FUNCTION(execGetInputObjects); \
	DECLARE_FUNCTION(execSetInputObjects); \
	DECLARE_FUNCTION(execIsAcceptableObjectForInput);


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetInputObjects_Implementation(TArray<UObject*>& OutObjects); \
	virtual bool SetInputObjects_Implementation(TArray<UObject*> const& InObjects); \
 \
	DECLARE_FUNCTION(execGetInputObjects); \
	DECLARE_FUNCTION(execSetInputObjects); \
	DECLARE_FUNCTION(execIsAcceptableObjectForInput);


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_EVENT_PARMS \
	struct HoudiniPublicAPIInput_eventGetInputObjects_Parms \
	{ \
		TArray<UObject*> OutObjects; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIInput_eventGetInputObjects_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms \
	{ \
		UObject* InObject; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIInput_eventIsAcceptableObjectForInput_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIInput_eventSetInputObjects_Parms \
	{ \
		TArray<UObject*> InObjects; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIInput_eventSetInputObjects_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_CALLBACK_WRAPPERS
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIInput, UHoudiniPublicAPIObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIInput, UHoudiniPublicAPIObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPIInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPIInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIInput(UHoudiniPublicAPIInput&&); \
	NO_API UHoudiniPublicAPIInput(const UHoudiniPublicAPIInput&); \
public:


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIInput(UHoudiniPublicAPIInput&&); \
	NO_API UHoudiniPublicAPIInput(const UHoudiniPublicAPIInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPIInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InputObjects() { return STRUCT_OFFSET(UHoudiniPublicAPIInput, InputObjects); }


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_58_PROLOG \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_EVENT_PARMS


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_RPC_WRAPPERS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_INCLASS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPIInput>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_SPARSE_DATA
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_RPC_WRAPPERS \
	virtual bool GetObjectTransformOffset_Implementation(UObject* InObject, FTransform& OutTransform) const; \
	virtual bool SetObjectTransformOffset_Implementation(UObject* InObject, FTransform const& InTransform); \
 \
	DECLARE_FUNCTION(execGetObjectTransformOffset); \
	DECLARE_FUNCTION(execSetObjectTransformOffset);


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool GetObjectTransformOffset_Implementation(UObject* InObject, FTransform& OutTransform) const; \
	virtual bool SetObjectTransformOffset_Implementation(UObject* InObject, FTransform const& InTransform); \
 \
	DECLARE_FUNCTION(execGetObjectTransformOffset); \
	DECLARE_FUNCTION(execSetObjectTransformOffset);


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_EVENT_PARMS \
	struct HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms \
	{ \
		UObject* InObject; \
		FTransform OutTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIGeoInput_eventGetObjectTransformOffset_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms \
	{ \
		UObject* InObject; \
		FTransform InTransform; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPIGeoInput_eventSetObjectTransformOffset_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_CALLBACK_WRAPPERS
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIGeoInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIGeoInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIGeoInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIGeoInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIGeoInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIGeoInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIGeoInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPIGeoInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPIGeoInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIGeoInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIGeoInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIGeoInput(UHoudiniPublicAPIGeoInput&&); \
	NO_API UHoudiniPublicAPIGeoInput(const UHoudiniPublicAPIGeoInput&); \
public:


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIGeoInput(UHoudiniPublicAPIGeoInput&&); \
	NO_API UHoudiniPublicAPIGeoInput(const UHoudiniPublicAPIGeoInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIGeoInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIGeoInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPIGeoInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InputObjectTransformOffsets() { return STRUCT_OFFSET(UHoudiniPublicAPIGeoInput, InputObjectTransformOffsets); }


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_169_PROLOG \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_EVENT_PARMS


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_RPC_WRAPPERS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_INCLASS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_172_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPIGeoInput>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_SPARSE_DATA
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_RPC_WRAPPERS \
	virtual void SetCurveMethod_Implementation(const EHoudiniPublicAPICurveMethod InCurveMethod); \
	virtual EHoudiniPublicAPICurveMethod GetCurveMethod_Implementation() const; \
	virtual void SetCurveType_Implementation(const EHoudiniPublicAPICurveType InCurveType); \
	virtual EHoudiniPublicAPICurveType GetCurveType_Implementation() const; \
	virtual void SetReversed_Implementation(bool bInReversed); \
	virtual bool IsReversed_Implementation() const; \
	virtual void SetClosed_Implementation(bool bInClosed); \
	virtual bool IsClosed_Implementation() const; \
	virtual void GetCurvePoints_Implementation(TArray<FTransform>& OutCurvePoints) const; \
	virtual void ClearCurvePoints_Implementation(); \
	virtual void AppendCurvePoint_Implementation(FTransform const& InCurvePoint); \
	virtual void SetCurvePoints_Implementation(TArray<FTransform> const& InCurvePoints); \
 \
	DECLARE_FUNCTION(execSetCurveMethod); \
	DECLARE_FUNCTION(execGetCurveMethod); \
	DECLARE_FUNCTION(execSetCurveType); \
	DECLARE_FUNCTION(execGetCurveType); \
	DECLARE_FUNCTION(execSetReversed); \
	DECLARE_FUNCTION(execIsReversed); \
	DECLARE_FUNCTION(execSetClosed); \
	DECLARE_FUNCTION(execIsClosed); \
	DECLARE_FUNCTION(execGetCurvePoints); \
	DECLARE_FUNCTION(execClearCurvePoints); \
	DECLARE_FUNCTION(execAppendCurvePoint); \
	DECLARE_FUNCTION(execSetCurvePoints);


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCurveMethod); \
	DECLARE_FUNCTION(execGetCurveMethod); \
	DECLARE_FUNCTION(execSetCurveType); \
	DECLARE_FUNCTION(execGetCurveType); \
	DECLARE_FUNCTION(execSetReversed); \
	DECLARE_FUNCTION(execIsReversed); \
	DECLARE_FUNCTION(execSetClosed); \
	DECLARE_FUNCTION(execIsClosed); \
	DECLARE_FUNCTION(execGetCurvePoints); \
	DECLARE_FUNCTION(execClearCurvePoints); \
	DECLARE_FUNCTION(execAppendCurvePoint); \
	DECLARE_FUNCTION(execSetCurvePoints);


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_EVENT_PARMS \
	struct HoudiniPublicAPICurveInputObject_eventAppendCurvePoint_Parms \
	{ \
		FTransform InCurvePoint; \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms \
	{ \
		EHoudiniPublicAPICurveMethod ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPICurveInputObject_eventGetCurveMethod_Parms() \
			: ReturnValue((EHoudiniPublicAPICurveMethod)0) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventGetCurvePoints_Parms \
	{ \
		TArray<FTransform> OutCurvePoints; \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms \
	{ \
		EHoudiniPublicAPICurveType ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPICurveInputObject_eventGetCurveType_Parms() \
			: ReturnValue((EHoudiniPublicAPICurveType)0) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventIsClosed_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPICurveInputObject_eventIsClosed_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventIsReversed_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		HoudiniPublicAPICurveInputObject_eventIsReversed_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventSetClosed_Parms \
	{ \
		bool bInClosed; \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventSetCurveMethod_Parms \
	{ \
		EHoudiniPublicAPICurveMethod InCurveMethod; \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventSetCurvePoints_Parms \
	{ \
		TArray<FTransform> InCurvePoints; \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventSetCurveType_Parms \
	{ \
		EHoudiniPublicAPICurveType InCurveType; \
	}; \
	struct HoudiniPublicAPICurveInputObject_eventSetReversed_Parms \
	{ \
		bool bInReversed; \
	};


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_CALLBACK_WRAPPERS
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPICurveInputObject(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPICurveInputObject, UHoudiniPublicAPIObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPICurveInputObject)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPICurveInputObject(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPICurveInputObject_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPICurveInputObject, UHoudiniPublicAPIObjectBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPICurveInputObject)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPICurveInputObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPICurveInputObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPICurveInputObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPICurveInputObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPICurveInputObject(UHoudiniPublicAPICurveInputObject&&); \
	NO_API UHoudiniPublicAPICurveInputObject(const UHoudiniPublicAPICurveInputObject&); \
public:


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPICurveInputObject(UHoudiniPublicAPICurveInputObject&&); \
	NO_API UHoudiniPublicAPICurveInputObject(const UHoudiniPublicAPICurveInputObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPICurveInputObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPICurveInputObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPICurveInputObject)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurvePoints() { return STRUCT_OFFSET(UHoudiniPublicAPICurveInputObject, CurvePoints); } \
	FORCEINLINE static uint32 __PPO__bClosed() { return STRUCT_OFFSET(UHoudiniPublicAPICurveInputObject, bClosed); } \
	FORCEINLINE static uint32 __PPO__bReversed() { return STRUCT_OFFSET(UHoudiniPublicAPICurveInputObject, bReversed); } \
	FORCEINLINE static uint32 __PPO__CurveType() { return STRUCT_OFFSET(UHoudiniPublicAPICurveInputObject, CurveType); } \
	FORCEINLINE static uint32 __PPO__CurveMethod() { return STRUCT_OFFSET(UHoudiniPublicAPICurveInputObject, CurveMethod); }


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_251_PROLOG \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_EVENT_PARMS


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_RPC_WRAPPERS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_INCLASS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_254_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPICurveInputObject>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_SPARSE_DATA
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_RPC_WRAPPERS
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPICurveInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPICurveInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPICurveInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPICurveInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPICurveInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPICurveInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPICurveInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPICurveInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPICurveInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPICurveInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPICurveInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPICurveInput(UHoudiniPublicAPICurveInput&&); \
	NO_API UHoudiniPublicAPICurveInput(const UHoudiniPublicAPICurveInput&); \
public:


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPICurveInput(UHoudiniPublicAPICurveInput&&); \
	NO_API UHoudiniPublicAPICurveInput(const UHoudiniPublicAPICurveInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPICurveInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPICurveInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPICurveInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_401_PROLOG
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_RPC_WRAPPERS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_INCLASS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_404_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPICurveInput>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_SPARSE_DATA
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_RPC_WRAPPERS
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIAssetInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIAssetInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIAssetInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIAssetInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIAssetInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIAssetInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIAssetInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPIAssetInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPIAssetInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIAssetInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIAssetInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIAssetInput(UHoudiniPublicAPIAssetInput&&); \
	NO_API UHoudiniPublicAPIAssetInput(const UHoudiniPublicAPIAssetInput&); \
public:


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIAssetInput(UHoudiniPublicAPIAssetInput&&); \
	NO_API UHoudiniPublicAPIAssetInput(const UHoudiniPublicAPIAssetInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIAssetInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIAssetInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPIAssetInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_435_PROLOG
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_RPC_WRAPPERS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_INCLASS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_438_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPIAssetInput>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_SPARSE_DATA
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_RPC_WRAPPERS
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIWorldInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIWorldInput, UHoudiniPublicAPIGeoInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIWorldInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPIWorldInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPIWorldInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPIWorldInput, UHoudiniPublicAPIGeoInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPIWorldInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPIWorldInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPIWorldInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIWorldInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIWorldInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIWorldInput(UHoudiniPublicAPIWorldInput&&); \
	NO_API UHoudiniPublicAPIWorldInput(const UHoudiniPublicAPIWorldInput&); \
public:


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPIWorldInput(UHoudiniPublicAPIWorldInput&&); \
	NO_API UHoudiniPublicAPIWorldInput(const UHoudiniPublicAPIWorldInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPIWorldInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPIWorldInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPIWorldInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_461_PROLOG
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_RPC_WRAPPERS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_INCLASS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_464_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPIWorldInput>();

#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_SPARSE_DATA
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_RPC_WRAPPERS
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPILandscapeInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPILandscapeInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPILandscapeInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_INCLASS \
private: \
	static void StaticRegisterNativesUHoudiniPublicAPILandscapeInput(); \
	friend struct Z_Construct_UClass_UHoudiniPublicAPILandscapeInput_Statics; \
public: \
	DECLARE_CLASS(UHoudiniPublicAPILandscapeInput, UHoudiniPublicAPIInput, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HoudiniEngineEditor"), NO_API) \
	DECLARE_SERIALIZER(UHoudiniPublicAPILandscapeInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHoudiniPublicAPILandscapeInput(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHoudiniPublicAPILandscapeInput) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPILandscapeInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPILandscapeInput); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPILandscapeInput(UHoudiniPublicAPILandscapeInput&&); \
	NO_API UHoudiniPublicAPILandscapeInput(const UHoudiniPublicAPILandscapeInput&); \
public:


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHoudiniPublicAPILandscapeInput(UHoudiniPublicAPILandscapeInput&&); \
	NO_API UHoudiniPublicAPILandscapeInput(const UHoudiniPublicAPILandscapeInput&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHoudiniPublicAPILandscapeInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHoudiniPublicAPILandscapeInput); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHoudiniPublicAPILandscapeInput)


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_508_PROLOG
#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_RPC_WRAPPERS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_INCLASS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_SPARSE_DATA \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h_511_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOUDINIENGINEEDITOR_API UClass* StaticClass<class UHoudiniPublicAPILandscapeInput>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineEditor_Public_HoudiniPublicAPIInputTypes_h


#define FOREACH_ENUM_EHOUDINIPUBLICAPICURVEMETHOD(op) \
	op(EHoudiniPublicAPICurveMethod::Invalid) \
	op(EHoudiniPublicAPICurveMethod::CVs) \
	op(EHoudiniPublicAPICurveMethod::Breakpoints) \
	op(EHoudiniPublicAPICurveMethod::Freehand) 

enum class EHoudiniPublicAPICurveMethod : uint8;
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPICurveMethod>();

#define FOREACH_ENUM_EHOUDINIPUBLICAPICURVETYPE(op) \
	op(EHoudiniPublicAPICurveType::Invalid) \
	op(EHoudiniPublicAPICurveType::Polygon) \
	op(EHoudiniPublicAPICurveType::Nurbs) \
	op(EHoudiniPublicAPICurveType::Bezier) \
	op(EHoudiniPublicAPICurveType::Points) 

enum class EHoudiniPublicAPICurveType : uint8;
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniPublicAPICurveType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
