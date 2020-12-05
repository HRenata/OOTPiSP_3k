#include "OrdinaryDoor.h"
#include <iostream>

OrdinaryDoor::OrdinaryDoor(Room * room1, Room * room2, bool isOpen) :
    Door(room1, room2, isOpen)
{
    std::cout << "ordinary" << std::endl;
}

Door * OrdinaryDoor::clone()
{
    return new OrdinaryDoor(*this);
}

void OrdinaryDoor::initialize(Room * room1, Room * room2, bool isOpen)
{
    this->_room1 = room1;
    this->_room2 = room2;
    this->_isOpen = isOpen;
}
