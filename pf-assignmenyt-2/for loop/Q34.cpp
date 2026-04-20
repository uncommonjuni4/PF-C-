#include<iostream>
using  namespace std;
int main(){
	
	
	
	cout<<"Find factorial   of a  Number "<<endl<<endl;
	
	cout<<"pLZ   enter an Number"<<endl;
	 int n  ;
	cin>>n;
	cout<<"Enter number is  = "<<n<<endl;
	
	int  fac  = 1;
	
	
	   for(int  i = 1 ;  i <=n  ; i++){
	   	   
	   	   fac = fac * i;
	   	   
	   }
	   cout<<"Sum = "<<fac;
	
	
	return 0;
}
