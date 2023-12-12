//
// Created by ASUS on 10/12/2023.
//

#ifndef ANALOG_DIGITAL_CLOCK_STICK_H
#define ANALOG_DIGITAL_CLOCK_STICK_H

#include <SFML/Graphics.hpp>

class Stick : public sf::Drawable
{

public:
    Stick(sf::Vector2f size);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void move();
    void setPositionStick(sf::Vector2f position);
private:
    sf::RectangleShape stick;
};


#endif //ANALOG_DIGITAL_CLOCK_STICK_H
