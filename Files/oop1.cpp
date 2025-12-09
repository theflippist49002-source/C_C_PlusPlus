/* Object-Oriented Programming in C++ */

#include <iostream>
using namespace std;

int main()
{
    class Student
    {
        public:
        //Data Members
            int ID;
            string Name;

        //Member function
            void show()
            {
                cout<<"Student ID = "<<ID<<endl;
                return;
            }
    };
}