#pragma once
#include "Player.h"
#include <SFML/Graphics.hpp>

class Engine
{
public:
    Engine();
    void run();

private:
    void processEvents();
    void update(float dt);
    void render();

private:
    sf::RenderWindow window;
    Player player;
};