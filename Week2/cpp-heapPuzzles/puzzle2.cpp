/**
 * C++ puzzle program.
 *
 * @author
 *   Aadi Manchekar
 */

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int *x = new int; // we create a int block of memory in heap
    // so if we want to change the value in heap without using ptr x
    // we couldn't do it thus we need to create an Alias
    int &y = *x; // creating a alias
    y = 4;

    cout << &x << endl;
    cout << x << endl;
    cout << *x << endl;

    cout << &y << endl;
    cout << y << endl;
    // cout << *y << endl; // uncommenting this will result into errors as we have
    // created an int and not a pointer, we can only derefernce a pointer

    return 0;
}
