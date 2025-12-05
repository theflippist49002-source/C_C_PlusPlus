
#include <iostream>
using namespace std;

int main(){
    cout <<"Hello World\t";
    cout <<"Hello World";

    const int number = 45;
    cout << "\nThe number is "<< number << endl;    //"endl" -> for new line

    return 0;
}
/*  cout.put(char)	            Writes a single character to the output stream.
    cout.write(char*, int)	    Writes a block of characters from the array to the output stream.
    cout.precision(int)	        Sets the decimal precision for displaying floating-point numbers.
    cout.setf(ios::fmtflags)	Sets the format flags for the stream.
    cout.width(int)	            Sets the minimum field width for the next output.
    cout.fill(char)	            Sets the fill character for padding the field.
 */