//10.	Input marks:
//"	If marks ? 40
//o	If marks ? 75 ? Distinction
//o	Else ? Pass
//"	Else ? Fail

#include<iostream>
using namespace std;

int main(){
     int makrs ;  

    cout << "Enter Your  Marks: ";
    cin >> makrs;
    cout << "Enter Marks  = " << makrs<< endl;

  
    if(makrs >= 40 ){ 
        cout<<"Condtion of Marks greater Than 40   || Full-Filled |"<<endl;
        if(makrs >= 60 ){
            cout << " Distinction" << endl;
        } else {
      
            cout << "Pass" << endl;
        }
    } else {
        
        cout << "fail" << endl;
    }
    
    return 0;
}

