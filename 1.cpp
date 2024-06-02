#include <iostream>
using namespace std;

int main() {
    // Declare and initialize an array of integers
    int numbers[5] = {10, 20, 30, 40, 50};

    // Access and print each element of the array
    cout << "Initial array elements:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Element " << i << ": " << numbers[i] << endl;
    }

    // Modify an element in the array
    numbers[2] = 100; // Change the third element to 100

    // Print the modified array
    cout << "Modified array elements:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Element " << i << ": " << numbers[i] << endl;
    }

    // Input elements from the user
    cout << "Enter 5 new values for the array:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Element " << i << ": ";
        cin >> numbers[i];
    }

    // Print the array after user input
    cout << "Array elements after user input:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Element " << i << ": " << numbers[i] << endl;
    }

    // Find the sum of the array elements
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += numbers[i];
    }
    cout << "Sum of the array elements: " << sum << endl;

    // Find the maximum element in the array
    int maxElement = numbers[0];
    for (int i = 1; i < 5; ++i) {
        if (numbers[i] > maxElement) {
            maxElement = numbers[i];
        }
    }
    cout << "Maximum element in the array: " << maxElement << endl;

    return 0;
}

