#pragma once
#include "Lander.h"

#include <chrono>

class Simulation
{
public:
	static constexpr float MarsRadius	= 3386000.0f;		// m
	static constexpr float MarsMass		= 6.42e23;			// kg
	static constexpr float MarsDay		= 88642.65;			// s

	static constexpr float Gravity		= 6.673e-11;		// m^3 kg^-1 s^-2

public:
	Lander Lander;

	float Speed = 10;		// e.g. 10 means 10s pass in sim for 1s in real-time.

	//std::chrono::high_resolution_clock RealTime;
	//float SimTime;


	void Update(float timestep);

	glm::vec3 CalculateForces();
	float CalculateAirDensity(); // kg m^-3


	
};