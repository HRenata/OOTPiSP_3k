#include "OrdinaryMazeFactory.h"
#include "OrdinaryDoor.h"
#include "OrdinaryRoom.h"
#include <iostream>

OrdinaryMazeFactory::OrdinaryMazeFactory()
{
    std::cout << "ordinary" << std::endl;
}

Room* OrdinaryMazeFactory::makeRoom(int n) const
{
    return new OrdinaryRoom(n);
}

Door* OrdinaryMazeFactory::makeDoor(Room* r1, Room* r2)
{
    return new OrdinaryDoor(r1, r2);
}
