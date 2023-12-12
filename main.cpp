#include "Ball.h"
#include "Stick.h"

int main() {
    srand(time(0));
    sf::RenderWindow window({720, 420, 32}, "Bouncing Ball");
    window.setFramerateLimit(60);


    Ball ball;
    ball.setRadius(20.f);
    ball.setBounds(window.getSize());

    while (window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        //bounce along the boundaries of the window, change the color each time it reaches the bounds



        ball.bounce();
        window.clear(sf::Color::White);
        window.draw(ball);

        window.display();
    }
    return 0;
}
