#include<iostream>
using  namespace std;
int main(){
	
	
	
	cout<<"Check All number From 1   to 200 which are divisble by 5 and 3!"<<endl;
	
	   for(int  i = 1 ;  i<=200 ; i++){
	   	
	   	  if(i % 5 ==0   && i % 5 ==0 ){
	   	  	  cout<<"Number "<<i<<" Divsible by both 5 and 3"<<endl;
	   	  	  
			 }else if( i % 3 ==0 ){
			 	cout<<"Number "<<i<<" Divsible by 3"<<endl;
			 }else if( i % 5 ==0 ){
			 	cout<<"Number "<<i<<" Divsible by 5"<<endl;
			 }else{
			 	 cout<<"Number "<<i<<" Not  Divsible by both 5 and 3"<<endl;
			 }
	   }
	
	
	return 0;
}
