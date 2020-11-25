#include <iostream>
#include "Cube.h"

/*
 you shouldn't use #include to literally include one cpp file in another!
 There is no need to write #include "Cube.cpp" because the function
 definitions in the Cube.cpp file will be compiled separately and then
 linked to the code from the main.cpp file.
*/

using namespace std;
using namespace user_defined;

#define endl '\n'

int main()
{
    // creating a cube
    Cube c;

    // we wont set the length
    // thus it will take its deafult length i.e 1

    cout << "The surface area is " << c.getSurfaceArea() << " m^2" << endl;

    const double volume = c.getVolume();
    cout << "The Volume is " << volume << " m^3" << endl;

    return 0;
}
