#include "engine.h"



Engine::Engine()
{
}

void Engine::createWindow(int windowWidht, int windowHeight, std::string windowName)
{
	sf::Window window(sf::VideoMode(windowWidht, windowHeight), windowName);
}



Engine::~Engine()
{
}
