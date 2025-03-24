#pragma once
#include "Framework/BaseLevel.h"
class Menu : public BaseLevel
{
public:
	Menu(sf::RenderWindow* hwnd, Input* in, GameState* gs);
	~Menu();

	void handleInput(float dt) override;
	void update(float dt) override;
	void render();


private:

	sf::Font font;
	sf::Text MenuText;
};

