/* Pass Array to Function */
#include <iostream>
using namespace std;

// Function that takes array as argument
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() {
    int arr[] = {2, 4, 8, 12, 16};

    //Calculating the size of the array
    int number = sizeof(arr) / sizeof(arr[0]);

    // Passing array
    printArray(arr, number);
    return 0;
}