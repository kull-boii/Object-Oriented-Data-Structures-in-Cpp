#include <iostream>
using namespace std;

void func()
{
    int b;
    cout << "The address of b is : " << &b << endl;

    return;
}

int main()
{
    // whenever we declare a variable, the highest possible memory is assign to it
    // this goes on
    /*
        eg : if we declare int a first then we declare int b
        you would notice a has higher memory value than b
        memory value means memory adress (hexadecimal no)
        so tha llocation begins from the top of the stack memory
        and goes until the memory reaches 0x00 that is zero memory or no memory left
    */
    int a, c = 10;
    cout << "The address of a is : " << &a << endl;
    // The stack begins at a high memory address and works its way down, whereas 
    // the heap begins at a low memory address and works its way up.

    func();

    return 0;
}
