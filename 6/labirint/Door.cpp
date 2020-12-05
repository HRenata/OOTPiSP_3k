#include "Door.h"
#include <iostream>

Door::Door(Room * room1, Room * room2, bool isOpen)
{
    this->_room1 = room1;
    this->_room2 = room2;
    this->_isOpen = isOpen;
    std::cout << "create door" << std::endl;
}

void Door::enter()
{
    if(this->_isOpen)
    {
        std::cout << "go throw open door" << std::endl;
    }
    else
    {
        std::cout << "bam! closed door" << std::endl;
    }
}

Room * Door::otherSideFrom(Room * room)
{
    if (this->_room1 == room)
    {
        return this->_room1;
    }
    return this->_room2;
}

Door * Door::clone()
{
    return new Door(*this);
}

void Door::initialize(Room * room1, Room * room2, bool isOpen)
{
    this->_room1 = room1;
    this->_room2 = room2;
    this->_isOpen = isOpen;
}

