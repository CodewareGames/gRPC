// Copyright Codeware Games. All Rights Reserved.

#include "gRPC.h"
#include "Modules/ModuleManager.h"

#if WITH_EDITOR
#include "ISettingsModule.h"
#include "ISettingsSection.h"
#include "gRPCSettings.h"
#endif


#define LOCTEXT_NAMESPACE "FgRPCModule"

DEFINE_LOG_CATEGORY(gRPC);

void FgRPCModule::StartupModule()
{
	UE_LOG(gRPC, Log, TEXT("Startup gRPC Module"));

#if WITH_EDITOR
	ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
	if (SettingsModule != nullptr)
	{
		SettingsModule->RegisterSettings("Project", "Game", "gRPC",
			LOCTEXT("gRPCSettingsName", "gRPC"),
			LOCTEXT("gRPCSettingsDescription", "Configure gRPC Network Service"),
			GetMutableDefault<UgRPCSettings>()
		);
	}
#endif
}

void FgRPCModule::ShutdownModule()
{
	UE_LOG(gRPC, Log, TEXT("Shutdown gRPC Module"));

#if WITH_EDITOR
	ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
	if (SettingsModule)
	{
		SettingsModule->UnregisterSettings("Project", "Game", "gRPC");
	}
#endif
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FgRPCModule, gRPC)