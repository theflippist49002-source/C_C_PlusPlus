#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int* ptr = &a;

    void *ptr1; // Creating a void pointer

    ptr1 = &a;

    cout << (int*)ptr1 << endl;     // Typecasting the void pointer to int

    int arr[] = {5,6,4,46,22,1,31};

    cout << ptr << endl;        //Printing the pointer (assigned address)
    cout << sizeof(ptr) << " bytes" << endl;
    cout << sizeof(&a) << " bytes" << endl;
    cout << &a << endl;         //Printing the address of a
    cout << *ptr << endl;       //Dereferencing the pointer

    // Printing the elements of an array
    for (int const num : arr)
        cout << num << " ";
    return 0;

}