#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

class Game
{
    public:
        Game(sf::RenderWindow*);
        virtual ~Game();

        void draw();
    protected:
    private:
        sf::RenderWindow* renderWindow;
};

#endif // GAME_H
