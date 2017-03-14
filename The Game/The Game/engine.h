#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#pragma once

class Engine
{
public:
	Engine();
	~Engine();


	unsigned int windowWight = 800;			//Default value for window wight set to 800
	unsigned int windowHeight = 600;		//Default value for window height set to 600
	std::string windowName = "THE GAME";	//Default name for woindow set to "THE GAME"


	void createWindow(int windowWight, int windowHeight, std::string windowName);

};

