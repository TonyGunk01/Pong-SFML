#include "../../Header/Sound/SoundManager.h"
#include <iostream>

using namespace sf;

namespace Sounds
{
    SoundBuffer SoundManager::ballBounce;
    Sound SoundManager::soundEffect;

    const std::string SoundManager::ballBouncePath = "Assets/Sounds/Ball_Bounce.wav";

    void SoundManager::Initialize()
    {
        LoadSoundFromFile();
    }

    sf::Music SoundManager::backgroundMusic;
    const std::string SoundManager::bgmPath = "Assets/Sounds/Pong_bgm.mp3";
    float SoundManager::backgroundMusicVolume = 50.0f;

    void SoundManager::LoadSoundFromFile()
    {
        if (!ballBounce.loadFromFile(ballBouncePath))
            std::cerr << "Error loading sound file: " << ballBouncePath << std::endl;

        if (!backgroundMusic.openFromFile(bgmPath))
        {
            std::cerr << "Error loading background music file: " << bgmPath << std::endl;
            return;
        }
    }

    void SoundManager::PlaySoundEffect(SoundType soundType)
    {
        switch (soundType)
        {
        case SoundType::BALL_BOUNCE:
            soundEffect.setBuffer(ballBounce);
            break;
        default:
            std::cerr << "Invalid sound type" << std::endl;
            return;
        }

        soundEffect.play();
    }

    void SoundManager::PlayBackgroundMusic()
    {
        backgroundMusic.setVolume(backgroundMusicVolume);
        backgroundMusic.setLoop(true);
        backgroundMusic.play();
    }
}