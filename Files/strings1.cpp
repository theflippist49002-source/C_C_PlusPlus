/* Strings in C++ */

#include <iostream>
using namespace std;

int main()
{
    //Initialize a string
    string str1;
    string str2 = "Hello";
    cout << "Enter a Name : " ;
    cin >> str1;

    cout << str2[3] << " " << str2.at(4) << endl;       // Accessing the string characters
                                                        //Using [] Operator OR " .at() " Function
    cout << str2 << " " << str1 << endl;

    //To find the length of a string  --> .length()  OR .size()
    cout << "Length of str1 " <<str1.length() << " Length of str2 " << str2.size() << endl;

    //Concatenation of strings
    string result1 = str2 + str1;               // Using " + " operator for combining strings
    string result2 = str2.append(str1);     // Using .append() Function

    cout << result1 << endl;
    cout << result2 << endl;

    return 0;
}