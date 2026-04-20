//4.	Input a number:
//o	If number > 0
//"	If divisible by 2 ? Positive Even
//"	Else ? Positive Odd
//o	Else ? Not positive


#include<iostream>
using namespace std;

int main(){
	
	
	int  n ;
	 cout<<"Plz enter number !"<<endl;
	 
	 cin>>n;
	
	cout<<"Given number = "<<n<<endl;
	
	if(n  > 0){
		cout<<"Number is Postive because it is grater than 0 "<<endl;
		 if(n % 2 == 0){
		 	cout<<"The Given   number  "<<n<<" is   Postive even!"<<endl;
		 }else{
		 	cout<<"The Given   number  "<<n<<" is   Postive Odd!"<<endl;
		 }
		 
	}else{
		cout<<"The Given   number  "<<n<<" is  lsess than zero mean neagtive number."<<endl;
	}
	
	return 0;
}
