#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "nyanhack");
    window.setVerticalSyncEnabled(true); // prevent graphics tearing

    // window loop
    while (window.isOpen())
    {
        sf::Event event;
        // while there are pending events...
        while (window.pollEvent(event))
        {
            // check the type of the event...
            switch (event.type)
            {
                // window closed
                case sf::Event::Closed:
                    window.close();
                    break;

                // window lost focus
                case sf::Event::LostFocus:
                    break;

                // window gain focus
                case sf::Event::GainedFocus:
                    break;

                // key press event
                case sf::Event::KeyPressed:
                    // if key pressed is escape
                    if (event.key.code == sf::Keyboard::Escape)
                    {
                        std::cout << "the escape key was pressed" << std::endl;
                        std::cout << "control:" << event.key.control << std::endl;
                        std::cout << "alt:" << event.key.alt << std::endl;
                        std::cout << "shift:" << event.key.shift << std::endl;
                        std::cout << "system:" << event.key.system << std::endl;
                    }
                    break;

                // mouse wheel event
                case sf::Event::MouseWheelMoved:
                    std::cout << "wheel movement: " << event.mouseWheel.delta << std::endl;
                    std::cout << "mouse x: " << event.mouseWheel.x << std::endl;
                    std::cout << "mouse y: " << event.mouseWheel.y << std::endl;
                    break;

                // mouse buttons pressed event
                case sf::Event::MouseButtonPressed:
                    if (event.mouseButton.button == sf::Mouse::Right)
                    {
                        std::cout << "the right button was pressed" << std::endl;
                        std::cout << "mouse x: " << event.mouseButton.x << std::endl;
                        std::cout << "mouse y: " << event.mouseButton.y << std::endl;
                    }
                    if (event.mouseButton.button == sf::Mouse::Left)
                    {
                        std::cout << "the left button was pressed" << std::endl;
                        std::cout << "mouse x: " << event.mouseButton.x << std::endl;
                        std::cout << "mouse y: " << event.mouseButton.y << std::endl;
                    }
                    break;

                // mouse buttons released event
                case sf::Event::MouseButtonReleased:
                    if (event.mouseButton.button == sf::Mouse::Right)
                    {
                        std::cout << "the right button was released" << std::endl;
                        std::cout << "mouse x: " << event.mouseButton.x << std::endl;
                        std::cout << "mouse y: " << event.mouseButton.y << std::endl;
                    }
                    if (event.mouseButton.button == sf::Mouse::Left)
                    {
                        std::cout << "the left button was released" << std::endl;
                        std::cout << "mouse x: " << event.mouseButton.x << std::endl;
                        std::cout << "mouse y: " << event.mouseButton.y << std::endl;
                    }
                    break;

                // mouse entered window event
                case sf::Event::MouseEntered:
                    std::cout << "the mouse cursor has entered the window" << std::endl;
                    break;

                // mouse left window event
                case sf::Event::MouseLeft:
                    std::cout << "the mouse cursor has left the window" << std::endl;
                    break;

                // we don't process other types of events
                default:
                    break;
                }
        }

    }

    return 0;
}
