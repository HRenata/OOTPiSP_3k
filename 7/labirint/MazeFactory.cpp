#include <MazeFactory.h>
#include <OrdinaryMazeFactory.h>
#include <MagicMazeFactory.h>
#include <iostream>
#include <string.h>

MazeFactory* MazeFactory::_instance = 0;

MazeFactory* MazeFactory::instance()
{
    const char* mazeStyle = getenv("MAZESTYLE");
    if (strcmp(mazeStyle, "ordinary") == 0)
    {
        _instance = new OrdinaryMazeFactory();
    }
    else if (strcmp(mazeStyle, "enchanted") == 0)
    {
        _instance = new MagicMazeFactory();
    }
    else
    {
        _instance = new MazeFactory;
    }

    return _instance;
}


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
