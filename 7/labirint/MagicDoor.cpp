#include "MagicDoor.h"
#include <iostream>

MagicDoor::MagicDoor(Room * room1, Room * room2, bool isOpen) :
    Door(room1, room2, isOpen)
{
    std::cout << "magic" << std::endl;
}

Door * MagicDoor::clone()
{
    return new MagicDoor(*this);
}

void MagicDoor::initialize(Room * room1, Room * room2, bool isOpen)
{
    this->_room1 = room1;
    this->_room2 = room2;
    this->_isOpen = isOpen;
}
