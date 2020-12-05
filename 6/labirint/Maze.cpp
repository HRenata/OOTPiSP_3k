#include "Maze.h"
#include <iostream>

Maze::Maze()
{

}

void Maze::addRoom(Room *room)
{
    std::cout << "add room to maze" << std::endl;
}

Maze * Maze::clone()
{
    return new Maze(*this);
}
