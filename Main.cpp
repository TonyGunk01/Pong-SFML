#include <iostream>
#include <SFML/Graphics.hpp>
#include "../../Header/Core/GameWindowManager.h"
#include "../../Header/Event/EventManager.h"
#include "../../Header/Core/GameLoop.h"

using namespace sf;
using namespace Core;

int main()
{
    Core::GameWindowManager gameWindowManager;

    gameWindowManager.initialize();

    EventM::EventManager eventManager;

    while (gameWindowManager.isGameRunning()) 
    {
        eventManager.pollEvents(gameWindowManager.getGameWindow());
        gameWindowManager.render();
    }

    GameLoop* game_loop_manager = new GameLoop();

	game_loop_manager->initialize();

    while(game_loop_manager->isGameRunning())
    {
        game_loop_manager->pollEvent();
        game_loop_manager->update();
        game_loop_manager->render();
	}

    return 0;
}