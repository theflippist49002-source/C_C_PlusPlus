/* Scope Resolution Operator (::) */
#include <iostream>


int var = 4; //GLOBAL VARIABLE (same name)

class A
{
    public:
        static int x; //Static member
    void fun();
};

void A::fun() //Referring the function inside-of the class from outside ,using "::"
{
    std :: cout << "Function called" << std :: endl;
}

int A::x = 24; // MUST Define static members explicitly

int main()
{

    A var1; // Function Variable

    int var =  8; //LOCAL VARIABLE (same name)

    std :: cout << "Hello World!\n";
    std :: cout <<var << std :: endl;  // This prints the LOCAL VARIABLE
    std :: cout  << ::var << std :: endl;   // This prints the GLOBAL VARIABLE

    var1.fun();
    std :: cout << A::x << std :: endl; // Accessing static data member
    return 0;
}