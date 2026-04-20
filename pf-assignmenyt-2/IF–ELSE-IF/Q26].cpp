//5.	Input salary and years of service:
//o	If salary > 50,000
//"	If service > 5 years ? Bonus 10%
//"	Else ? Bonus 5%
//o	Else ? No bonus
#include<iostream>
using namespace std;

int main(){
	
	
	int   n ;
	cout<<"Plz enter Number------- "<<endl;

    cin>>n;
  
    cout<<"Enter  Number  = "<<n<<endl;
     if( n>= 10  &&  n<=100 ){
     	  cout<<"number is between 10-100 status || Full-Fill || "<<endl;
     	  cout<<" divisible by 5 ? Valid & divisible  status _- Chcek  "<<endl;
     	   if(n % 5 ==0 ){
     	   	cout<<" divisible by 5 ? Valid & divisible  status  || Full-Filled || "<<endl;
     	   	    cout<<"Valid & divisible  By 5 "<<endl;
     	   	    
			}else{
			cout<<" divisible by 5 ? Valid & divisible  status  || Not  Full-Filled || "<<endl;
			cout<<"Valid but not divisible  By 5 "<<endl;
			}
     	
	 }	else{
	 		cout<<"Out of range (10 -100)"<<endl;
	 }
	
	return 0;
}
