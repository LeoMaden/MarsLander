#pragma once
#include "Application.h"
#include "Log.h"

#include "Simulation.h"

#include <fstream>

class LanderApp : public Engine::Application
{
public:

	LanderApp()
		: TestFile("test-positions.txt")
	{
		LOG_DEBUG("LanderApp Constructor");

	}

	virtual void OnStartup() override
	{
		LOG_DEBUG("LanderApp Startup");

		Simulation.Speed = 60 * 20;

		Lander& l = Simulation.Lander;

		l.Position = glm::vec3(1.2f * Simulation.MarsRadius, 0.0f, 0.0f);
		l.Velocity = glm::vec3(0.0f, -3247.087385863725f, 0.0f);
		l.DownDirection = glm::normalize(l.Velocity);

		l.Mass = 100;
		l.Thrust = 0.00f;		

	}

	virtual void OnUpdate(float timestep) override
	{
		Simulation.Update(timestep);

		LOG_TRACE("x = {:.2f}, y = {:.2f}", Simulation.Lander.Position.x, Simulation.Lander.Position.y);

		TestFile << Simulation.Lander.Position.x << " " << Simulation.Lander.Position.y << "\n";
	}

	virtual ~LanderApp()
	{
		LOG_DEBUG("LanderApp Destructor");

		TestFile.close();
	}


private:
	Simulation Simulation;
	std::ofstream TestFile;
};