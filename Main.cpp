#include <iostream>
#include <SFML/Graphics.hpp>
#include "../../Header/Core/GameWindowManager.h"
#include "../../Header/Event/EventManager.h"

int main()
{
    // Create our window manager instance
    Core::GameWindowManager gameWindowManager;

    // Initialize the window
    gameWindowManager.initialize();

    // Create the EventManager instance
    EventManager eventManager;

    while (gameWindowManager.isGameRunning()) {

        // Poll and handle events
        eventManager.pollEvents(gameWindowManager.getGameWindow());

        gameWindowManager.render();
    }

    return 0;
}