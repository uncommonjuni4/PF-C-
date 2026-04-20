//4.	Input a number and check whether it is:
//o	Divisible by both 2 and 3
//o	Only by 2
//o	Only by 3
//o	Neither

#include<iostream>
using namespace std;

int main(){
	
	
	int    n ;
	cout<<"Plz enter number "<<endl;

    cin>>n;
    
    cout<<"Enter number  = "<<n<<endl;
     if((n %2 ==0 ) && (n% 3==0 )){
     	
     	cout<<"Divisible by both 2 and 3"<<endl;
	 }	else if ((n % 2 == 0 )) {
	 		cout<<"Only by 2"<<endl;
	 }	else if ((n % 3 == 0  )){
	 		cout<<"Only by 3"<<endl;
	 }
	 
	else{
		cout<<"  not Divisible by both 2 and 3 ";
	}
	return 0;
}
