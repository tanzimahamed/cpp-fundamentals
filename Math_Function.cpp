#include <iostream>  // For input/output operations (cin, cout)
#include <cmath>     // For mathematical functions like sqrt, pow, sin, etc.
using namespace std;

int main() {
    double num = -9.7;  // Declare a double variable with value -9.7

    // abs(x) returns the absolute value of x
    cout << "Absolute: " << abs(num) << endl;  // Output: 9.7

    // sqrt(x) returns the square root of x
    cout << "Square root of 16: " << sqrt(16) << endl;  // Output: 4

    // pow(x, y) returns x raised to the power y
    cout << "2^3 = " << pow(2, 3) << endl;  // Output: 8

    // ceil(x) returns the smallest integer greater than or equal to x
    cout << "Ceil: " << ceil(num) << endl;  // Output: -9

    // floor(x) returns the largest integer less than or equal to x
    cout << "Floor: " << floor(num) << endl;  // Output: -10

    // round(x) rounds x to the nearest integer
    cout << "Round: " << round(num) << endl;  // Output: -10

    // sin(x) returns the sine of x (x is in radians)
    cout << "sin(90° in rad) = " << sin(3.14159/2) << endl;  // Output: ~1

    return 0;  // End of program
}
