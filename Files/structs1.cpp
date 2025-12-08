/* Structures in C++ */

#include <iostream>
using namespace std;

struct Point
{
    int x = 0;
    int y = 0;
};

int main()
{
    Point p;        // Creating a structure variable

    p.x=54;         //Modifying variable members

    Point p1{.x=45,.y=99}; // Creating a structure variable with initial values

    Point p2 = {48,16}; // Creating a structure variable with initial values

    cout << p2.y << endl;

    cout << p.x << endl;
    cout << p.y << endl;
    return 0;
}
