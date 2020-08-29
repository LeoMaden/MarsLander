
#include "Application.h"
#include <iostream>

int main()
{
	Engine::Application* app = new Engine::Application();

	delete app;

	std::cin.get();

	return 0;
}