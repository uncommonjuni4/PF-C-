#include<iostream>
using namespace std;

int main(){
	
	
	int  n ;
	cout<<"Plz enter the Number : "<<endl;
	
	cin>>n;
	
	
	cout<<"Given number = "<<n<<endl;
	
	if(n % 7 ==0     && !(  n   % 6  == 0)){
		
		 cout<<"The Given   number  "<<n<<" is divisible by both   7 and  not by 6."<<endl;
	}
	else  if(!(n % 7 ==0)    && (  n   % 6  == 0) ){
		cout<<"The Given   number  "<<n<<" is  not divisible by both   7 and   divisible  by 6."<<endl;
	}
	
	else{
		cout<<"The Given   number  "<<" is not divisible by both   7  and   6"<<endl;
	}
	
	return 0;
}
