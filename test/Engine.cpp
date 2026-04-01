#include "Engine.h"

Engine::Engine()
    : window(sf::VideoMode({600, 800}), "TopDown Engine")
{
}

void Engine::run()
{
    sf::Clock clock;

    while (window.isOpen())
    {
        float dt = clock.restart().asSeconds();

        processEvent();
        update(dt);
        render();
    }
}

void Engine::processEvent()
{
    while (const std::optional<sf::Event> event = window.pollEvent())
    {
        if (event->is<sf::Event::Closed>())
        {
            window.close();
        }
    }
}

void Engine::update(float dt)
{
    // empty
}

void Engine::render()
{
    window.clear();
    window.display();
}