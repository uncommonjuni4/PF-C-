#include <iostream>
#include <cmath> // Included for the pow() function

using namespace std;

int main() {
    // Declare variables for coefficients, x, and the final result
    double a, b, c, x, result;

    // Get inputs for coefficients a, b, and c
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    // Get the value of x to evaluate
    cout << "Enter the value of x: ";
    cin >> x;

    // Calculate: ax^2 + bx + c
    // We use (a * x * x) for x squared
    result = (a * x * x) + (b * x) + c;

    // Display the result
    cout << "\nFor x = " << x << ", the value of " << a << "x^2 + " << b << "x + " << c << " is: " << result << endl;

    return 0;
}
