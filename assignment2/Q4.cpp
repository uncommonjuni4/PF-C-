#include <iostream>
using namespace std;

int main() {
    int arr[5] = {12, 45, 7, 23, 9};
    int target;
    bool found = false;

    cout << "Enter the number you want to find: ";
    cin >> target;

   
    for (int i = 0; i < 5; i++) {
        if (arr[i] == target) {
            cout << "Found at position/index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Number is not in the array." << endl;
    }

    return 0;
}