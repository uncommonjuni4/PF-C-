#include<iostream>
using namespace std;

int main(){
	
	
	   char  letter  ;
	   
	   cout<<"Plz enter an Character !"<<endl;
	   
	   cin>>letter;
	   cout<<"Enter character is  = "<<letter<<endl;
	   if(  letter >= 'a' ||  letter <='z'){
	   	cout<<"Giver character "<<letter<<" is in lowercase."<<endl;
	   }else{
	   	
	   	 	cout<<"Giver character "<<letter<<" is in Uppercase."<<endl;
	   }
	
	return 0;
}
