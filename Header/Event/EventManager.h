#pragma once
#include "../../Header/Event/EventManager.h"
#include <SFML/Graphics.hpp>

using namespace sf;

namespace EventM
{
	class EventManager 
	{
		private:

		public:
			void pollEvents(RenderWindow* game_window);

			bool isKeyPressed(sf::Keyboard::Key key);

			bool isLeftMouseButtonClicked();
	};
}
