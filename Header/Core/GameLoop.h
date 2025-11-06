#pragma once
#include <SFML/Graphics.hpp>
#include "GameWindowManager.h"
#include "../Event/EventManager.h"
#include "../Gameplay/GameplayManager.h"

using namespace sf;
using namespace Core;
using namespace EventM;
using namespace std;

namespace Core
{
	class GameLoop
	{
		private:
			GameWindowManager* game_window_manager;
			EventManager* event_manager;
			GameplayManager* gameplay_manager;

		public:
			void initialize();
			bool isGameRunning();
			void pollEvent();
			void update();
			void render();
	};
}