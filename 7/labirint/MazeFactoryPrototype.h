#ifndef MAZEFACTORYPROTOTYPE_H
#define MAZEFACTORYPROTOTYPE_H

#include <MazeFactory.h>
#include <Maze.h>
#include <Door.h>
#include <Room.h>
#include <Wall.h>

class MazeFactoryPrototype : public MazeFactory
{
public:
    MazeFactoryPrototype(Maze *maze, Wall *wall, Room *room, Door *door);
    virtual Maze* MakeMaze() const;
    virtual  Room*  MakeRoom(int n) const;
    virtual Wall* MakeWall() const;
    virtual Door* MakeDoor(Room *r1, Room *r2) const;
private:
    Maze* _prototypeMaze;
    Room* _prototypeRoom;
    Wall* _prototypeWall;
    Door* _prototypeDoor;
};

#endif // MAZEFACTORYPROTOTYPE_H
