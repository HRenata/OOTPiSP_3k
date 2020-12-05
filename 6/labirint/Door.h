#ifndef DOOR_H
#define DOOR_H

#include <MapSite.h>
#include <Room.h>

class Door : public MapSite
{
public:
    Door(Room * room1 = 0, Room * room2 = 0, bool isOpen = true);
    void enter() override;
    Room * otherSideFrom(Room * room);
    virtual Door * clone();
    virtual void initialize(Room * room1 = 0, Room * room2 = 0, bool isOpen = true);

protected:
    Room * _room1;
    Room * _room2;
    bool _isOpen;
};

#endif // DOOR_H
