#include "smileface.h"
#include <iostream>

SmileFace::SmileFace(Eyes *eyes, Ears *ears, Hair *hair, Mouse *mouse, Nose *nose)
{
    this->eyes = eyes;
    this->ears = ears;
    this->hair = hair;
    this->mouse = mouse;
    this->nose = nose;
}

void SmileFace::printFace()
{
    std::cout << "SMILE FACE" << std::endl;
    std::cout << "eyes: "  << this->eyes->getEyesColor() << std::endl;
    std::cout << "ears: "  << this->ears->getEarsForm() << std::endl;
    std::cout << "hair: "  << this->hair->getHaircut() << std::endl;
    std::cout << "nose: "  << this->nose->getNoseForm() << std::endl;
    std::cout << "mouse: "  << this->mouse->getMouseForm() << std::endl;
}
