#include <MazeFactory.h>
#include <iostream>

MazeFactory::MazeFactory()
{
    std::cout << "create maze factory" << std::endl;
}

Maze* MazeFactory::makeMaze() const
{
    return new Maze();
}

Wall* MazeFactory::makeWall() const
{
    return new Wall();
}

Room* MazeFactory::makeRoom(int n) const
{
    return new Room(n);
}

Door* MazeFactory::makeDoor(Room* r1, Room* r2)
{
    return new Door(r1, r2);
}
