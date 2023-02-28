// Copyright Codeware Games. All Rights Reserved.

#pragma once

#pragma once
#include "Modules/ModuleInterface.h"

DECLARE_LOG_CATEGORY_EXTERN(gRPC, Log, All);

class FgRPCModule : public IModuleInterface
{
private:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
