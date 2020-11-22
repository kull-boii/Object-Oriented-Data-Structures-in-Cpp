/**
 * Simple C++ class for representing a Cube.
 *
 * @author
 *   Aadi Manchekar
 */

// All header (.h) files start with "#pragma once":
#pragma once

// including in a namespace
namespace user_defined
{

    class Cube
    {
    private:
        double length_;

    public:
        void setLength(double length);
        double getSurfaceArea();
        double getVolume();
    };
} // namespace user_define