#include<iostream>
using namespace std;

int main(){
	
	
	int  n ;
	cout<<"Plz enter the Number : "<<endl;
	
	cin>>n;
	
	
	cout<<"Given number = "<<n<<endl;
	
	if(n % 4 ==0     && n   % 6  == 0){
		
		 cout<<"The Given   number  "<<n<<" is divisible by both   4 and  6."<<endl;
	}else{
		cout<<"The Given   number  "<<" is not divisible by both   4 and  6.is  not   the range of  20-100."<<endl;
	}
	
	return 0;
}
