#include "../../Header/Core/GameWindowManager.h"

namespace Core
{
    void GameWindowManager::initialize() 
    {
        game_window = new RenderWindow();
        createGameWindow();
    }

    void GameWindowManager::createGameWindow() 
    {
        game_window->create(VideoMode::getDesktopMode(), game_title, sf::Style::Fullscreen);
    }

    bool GameWindowManager::isGameRunning() 
    {
        return game_window->isOpen();
    }

    RenderWindow* GameWindowManager::getGameWindow() 
    {
        return game_window;
    }

    void GameWindowManager::clearGameWindow()
    {
        game_window->clear();
    }

    void GameWindowManager::displayGameWindow()
    {
        game_window->display();
	}
}