#include "Engine.h"
#include "Player.h"

Engine::Engine()
    : window(sf::VideoMode({800, 600}), "TopDown Engine")
{
}

void Engine::run()
{
    sf::Clock clock;

    while (window.isOpen())
    {
        float dt = clock.restart().asSeconds();

        processEvents();
        update(dt);
        render();
    }
}

void Engine::processEvents()
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
    player.update(dt);
}

void Engine::render()
{
    window.clear();
    player.render(window);
    window.display();
}