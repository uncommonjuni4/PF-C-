#include <iostream>

using namespace std;

int main() {
    // Declare variables
    double side, area, perimeter;

    // Get the side length from the user
    cout << "Enter the side length of the square: ";
    cin >> side;

    // Calculate Area: side * side
    area = side * side;

    // Calculate Perimeter: 4 * side
    perimeter = 4 * side;

    // Display the results
    cout << "\n--- Square Results ---" << endl;
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}
