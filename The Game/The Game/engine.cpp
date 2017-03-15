#include "engine.h"



Engine::Engine()
	:windowWight(800), windowHeight(600), windowName("THE GAME")
{
	sf::Window window;		//Tworzenie okna w konstruktorze
	window.create(sf::VideoMode(windowWight, windowHeight), windowName, sf::Style::Default);
}


Engine::~Engine()
{
}
