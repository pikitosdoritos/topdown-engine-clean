#include "Player.h"

Player::Player()
{
    shape.setSize({50.f, 50.f});
    shape.setFillColor(sf::Color::Green);
    shape.setPosition({100.f, 100.f});

    speed = 200.f;
}

void Player::update(float dt)
{
    sf::Vector2f movement(0.f, 0.f);

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
    {
        movement.y -= speed;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
    {
        movement.y += speed;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
    {
        movement.x -= speed;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
    {
        movement.x += speed;
    }

    shape.move(movement * dt);
}

void Player::render(sf::RenderWindow& window)
{
    window.draw(shape);
}