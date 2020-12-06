#ifndef MAGICROOM_H
#define MAGICROOM_H

#include <Room.h>

class MagicRoom : public Room
{
public:
    MagicRoom(int roomNo);
    void enter() override;
    Room * clone() override;
};

#endif // MAGICROOM_H
