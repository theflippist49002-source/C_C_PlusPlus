/* References in C++ */

#include <iostream>
using namespace std;

int main()
{
    int x = 64;
    int &y = x;     //Creating a reference to a variable.
                    //Making an alias for the variable

    cout << y << endl;
}