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

    /*
        if we omit using namespace user_defined then
        we have to write user_defined::Cube c; instaed of Cube c;

        just like using namespace std
        std::cout and cout
    */
    /*
    Run it by typing : make (or mingw32-make or msys-make)
    if you will change the name of main.cpp then also change the makefile

        to install make:
        You have to install mingw-get and after that you can run
        1] mingw-get install msys-make
        2] in console type make (or msys-make or mingw32-make)
        step 2 depends on your compiler

        Resources :
        1] https://stackoverflow.com/questions/36770716/mingw64-make-build-error-bash-make-command-not-found
        2] https://github.com/jandecaluwe/urubu/issues/52
    */
    c.setLength(3);

    cout << "The surface area is " << c.getSurfaceArea() << " m^2" << endl;

    const double volume = c.getVolume();
    cout << "The Volume is " << volume << " m^3" << endl;

    return 0;
}
