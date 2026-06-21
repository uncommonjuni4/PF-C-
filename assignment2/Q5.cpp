#include <iostream>
using namespace std;

int main() {
    int originalArray[6] = {1, 2, 2, 3, 4, 4};
    int newArray[6];
    int newSize = 0; 

    for (int i = 0; i < 6; i++) {
        bool isDuplicate = false;

        
        for (int j = 0; j < newSize; j++) {
            if (originalArray[i] == newArray[j]) {
                isDuplicate = true;
                break;
            }
        }

       
        if (!isDuplicate) {
            newArray[newSize] = originalArray[i];
            newSize++;
        }
    }

  
    cout << "Array without duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << newArray[i] << " ";
    }
    cout << endl;

    return 0;
}