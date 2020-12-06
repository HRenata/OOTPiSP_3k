#ifndef ORDINARYMAZEFACTORY_H
#define ORDINARYMAZEFACTORY_H

#include <MazeFactory.h>

class OrdinaryMazeFactory : public MazeFactory
{
public:
    OrdinaryMazeFactory();
    Room * makeRoom(int n) const override;
    Door * makeDoor(Room *r1, Room *r2) override;
};

#endif // ORDINARYMAZEFACTORY_H
