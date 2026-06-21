#include<iostream>
using namespace std;

int main(){
	
	
	int arry[7] ;
	int post,neg,zero =0;
	
		cout<<"enter the array values-"<<endl;
	
	 for(int i =0 ; i<7; i++ ){
	 	 cin>>arry[i];
	 	 
	 	 if(arry[i] == 0){
	 	 	zero++;
		  }else if(arry[i] >0){
		  	post++;
		  }else  if(arry[i] < 0){
		  	neg++;
		  }
	 }
	 
	 cout<<"Total Zero are  ="<<zero<<endl;
	 cout<<"Total Negtaive  are  ="<<neg<<endl;
	 cout<<"Total Postive are  ="<<post<<endl;
	 
	 
	
	
	return 0 ;
}