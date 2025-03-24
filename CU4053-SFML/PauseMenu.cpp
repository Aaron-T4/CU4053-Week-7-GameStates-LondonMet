#include "PauseMenu.h"
#include <iostream>
#include "Level.h"
#include "Framework/GameState.h"

PauseMenu::PauseMenu(sf::RenderWindow* hwnd, Input* in, GameState* gs)
{
	window = hwnd;
	input = in;
	gameState = gs;

	if (!font.loadFromFile("font/Japanese3017.ttf"))
	{
		std::cout << "Font has not loaded\n";
	}
	
	PauseMenuText.setFont(font);
	PauseMenuText.setCharacterSize(24);
	PauseMenuText.setPosition(500, 100);
	//MenuText.setColor(sf::Color::Black);
	PauseMenuText.setFillColor(sf::Color::Black);
	PauseMenuText.setString("Press Enter to \n unpause the game");

}

PauseMenu::~PauseMenu()
{
}

void PauseMenu::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		input->setKeyUp(sf::Keyboard::Escape);
		gameState->setCurrentState(State::LEVEL);

	}
}

void PauseMenu::update(float dt)
{
}

void PauseMenu::render()
{
	beginDraw();
	window->draw(PauseMenuText);
	endDraw();
}
