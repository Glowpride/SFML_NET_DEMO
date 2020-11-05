#include <SFML/Graphics.hpp>


int main(int argc, char const *argv[])
{
    sf::RenderWindow window(sf::VideoMode(800,600),"Spooky action at a distance");
    sf::CircleShape shape(50.f);
    sf::RectangleShape shape2(sf::Vector2f(100.f,100.f));
    shape.setPosition(400,300);
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(shape);
        window.draw(shape2);
        window.display();

    }
    return 0;
}
