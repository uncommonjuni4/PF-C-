#include <iostream>
using namespace std;

// Simple functions for each math operation
void add() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Answer = " << a + b << endl;
}

void subtract() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Answer = " << a - b << endl;
}

void multiply() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Answer = " << a * b << endl;
}

void divide() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b == 0) {
        cout << "Cannot divide by zero!" << endl;
    } else {
        cout << "Answer = " << a / b << endl;
    }
}

int main() {
    int choice;

    cout << "--- MENU ---" << endl;
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1: add(); break;
        case 2: subtract(); break;
        case 3: multiply(); break;
        case 4: divide(); break;
        default: cout << "Invalid choice!" << endl;
    }

    return 0;
}