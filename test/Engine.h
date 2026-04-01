#pragma once
#include <SFML/Graphics.hpp>

class Engine
{
public:
    Engine();
    void run();

private:
    void processEvent();
    void update(float dt);
    void render();

private:
    sf::RenderWindow window;
};