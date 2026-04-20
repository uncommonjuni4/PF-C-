#include<iostream>
using namespace std;

int main(){
	
	
	int    year;
	cout<<"Plz enter year "<<endl;

    cin>>year;
    
    cout<<"Enter Years  = "<<year<<endl;
     if( year % 4 == 0 ){
     	
     	cout<<"Leap Year "<<endl;
	 }	else{
	 	cout<<" Not Leap Year "<<endl;
	 }
	
	return 0;
}
