
#include "Application.h"

#include <iostream>

#include "LanderApp.h"

int main()
{
	LanderApp* app = new LanderApp();

	app->Run();

	delete app;

	std::cin.get();

	return 0;
}