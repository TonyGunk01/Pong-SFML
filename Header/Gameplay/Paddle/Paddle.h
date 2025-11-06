#pragma once
#include <SFML/Graphics.hpp>
#include "../../Header/Gameplay/Ball/Ball.h"

using namespace sf;

class Paddle
{
	private:
		RectangleShape paddle_sprite;
		const float paddle_width = 20.0f;
		const float paddle_height = 140.0f;

	public:
		Paddle(float position_x, float position_y);
		void update();
		void render(RenderWindow* game_window);
};