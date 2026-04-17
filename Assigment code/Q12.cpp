#include<iostream>
using namespace std;

int main(){
	
	
	int    n ;
	cout<<"Plz enter a number "<<endl;

    cin>>n;
    
    cout<<"Enter number  = "<<n<<endl;
     if( n > 0 ){
     	cout<<"Positive"<<endl;
	 }	else if (n < 0){
	 		cout<<"Negative"<<endl;
	 }else if( n ==  0){
	 	cout<<"Zero";
	 }else{
	 	cout<<"plz enter Number only";
	 }
	
	return 0;
}
