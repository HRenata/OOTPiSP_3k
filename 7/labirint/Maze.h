#ifndef MAZE_H
#define MAZE_H

#include <Room.h>

class Maze
{
public:
    Maze();
    void addRoom(Room *room);
    virtual Maze * clone();
};


#endif // MAZE_H
