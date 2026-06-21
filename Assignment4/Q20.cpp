#include<iostream>

using namespace std;




 
int main(){
	   cout<<"Enter Value "<<endl;
	   
	   
	   int n  ;
	   
	   cin>>n;
	   
	   cout<<"Value before chnage with help of pointer "<<n<<endl;
	   
	   
	   int *P_n  = &n;
	   
	   *P_n = 13;
	   
	   
	   cout<<"Value after chnage with help of pointer "<<*P_n<<endl;
	   	   cout<<"Value before chnage with help of pointer of n"<<n<<endl;
	 	
	
	return  0;
	
}
