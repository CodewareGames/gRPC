// Copyright Codeware Games. All Rights Reserved.

#include "gRPC.h"
#include "Modules/ModuleManager.h"


#define LOCTEXT_NAMESPACE "FgRPCModule"

DEFINE_LOG_CATEGORY(gRPC);

void FgRPCModule::StartupModule()
{
	UE_LOG(gRPC, Log, TEXT("Startup gRPC Module"));
}

void FgRPCModule::ShutdownModule()
{
	UE_LOG(gRPC, Log, TEXT("Shutdown gRPC Module"));
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FgRPCModule, gRPC)