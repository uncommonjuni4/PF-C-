#include<iostream>
using  namespace std;
int main(){
	
	
	
	cout<<"Check All number From 1   to 100 which are divisble by 7!"<<endl;
	
	   for(int  i = 1 ;  i<=100 ; i++){
	   	
	   	  if(i % 7 ==0){
	   	  	  cout<<"Number "<<i<<" Divsible by 7"<<endl;
	   	  	  
			 }else{
			 	 cout<<"Number "<<i<<" Not  Divsible by 7"<<endl;
			 }
	   }
	
	
	return 0;
}
