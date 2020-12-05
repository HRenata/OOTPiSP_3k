#ifndef MAZEGAME_H
#define MAZEGAME_H

#include <MazeFactory.h>
#include <Maze.h>

class MazeGame
{
public:
    MazeGame();
    Maze * createMaze(MazeFactory &factory);
};

#endif // MAZEGAME_H
