#include "../../Header/Event/EventManager.h"

namespace Event
{
	void EventManager::pollEvents(RenderWindow* game_window)
	{
		sf::Event event;
		while (game_window->pollEvent(event))
		{
			// Handle window close event
			if (event.type == sf::Event::Closed)
			{
				game_window->close();
			}
		}
	}

	bool EventManager::isKeyPressed(sf::Keyboard::Key key)
	{
		return sf::Keyboard::isKeyPressed(key);
	}

	void EventManager::pollEvents(RenderWindow* game_window)
	{
		sf::Event event;
		while (game_window->pollEvent(event))
		{
			// Handle window close event
			if (event.type == sf::Event::Closed)
			{
				game_window->close();
			}
		}
	}
}
