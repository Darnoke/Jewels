#ifndef OBJECT_HPP
#define OBJECT_HPP

#include "pch.hpp"

class Object
{
    //This is virtual class - DON'T USE IT!
    //Inheritance only!
    
public:

    Object();
    virtual ~Object();

    virtual void draw(sf::RenderWindow* window) = 0;
    virtual bool contain(sf::Vector2f mousePos) = 0;
    virtual void move(sf::Vector2f moveVector) = 0;
    virtual void setPosition(sf::Vector2f position) = 0;
    virtual bool isSelectable() = 0;

};


#endif /*OBJECT_HPP*/