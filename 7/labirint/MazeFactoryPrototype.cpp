#include "MazeFactoryPrototype.h"

MazeFactoryPrototype::MazeFactoryPrototype(Maze *maze, Wall *wall, Room *room, Door *door)
{
    this->_prototypeMaze = maze;
    this->_prototypeWall = wall;
    this->_prototypeRoom = room;
    this->_prototypeDoor = door;
}


Maze * MazeFactoryPrototype::MakeMaze() const
{

}

Room *  MazeFactoryPrototype::MakeRoom(int n) const
{
    return this->_prototypeRoom->clone();
}

Wall * MazeFactoryPrototype::MakeWall() const
{
    return this->_prototypeWall->clone();
}

Door * MazeFactoryPrototype::MakeDoor(Room *r1, Room *r2) const
{
    Door*  door  = this->_prototypeDoor->clone();
    door->initialize(r1,  r2) ;
    return door;

}
