#ifndef MAZEFACTORY_H
#define MAZEFACTORY_H

#include <Maze.h>
#include <Wall.h>
#include <Door.h>

class MazeFactory
{
public:
    static MazeFactory* instance();
    MazeFactory(MazeFactory &other) = delete;
    void operator=(const MazeFactory &) = delete;

    virtual Maze* makeMaze() const;
    virtual Wall* makeWall() const;
    virtual Room* makeRoom(int n) const;
    virtual Door* makeDoor(Room* r1, Room* r2);
protected:
    MazeFactory();
private:
    static MazeFactory *_instance;
};

#endif // MAZEFACTORY_H
