/**
 * C++ program allocating and free'ing heap memory.
 *
 * @author
 *   Aadi Manchekar
 */

#include "Cube.h"
using namespace user_defined;

int main()
{
    int *p = new int;
    Cube *c = new Cube;

    *p = 42;
    (*c).setLength(4); // you could also do c->setLength(4);

    delete c;
    c = nullptr;

    delete p;
    p = nullptr;

    return 0;
}

/*
    Remember that after the line "delete c;" the pointer c still stores the
    address of the deleted variable,
    which is no longer valid to dereference
    and is therefore dangerous.The pointer won't be automatically set to nullptr.
     Then, you should manually set c to nullptr if you want to better protect against coding mistakes :

    delete c;
    c = nullptr;

    Also, this is a good practice in general whenever you use "delete" on a pointer,
    but in this particular example,
    the function that is about to return is "main".When main returns,
    the program exits and the operating system will usually release all the allocated memory back to the system.
    This isn't an excuse to be sloppy, though; as you will soon see,
    many class objects have their "destructor" functions called silently
    when the program exits, and mistakes can trigger crashes even during that process.
*/