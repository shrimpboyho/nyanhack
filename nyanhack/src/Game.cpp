#include "Game.h"
#include <SFML/Graphics.hpp>

Game::Game(sf::RenderWindow* renderWindowGiven)
{
    renderWindow = renderWindowGiven;
}

Game::~Game()
{
    //dtor
}

void Game::draw()
{
    // Clear screen, and fill it with blue
    renderWindow -> clear(sf::Color(0x00, 0x00, 0xff));

    // Display the content of the window on screen
    renderWindow -> display();
}
