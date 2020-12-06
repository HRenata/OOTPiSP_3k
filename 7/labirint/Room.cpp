#include "Room.h"
#include <iostream>

Room::Room(int roomNo)
{
    this->_rbomNumber = roomNo;
    std::cout << "create room" << std::endl;
}

MapSite * Room::getSide(Direction direction) const
{
    return this->_sides[direction];
}

void Room::setSide(Direction direction, MapSite * mapSite)
{
    this->_sides[direction] = mapSite;
}

void Room::enter()
{
    std::cout << "step in room" << std::endl;
}

Room * Room::clone()
{
    return new Room(*this);
}
