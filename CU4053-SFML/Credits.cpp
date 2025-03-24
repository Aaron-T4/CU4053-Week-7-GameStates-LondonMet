#include "Credits.h"
#include <iostream>
#include "Level.h"
#include "Framework/GameState.h"

Credits::Credits(sf::RenderWindow* hwnd, Input* in, GameState* gs)
{
	window = hwnd;
	input = in;
	gameState = gs;

	if (!font.loadFromFile("font/Japanese3017.ttf"))
	{
		std::cout << "Font has not loaded\n";
	}

	CreditsText.setFont(font);
	CreditsText.setCharacterSize(24);
	CreditsText.setPosition(500, 200);
	//MenuText.setColor(sf::Color::Black);
	CreditsText.setFillColor(sf::Color::Magenta);
	CreditsText.setString("Menu creation: \n Aaron \n Press Esc to exit the game");
}

Credits::~Credits()
{
}

void Credits::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Space))
	{
		input->setKeyUp(sf::Keyboard::Space);
		gameState->setCurrentState(State::LEVEL);

	}


	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		input->setKeyUp(sf::Keyboard::Escape);
		exit(0);

	}
}


void Credits::update(float dt)
{
}

void Credits::render()
{
	beginDraw();
	window->draw(CreditsText);
	endDraw();
}
