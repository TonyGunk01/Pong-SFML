#include "../../Header/Event/EventManager.h"
#include <iostream>

void EventManager::pollEvents(sf::RenderWindow* game_window) {
    sf::Event event;
    while (game_window->pollEvent(event)) {
        // Handle left mouse button click
        if (isLeftMouseButtonClicked())
        {
            sf::Vector2i position = sf::Mouse::getPosition(*game_window);

            // Log the mouse position
            std::cout << "Left mouse click at: " << position.x << ", " << position.y << std::endl;
        }

        if (isKeyPressed(sf::Keyboard::Escape)) {
            game_window->close();
        }
    }
}

bool EventManager::isLeftMouseButtonClicked()
{
    // Detect if the left mouse button is clicked
    return (sf::Mouse::isButtonPressed(sf::Mouse::Left));
}

bool EventManager::isKeyPressed(sf::Keyboard::Key key) {
    // Detect if a specific key is pressed
    return sf::Keyboard::isKeyPressed(key);
}