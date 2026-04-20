//10.	Input percentage and assign division:
//"	? 60 ? First
//"	50-59 ? Second
//"	40-49 ? Third
//"	< 40 ? Fail


#include<iostream>
using namespace std;

int main(){
	
	
	int   per ;
	cout<<"Plz enter Percentage "<<endl;

    cin>>per;
    
    cout<<"Enter Percentage  = "<<per<<endl;
     
    // Corrected Logic: Use && to check ranges
    if( ( per >=0   &&  per<40 ) ){ 
        cout<<"Fail"<<endl;
    }   
    else if( ( per >=40  && per<=49 ) ){
        cout<<"Third"<<endl;
    }
    else if( ( per >=50  &&  per<=59 ) ){
        cout<<"Second"<<endl;
    }
    else if( ( per >=60 ) ){
        cout<<"First"<<endl;
    }
   
    else{
    
        cout<<"Plz Enter Correct Percentage!"<<endl;
    }
	
	return 0;
}
