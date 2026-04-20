#include<iostream>
using namespace std;

int main(){
     int temp ;  

    cout << "Enter Your Tempartue : ";
    cin >> temp;
    cout << "Enter Tempature  = " << temp<< endl;

  
    if(temp > 30 ){ 
        cout<<"Condtion of tepatrue greater Than 30   || Full-Filled |"<<endl;
        if(temp  > 60 ){
            cout << "Hot & Humid" << endl;
        } else {
      
            cout << " Hot" << endl;
        }
    } else {
        
        cout << "Normal" << endl;
    }
    
    return 0;
}

