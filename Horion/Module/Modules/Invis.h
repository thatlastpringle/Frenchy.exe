#pragma once
#include "Module.h"
#include "../../../Memory/SkinData.h"

class Invis : public IModule
{
public:
	Invis() : IModule(0x0, Category::EXPLOITS, "Makes you effectively in vanish.") {}
	~Invis() {}

	virtual const char* getModuleName() override
	{
		return ("Invis");
		setEnabled(true);
	}
	
    virtual void onEnable() override;
	virtual void onDisable() override;
};

