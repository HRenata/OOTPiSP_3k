#ifndef ORDINARYDOOR_H
#define ORDINARYDOOR_H

#include <Door.h>

class OrdinaryDoor : public Door
{
public:
    OrdinaryDoor(Room * room1 = 0, Room * room2 = 0, bool isOpen = true);
    Door * clone() override;
    void initialize(Room * room1 = 0, Room * room2 = 0, bool isOpen = true) override;
};

#endif // ORDINARYDOOR_H
