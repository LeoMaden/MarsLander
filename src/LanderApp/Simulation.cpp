#include "Simulation.h"

#include <glm/glm.hpp>


void Simulation::Update(float timestep)
{
	float deltaT = timestep * Speed;

	// Verlet integration
	glm::vec3 acc = CalculateForces() / Lander.Mass;
	Lander.Position += (Lander.Velocity * deltaT) + (0.5f * acc * deltaT * deltaT);
	glm::vec3 nextAcc = CalculateForces() / Lander.Mass;
	Lander.Velocity += 0.5f * (acc + nextAcc) * deltaT;
}

glm::vec3 Simulation::CalculateForces()
{
	glm::vec3 netF = glm::vec3(0.0f);

	// Gravity
	netF += -1.0f * Gravity * MarsMass * Lander.Mass * Lander.Position / powf(glm::length(Lander.Position), 3);

	// Air resistance 
	// 0.5 * rho A C_d v^2
	netF += -0.5f * CalculateAirDensity() * Lander.Area * Lander.DragCoeffLander * glm::length(Lander.Velocity) * Lander.Velocity;

	// Main Thruster
	netF += Lander.Thrust * Lander.MaxThrust * glm::normalize(Lander.DownDirection);

	return netF;
}

float Simulation::CalculateAirDensity()
{
	// TODO: Atmosphere
	return 0.0f;
}
