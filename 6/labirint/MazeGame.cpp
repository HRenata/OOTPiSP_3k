#include "MazeGame.h"
#include "Room.h"
#include "Door.h"
#include "Wall.h"

MazeGame::MazeGame()
{

}

Maze * MazeGame::createMaze(MazeFactory &factory)
{
    Maze * aMaze = factory.makeMaze();
    Room* r1 = factory.makeRoom(1);
    Room* r2 = factory.makeRoom(2);
    Door* aDoor = factory.makeDoor(r1,   r2);

    aMaze->addRoom(r1);
    aMaze->addRoom(r1);

    r1->setSide(North, factory.makeWall());
    r1->setSide(East, aDoor);
    r1->setSide(South, factory.makeWall());
    r1->setSide(West, factory.makeWall());

    r2->setSide(North, factory.makeWall());
    r2->setSide(East, factory.makeWall());
    r2->setSide (South, factory.makeWall());
    r2->setSide(West, aDoor);

    return  aMaze;
}
