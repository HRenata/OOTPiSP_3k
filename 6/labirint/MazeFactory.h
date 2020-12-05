#ifndef MAZEFACTORY_H
#define MAZEFACTORY_H

#include <Maze.h>
#include <Wall.h>
#include <Door.h>

class MazeFactory
{
public:
    MazeFactory();
    virtual Maze* makeMaze() const;
    virtual Wall* makeWall() const;
    virtual Room* makeRoom(int n) const;
    virtual Door* makeDoor(Room* r1, Room* r2);
};

#endif // MAZEFACTORY_H
