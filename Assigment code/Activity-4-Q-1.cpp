#include <iostream>

using namespace std;

int main() {
    // Declare variables
    float radius, area;
    

    // Prompt user for input
    cout << "Enter the radius of the circle: ";
    cin >> radius;
 
    // Calculate area using the formula: Area = PI * r * r
    area = 3.14* radius * radius;

    // Display the result
    cout << "The area of the circle is: " << area << endl;

    return 0;
}
