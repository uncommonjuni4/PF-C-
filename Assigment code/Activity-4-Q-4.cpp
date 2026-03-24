#include <iostream>

using namespace std;

int main() {
    // Declare variables for input and the result
    double P, R, T, SI;

    // Get input for Principal, Rate, and Time
    cout << "Enter Principal amount (P): ";
    cin >> P;
    
    cout << "Enter Rate of interest (R%): ";
    cin >> R;
    
    cout << "Enter Time in years (T): ";
    cin >> T;

    // Calculate Simple Interest: SI = (P * R * T) / 100
    SI = (P * R * T) / 100;

    // Display the result
    cout << "The Simple Interest is: " << SI << endl;
    cout << "Total amount (Principal + SI): " << (P + SI) << endl;

    return 0;
}
