#ifndef WALL_H
#define WALL_H

#include <MapSite.h>

class Wall : public MapSite
{
public:
    Wall();
    void enter() override;
    virtual Wall * clone();
};

#endif // WALL_H
