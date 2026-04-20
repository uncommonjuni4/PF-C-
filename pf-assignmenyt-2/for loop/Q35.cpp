//5.	Print numbers from 1 to n but:
//o	Skip multiples of 3
//?


#include<iostream>
using  namespace std;
int main(){
	
	
	
	cout<<"Check All number From 1   to 100 which are  not divisble by 3!"<<endl;
	
	   for(int  i = 1 ;  i<=100 ; i++){
	   	
	   	  if((i % 7 != 0)){
	   	  	  cout<<"Number "<<i<<" is  not  Divsible by 7"<<endl;
	   	  	
			 }
	   }
	
	
	return 0;
}
