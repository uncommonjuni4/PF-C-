#include<iostream>
using namespace std;

int main(){
    char word;
    
    // Prompt user for input
    cout << "Enter Your Character: ";
    cin >> word;
    cout << "Enter Word = " << word << endl;

    // Check if the character is an alphabet
    if((word >= 'A' && word <= 'Z') || (word >= 'a' && word <= 'z')){
        
        // Corrected logic: Use || (OR) for checking vowels
        if(word == 'a' || word == 'e' || word == 'i' || word == 'o' || word == 'u' ||
           word == 'A' || word == 'E' || word == 'I' || word == 'O' || word == 'U'){
            cout << "Vowel" << endl;
        } else {
      
            cout << "Consonant" << endl;
        }
    } else {
        
        cout << "Not alphabet" << endl;
    }
    
    return 0;
}

