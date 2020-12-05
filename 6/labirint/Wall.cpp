#include "Wall.h"
#include <iostream>

Wall::Wall()
{
    std::cout << "create wall" << std::endl;
}

void Wall::enter()
{
    std::cout << "bam! wall" << std::endl;
}

Wall * Wall::clone()
{
    return new Wall(*this);
}
