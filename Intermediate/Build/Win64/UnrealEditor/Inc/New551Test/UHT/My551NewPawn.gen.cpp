// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "New551Test/My551NewPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMy551NewPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
NEW551TEST_API UClass* Z_Construct_UClass_AMy551NewPawn();
NEW551TEST_API UClass* Z_Construct_UClass_AMy551NewPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_New551Test();
// End Cross Module References

// Begin Class AMy551NewPawn
void AMy551NewPawn::StaticRegisterNativesAMy551NewPawn()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMy551NewPawn);
UClass* Z_Construct_UClass_AMy551NewPawn_NoRegister()
{
	return AMy551NewPawn::StaticClass();
}
struct Z_Construct_UClass_AMy551NewPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "My551NewPawn.h" },
		{ "ModuleRelativePath", "My551NewPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OurVisibleComponent_MetaData[] = {
		{ "Category", "My551NewPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "My551NewPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OurVisibleComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMy551NewPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMy551NewPawn_Statics::NewProp_OurVisibleComponent = { "OurVisibleComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMy551NewPawn, OurVisibleComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OurVisibleComponent_MetaData), NewProp_OurVisibleComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMy551NewPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMy551NewPawn_Statics::NewProp_OurVisibleComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMy551NewPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMy551NewPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_New551Test,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMy551NewPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMy551NewPawn_Statics::ClassParams = {
	&AMy551NewPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMy551NewPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMy551NewPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMy551NewPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AMy551NewPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMy551NewPawn()
{
	if (!Z_Registration_Info_UClass_AMy551NewPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMy551NewPawn.OuterSingleton, Z_Construct_UClass_AMy551NewPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMy551NewPawn.OuterSingleton;
}
template<> NEW551TEST_API UClass* StaticClass<AMy551NewPawn>()
{
	return AMy551NewPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMy551NewPawn);
AMy551NewPawn::~AMy551NewPawn() {}
// End Class AMy551NewPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_New551Test_Source_New551Test_My551NewPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMy551NewPawn, AMy551NewPawn::StaticClass, TEXT("AMy551NewPawn"), &Z_Registration_Info_UClass_AMy551NewPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMy551NewPawn), 892428529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_New551Test_Source_New551Test_My551NewPawn_h_2938083604(TEXT("/Script/New551Test"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_New551Test_Source_New551Test_My551NewPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal_Projects_New551Test_Source_New551Test_My551NewPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
