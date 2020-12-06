#include "MagicMazeFactory.h"
#include "MagicDoor.h"
#include "MagicRoom.h"
#include <iostream>

MagicMazeFactory::MagicMazeFactory()
{
    std::cout << "magic" << std::endl;
}

Room* MagicMazeFactory::makeRoom(int n) const
{
    return new MagicRoom(n);
}

Door* MagicMazeFactory::makeDoor(Room* r1, Room* r2)
{
    return new MagicDoor(r1, r2);
}
