#include <iostream>

using namespace std;

int main() {
    // Declare variables for dimensions and results
    double base, height, side1, side2, side3;
    double area, perimeter;

    // Get input for Area calculation
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Get input for Perimeter calculation (side1, side2, side3)
    cout << "Enter the lengths of the three sides (side1 side2 side3): ";
    cin >> side1 >> side2 >> side3;

    // Calculate Area: 0.5 * base * height
    area = 0.5 * base * height;

    // Calculate Perimeter: side1 + side2 + side3
    perimeter = side1 + side2 + side3;

    // Display the results
    cout << "\n--- Results ---" << endl;
    cout << "Area of the triangle: " << area << endl;
    cout << "Perimeter of the triangle: " << perimeter << endl;

    return 0;
}
