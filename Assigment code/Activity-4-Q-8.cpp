#include <iostream>

using namespace std;

int main() {
    int a, b;

    // Input two numbers
    cout << "Enter the first number (a): ";
    cin >> a;
    cout << "Enter the second number (b): ";
    cin >> b;

    cout << "\nBefore swapping: a = " << a << ", b = " << b << endl;

    // Swapping logic using addition and subtraction
    a = a + b; // Step 1: 'a' now holds the sum of both
    b = a - b; // Step 2: (sum - original b) gives original 'a', stored in 'b'
    a = a - b; // Step 3: (sum - new b) gives original 'b', stored in 'a'

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
