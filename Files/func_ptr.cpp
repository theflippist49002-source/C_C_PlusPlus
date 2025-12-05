/* Function Pointers in C++*/\

#include <iostream>
using namespace std;
int add(int a ,int b);
int main()
{
    int val = 56 ;
    int *ptr = &val;

    int (*fun)(int ,int);       //Declaring a function pointer
    fun = add;

    auto funPtr = add; // SAME AS THE LINE NO 11 & 12 (Declaring a funcion pointer)

    cout << funPtr << endl;         //Function_Name simply give the address of it

    cout << "address of pointer : "<< ptr << endl;
    cout << "Dereferencing the pointer : " << *ptr << endl;

    int num1,num2;
    cout << "Enter number 1: "<< " ";
    cin >> num1;
    cout << "Enter number 2: "<< " ";
    cin >> num2;

    printf("Sum is : %d\n",fun(num1,num2));

    return 0;

}
int add(int a, int b )
{
    int sum = a+b ;
    return sum;
}
