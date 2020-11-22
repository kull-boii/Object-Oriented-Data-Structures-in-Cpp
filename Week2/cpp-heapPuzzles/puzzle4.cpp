/**
 * C++ puzzle program.  Try to figure out the result before running!
 *
 * @author
 *   Aadi Manchekar
 */

#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int *x;
    int size = 3;
    x = new int[size];

    for (int i = 0; i < size; i++)
    {
        x[i] = i + 3;
    }

    delete[] x; // this is how we deallocate an array stored in heap memory
    x = nullptr;
}
