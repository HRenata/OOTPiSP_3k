#include "MagicRoom.h"
#include <iostream>

MagicRoom::MagicRoom(int roomNo) : Room(roomNo)
{
    std::cout << "magic" << std::endl;
}

void MagicRoom::enter()
{
    std::cout << "step in magic room" << std::endl;
}

Room * MagicRoom::clone()
{
    return new MagicRoom(*this);
}
