#include <iostream>
#include <Wall.h>
#include <MazeGame.h>
#include <MagicDoor.h>
#include <MagicRoom.h>
#include <MazeFactoryPrototype.h>

int main()
{
    MazeGame game;
    MazeFactoryPrototype factory(new Maze(), new Wall(), new MagicRoom(1), new MagicDoor());
    game.createMaze(factory);

    return 0;
}
