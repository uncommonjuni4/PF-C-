#include<iostream>

using namespace std;




 
int main(){
	  
	  int n1 = 10  ; 
	  int n2 = 20 ;
	  
	  
	  int *P_n1 = &n1;
	  int *P_n2 = &n2;
	  
	  
	  int sum  = *P_n1+ *P_n2;
	  cout<<"Sum  ="<<sum<<endl;
	  
	return  0;
	
}
