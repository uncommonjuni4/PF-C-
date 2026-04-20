//7.	Input three numbers and print the largest one.

#include<iostream>
using namespace std;

int main(){
	
    char n1  , n2 , n3 ;
    cout<<"Plz enter a numbers: "<<endl;
    cin>>n1>>n2>>n3;
    
    cout<<"Enter number 1 = "<<n1<<endl;
     cout<<"Enter number 2 = "<<n2<<endl;
      cout<<"Enter number 3 = "<<n3<<endl;
    if( n1 > n2 && n1 > n3 ){ 
        cout<<"N1 is grater than n2 and n3"<<endl;
    }   
    else if(n2 > n1 && n2 > n3 ){
        cout<<"N2 is grater than n1 and n3"<<endl;
    }
   
    else{
        
        cout<<"N3 is grater than n2 and n1"<<endl;
    }
    
    return 0;
}

