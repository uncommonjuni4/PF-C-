#include<iostream>
using namespace std;

int main(){
	
	
	int    n ;
	cout<<"Plz enter a number "<<endl;

    cin>>n;
    
    cout<<"Enter number  = "<<n<<endl;
     if( (n >=0 ) && (n % 3 == 0)){
     	
     	cout<<" a number is positive and divisible by 3"<<endl;
	 }	else{
	 		cout<<"na number  is not  positive and  not divisible by 3"<<endl;
	 }
	
	return 0;
}
