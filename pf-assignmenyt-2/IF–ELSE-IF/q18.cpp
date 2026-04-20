

#include<iostream>
using namespace std;

int main(){
	
    int  unit;
    float bill = 0;
    cout<<"Plz enter unit : "<<endl;
    cin>>unit;
    
    cout<<"Enter number units = "<<unit<<endl;
     
    if( unit >=0 &&  unit <=100 ){ 
    bill = unit * 5 ;
        cout<<"Bill is"<<bill<<endl;
    }   
    else if( unit >=101 &&  unit <=200){ 
    bill = unit * 8 ;
        cout<<"Bill is"<<bill<<endl;
    }     else if( unit > 200){ 
    bill = unit *10 ;
        cout<<"Bill is"<<bill<<endl;
    } else {
    	cout<<"plz enter correct using units";
	}
    
    
    return 0;
}

