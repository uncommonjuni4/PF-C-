#include<iostream>
using namespace std;

int main(){
	
	string ss= "Ali";
	ss = (ss /10);
	cout<<ss;
    char word;
    cout<<"Plz enter a character: "<<endl;
    cin>>word;
    
    cout<<"Enter Character  = "<<word<<endl;

    // Corrected Logic: Use && to check ranges
    if( (word >= 'a' || word <= 'z') ){ 
        cout<<"Character is lowercase"<<endl;
    }   
    else if( (word >= 'A' || word <= 'Z') ){
        cout<<"Character is uppercase"<<endl;
    }
    else if ( (word >= '0' || word <= '9') ){
        cout<<"It is a digit"<<endl;
    }
    else{
        // Everything else is typically a special character
        cout<<"It is a special character/symbol"<<endl;
    }
    
    return 0;
}

