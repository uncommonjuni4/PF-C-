#include <iostream>

using namespace std;

int main() {
    // Declare variables for dimensions and result
    double length, width, perimeter;

    // Get inputs from the user
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Calculate perimeter: 2 * (length + width)
    perimeter = 2 * (length + width);

    // Output the result
    cout << "The perimeter of the rectangle is: " << perimeter << endl;

    return 0;
}
