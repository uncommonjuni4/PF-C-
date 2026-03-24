#include <iostream>

using namespace std;

int main() {
    // Declare variables for the three numbers and the average
    double num1, num2, num3, average;

    // Get input for three numbers
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << "Enter the second number: ";
    cin >> num2;
    
    cout << "Enter the third number: ";
    cin >> num3;

    // Calculate the average: (Sum of numbers) / 3
    average = (num1 + num2 + num3) / 3;

    // Display the result
    cout << "The average of the three numbers is: " << average << endl;

    return 0;
}
