#pragma once
#include "Paddle/Paddle.h"
#include "Ball/Ball.h"
#include "Boundary/Boundary.h"
#include "../../Header/Event/EventManager.h"
#include "../../Header/Utility/TimeService.h"
#include "../../Header/UI/UIService.h"
#include <SFML/Graphics.hpp>

using namespace Utility;
using namespace EventM;
using namespace UI;

namespace Gameplay 
{
	class GameplayManager 
	{
		private:
			float player1_position_x = 40.0f;
			float player1_position_y = 300.0f;

			float player2_position_x = 1210.0f;
			float player2_position_y = 300.0f;



			Ball* ball;
			Paddle* player1;
			Paddle* player2;
			EventManager* event_manager;
			Boundary* boundary;
			TimeService* time_service;
			UIService* ui_service = new UIService;

			void initialize();

		public:
			GameplayManager(EventManager* manager);
			void update();
			void render(RenderWindow* game_window);
			void UpdateScore();
			void resetPlayers();
	};
}