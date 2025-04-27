// Name: Mir Abdullah
// Program: Check if number is Positive, Negative, or Zero

#include<iostream>
using namespace std;

int main() {
    int num; // Variable to store the number
    cout << "Enter a number: ";
    cin >> num; // Taking input

    // Using if-else to check the number
    if (num > 0) {
        cout << "The number is Positive." << endl;
    }
    else if (num < 0) {
        cout << "The number is Negative." << endl;
    }
    else {
        cout << "The number is Zero." << endl;
    }

    return 0;
}
