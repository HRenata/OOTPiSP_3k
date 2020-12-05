#ifndef MAGICMAZEFACTORY_H
#define MAGICMAZEFACTORY_H

#include <MazeFactory.h>

class MagicMazeFactory : public MazeFactory
{
public:
    MagicMazeFactory();
    Room * makeRoom(int n) const override;
    Door * makeDoor(Room *r1, Room *r2) override;
};

#endif // MAGICMAZEFACTORY_H
