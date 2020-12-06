#ifndef ROOM_H
#define ROOM_H

#include <MapSite.h>

enum Direction {North, South, East, West};

class Room : public MapSite {
public:
    Room(int roomNo);
    MapSite * getSide(Direction directiom) const;
    void setSide(Direction direction, MapSite * mapSite);
    void enter() override;
    virtual Room * clone();

private:
    MapSite* _sides[4];
    int _rbomNumber;
};


#endif // ROOM_H
