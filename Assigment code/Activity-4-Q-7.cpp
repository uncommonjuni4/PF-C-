#include <iostream>

using namespace std;

int main() {
    // Declare variables for distance in KM and Miles
    double kilometers, miles;
    const double CONVERSION_FACTOR = 0.621371;

    // Prompt user for input in kilometers
    cout << "Enter the distance in kilometers: ";
    cin >> kilometers;

    // Calculate miles: Kilometers * 0.621371
    miles = kilometers * CONVERSION_FACTOR;

    // Display the result
    cout << kilometers << " kilometers is equal to " << miles << " miles." << endl;

    return 0;
}
