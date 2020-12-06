#include "OrdinaryRoom.h"
#include <iostream>

OrdinaryRoom::OrdinaryRoom(int roomNo) : Room(roomNo)
{
    std::cout << "ordinary" << std::endl;
}

void OrdinaryRoom::enter()
{
    std::cout << "step in ordinary room" << std::endl;
}

Room * OrdinaryRoom::clone()
{
    return new OrdinaryRoom(*this);
}
