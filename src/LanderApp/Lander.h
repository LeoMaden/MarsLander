#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/constants.hpp>

class Lander
{
public:
	static constexpr float Area				= 1.0f;		// m^2
	static constexpr float MassDry			= 100.0f;	// kg
	static constexpr float FuelCapacity		= 50.0f;	// kg

	static constexpr float MainEngineSpecificImpulse = 400.0f;	// s
	static constexpr float MaxThrust = 1500.0f;	// N
	
	static constexpr float DragCoeffLander = 1.0f;	
	static constexpr float DragCoeffParachute = 2.0f;


public:
	glm::vec3 Position;
	glm::vec3 Velocity;

	// Orientation
	glm::vec3 DownDirection;
	glm::vec3 ForwardDirection;

	float AscentRate;
	float GroundSpeed;
	float Altitude;
	float Mass;

	float Thrust; // As a percentage of maximum.
};