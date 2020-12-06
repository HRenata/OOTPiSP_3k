#ifndef ORDINARYROOM_H
#define ORDINARYROOM_H

#include <Room.h>

class OrdinaryRoom : public Room
{
public:
    OrdinaryRoom(int roomNo);
    void enter() override;
    Room * clone() override;
};

#endif // ORDINARYROOM_H
