#include "../../Header/Event/EventManager.h"
#include <iostream>

namespace EventM
{
    void EventManager::pollEvents(sf::RenderWindow* game_window)
    {
        sf::Event event;

        while (game_window->pollEvent(event))
        {
            if (isLeftMouseButtonClicked())
            {
                sf::Vector2i position = sf::Mouse::getPosition(*game_window);
                std::cout << "Left mouse click at: " << position.x << ", " << position.y << std::endl;
            }

            if (event.type == sf::Event::Closed)
            {
                game_window->close();
            }

            if (isKeyPressed(sf::Keyboard::Escape))
            {
                game_window->close();
            }
        }
    }

    bool EventManager::isKeyPressed(sf::Keyboard::Key key)
    {
        return sf::Keyboard::isKeyPressed(key);
    }

    bool EventManager::isLeftMouseButtonClicked()
    {
        // Detect if the left mouse button is clicked
        return (sf::Mouse::isButtonPressed(sf::Mouse::Left));
    }
}
