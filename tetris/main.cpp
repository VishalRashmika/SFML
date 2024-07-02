#include <SFML/Graphics.hpp>
#include <time.h>

const int M = 20;
const int N = 10;

int field[M][N] = {0};

int figures[7][4] ={
    1,3,5,7,
    2,4,5,7,
    3,5,4,6,
    3,5,4,7,
    2,3,5,7,
    3,5,7,6,
    2,3,4,5,
};

int main()
{
    sf::RenderWindow window(sf::VideoMode(320, 480), "Tetris!!");

    //single tile = 18x18
    sf::Texture t;
    t.loadFromFile("images/tiles.png");
    
    sf::Sprite s(t);
    s.setTextureRect(sf::IntRect(0,0,18,18));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);
        window.draw(s);
        window.display();
    }

    return 0;
}