//
// Created by ASUS on 10/12/2023.
//

#include "Stick.h"

Stick::Stick(sf::Vector2f size)
{
    stick.setSize(size);
    stick.setFillColor(sf::Color::Black);
}

void Stick::draw(sf::RenderTarget& window, sf::RenderStates states) const
{

    // calculate difference between mouse pos and ant pos

    window.draw(stick);
}


//void Stick::move()
//{
//
//    float x = mouse.getPosition().x;
//    float y = mouse.getPosition().y;
//    stick.setPosition({x, y});
////    stick.move({x ,y});
//}

void Stick::setPositionStick(sf::Vector2f position)
{
    stick.setPosition(position);
}



