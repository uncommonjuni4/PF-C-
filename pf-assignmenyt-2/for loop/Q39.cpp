//9.	Print all numbers between 1-100 and replace: 
//"	multiples of 3 ? print "Fizz" 
//"	multiples of 5 ? print "Buzz" 
//"	multiples of both ? print "FizzBuzz" 
//A



#include<iostream>
using  namespace std;
int main(){
	
	
	
	cout<<"Check All number From 1   to 100 which are  not divisble by 3!"<<endl;
	
	   for(int  i = 1 ;  i<=100 ; i++){
	   	
	   	  if((i % 3 == 0)){
	   	  	cout<<"Dic=vibe by 3 "<<endl;
	   	  	  cout<<"Fizz"<<endl;
	   	  	
			 }else if(i % 5 == 0){
			 	cout<<"Dic=vibe by 5"<<endl;
			 	cout<<"buzz"<<endl;
			 }else if ((i % 3 ==0 ) && ( i % 5 == 0) ){
			 	cout<<"Dic=vibe by 3  and 5"<<endl;
			 	cout<<"FizzBuzz"<<endl;
			 }
	   }
	
	
	return 0;
}
