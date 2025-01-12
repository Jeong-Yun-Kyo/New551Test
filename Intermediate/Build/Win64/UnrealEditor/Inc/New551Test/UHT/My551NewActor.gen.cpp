// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "New551Test/My551NewActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMy551NewActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
NEW551TEST_API UClass* Z_Construct_UClass_AMy551NewActor();
NEW551TEST_API UClass* Z_Construct_UClass_AMy551NewActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_New551Test();
// End Cross Module References

// Begin Class AMy551NewActor
void AMy551NewActor::StaticRegisterNativesAMy551NewActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMy551NewActor);
UClass* Z_Construct_UClass_AMy551NewActor_NoRegister()
{
	return AMy551NewActor::StaticClass();
}
struct Z_Construct_UClass_AMy551NewActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "My551NewActor.h" },
		{ "ModuleRelativePath", "My551NewActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewVector_MetaData[] = {
		{ "Category", "My551NewActor" },
		{ "ModuleRelativePath", "My551NewActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMy551NewActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMy551NewActor_Statics::NewProp_NewVector = { "NewVector", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMy551NewActor, NewVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewVector_MetaData), NewProp_NewVector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMy551NewActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMy551NewActor_Statics::NewProp_NewVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMy551NewActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMy551NewActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_New551Test,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMy551NewActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMy551NewActor_Statics::ClassParams = {
	&AMy551NewActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMy551NewActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMy551NewActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMy551NewActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMy551NewActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMy551NewActor()
{
	if (!Z_Registration_Info_UClass_AMy551NewActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMy551NewActor.OuterSingleton, Z_Construct_UClass_AMy551NewActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMy551NewActor.OuterSingleton;
}
template<> NEW551TEST_API UClass* StaticClass<AMy551NewActor>()
{
	return AMy551NewActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMy551NewActor);
AMy551NewActor::~AMy551NewActor() {}
// End Class AMy551NewActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_New551Test_Source_New551Test_My551NewActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMy551NewActor, AMy551NewActor::StaticClass, TEXT("AMy551NewActor"), &Z_Registration_Info_UClass_AMy551NewActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMy551NewActor), 929965681U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_New551Test_Source_New551Test_My551NewActor_h_475255336(TEXT("/Script/New551Test"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_New551Test_Source_New551Test_My551NewActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_New551Test_Source_New551Test_My551NewActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
