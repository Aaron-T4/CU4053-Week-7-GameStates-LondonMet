#pragma once
#include "Framework/BaseLevel.h"
class PauseMenu : public BaseLevel
{
	public:
		PauseMenu(sf::RenderWindow* hwnd, Input* in, GameState* gs);
		~PauseMenu();

		void handleInput(float dt) override;
		void update(float dt) override;
		void render();


	private:

		sf::Font font;
		sf::Text PauseMenuText;



};

