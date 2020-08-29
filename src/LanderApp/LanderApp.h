#pragma once
#include "Application.h"
#include "Log.h"

#include "Rendering/RenderCommand.h"
#include "Rendering/Renderer2D.h"
#include "Rendering/Renderer3D.h"

class LanderApp : public Engine::Application
{
public:

	LanderApp()
	{
		LOG_DEBUG("LanderApp Constructor");
	}

	virtual void OnStartup() override
	{
		LOG_DEBUG("LanderApp Startup");
		// TODO: Shaders for applications and engine
		//Engine::RenderCommand::InitRenderer();
		//Engine::Renderer2D::Init();
		//Engine::Renderer3D::Init();
	}

	virtual void OnUpdate(float timestep) override
	{

	}

	virtual ~LanderApp()
	{
		LOG_DEBUG("LanderApp Destructor");
	}

};