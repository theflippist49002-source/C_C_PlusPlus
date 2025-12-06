#include <iostream>
using namespace std;

int main()
{
    string str1 = "Hello World";

    //Modifying a string

    str1.push_back('!');    //insert characters at the back off a string
    cout << str1 << endl;

    str1.pop_back();        //poping last character from a string
    cout << str1 << endl;

    str1.insert(0, " --!-- ");  //inserting string from a specific position
    cout << str1 << endl;

    str1.erase(0,3);            //removing string from a specific position with the number of characters to be removed
                                    // .erase() --> erase the whole string  OR  .erase(pos) --> erase the string from that position
    cout << str1 << endl;

    //substring extraction - Getting a sub-string from the given string
    string str2= str1.substr(0,4);          //using .substr(pos,len)  |[ pos -> starting position , len -> no of characters ]|
    cout << str2 << endl;

    string str3= str1.substr(4,11);
    cout << str3 << endl;

}