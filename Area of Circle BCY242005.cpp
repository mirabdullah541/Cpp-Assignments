// Name: Mir Abdullah
// Program: Calculate Area of Circle using function

#include<iostream>
using namespace std;

// Function to calculate area of a circle
float areaOfCircle(float radius) {
    return 3.14159 * radius * radius; // Area formula
}

int main() {
    float r; // Variable to store radius
    cout << "Enter radius of circle: ";
    cin >> r; // Taking input

    // Calling function and displaying result
    cout << "Area of the circle is: " << areaOfCircle(r) << endl;
    return 0;
}
