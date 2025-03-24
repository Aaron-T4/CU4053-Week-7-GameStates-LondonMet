#include "Menu.h"
#include <iostream>
#include "Level.h"
#include "Framework/GameState.h"


Menu::Menu(sf::RenderWindow* hwnd, Input* in, GameState* gs)
{
	window = hwnd;
	input = in;
	gameState = gs;


	if (!font.loadFromFile("font/Japanese3017.ttf"))
	{
		std::cout << "Font has not loaded\n";
	}


		MenuText.setFont(font);
		MenuText.setCharacterSize(24);
		MenuText.setPosition(100, 100);
		//MenuText.setColor(sf::Color::Black);
		MenuText.setFillColor(sf::Color::Red);
		MenuText.setString("Ppress Enter to \n Load the Menu");





}

Menu::~Menu()
{
}

void Menu::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Return))
	{
		(input->isKeyDown(sf::Keyboard::Return));
		gameState->setCurrentState(State::LEVEL);

	}


}

void Menu::update(float dt)
{
}

void Menu::render()
{
	beginDraw();
	window->draw(MenuText);
	endDraw();
}
