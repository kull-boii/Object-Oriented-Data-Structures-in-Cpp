#include "Cube.h"

// defining in a namespace
namespace user_defined
{
    // default constructor
    Cube::Cube()
    {
        length_ = 1; // setting length to 1 in default constructor
    }

    // setting length of the cube
    void Cube::setLength(double l)
    {
        length_ = l;
    }

    // surface area 6l^2
    double Cube::getSurfaceArea()
    {
        return 6 * length_ * length_;
    }

    // volume l^3
    double Cube::getVolume()
    {
        return length_ * length_ * length_;
    }
} // namespace user_defined