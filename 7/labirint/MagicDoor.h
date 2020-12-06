#ifndef MAGICDOOR_H
#define MAGICDOOR_H

#include <Door.h>

class MagicDoor : public Door
{
public:
    MagicDoor(Room * room1 = 0, Room * room2 = 0, bool isOpen = true);
    Door * clone() override;
    void initialize(Room * room1 = 0, Room * room2 = 0, bool isOpen = true) override;

};

#endif // MAGICDOOR_H
