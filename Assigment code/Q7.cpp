#include<iostream>
using namespace std;

int main(){
	
	
	int    n1 , n2  ,sum;
	cout<<"Plz enter Two  numbers "<<endl;

    cin>>n1>>n2;
    sum = n1 + n2;
    cout<<"First number  = "<<n1<<endl; 
	 cout<<"Second  number  = "<<n2<<endl;
	 
	  cout<<"Sum  = "<<sum<<endl;
     if( sum > 100 ){
     	
     	cout<<"sum of two numbers is grater than 100"<<endl;
	 }	else{
	cout<<"sum of two numbers is  not grater than 100"<<endl;
	 }
	
	return 0;
}
