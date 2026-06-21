#include<iostream>

using namespace std;


int bill(int units){
	 int  totalbill =0  ;
	 int tax = 0;
	 
	 if(units >0  &&  units <=100){
	 	cout<<"Unit price is 10"<<endl;
	 	totalbill = units *10;
	 	tax =(totalbill*5)  /100;
	 	totalbill = tax+ totalbill;
	 	cout<<"total bill  = "<<totalbill<<endl;
	 } else if(units >100  &&  units <=200){
	 	cout<<"Unit price is 15"<<endl; 
	 	totalbill = units *15;
	 	tax =(totalbill*5)  /100;
	 	totalbill = tax+ totalbill;
	 	cout<<"total bill  = "<<totalbill<<endl;
	 }else{
	 	cout<<"Unit price is 20"<<endl; 
	 	totalbill = units *20;
	 	tax =(totalbill*5)  /100;
	 	totalbill = tax+ totalbill;
	 	cout<<"total bill  = "<<totalbill<<endl;
	 }
}



 
int main(){
	
	cout<<"Enter Your Used units"<<endl;
	int units ;
	
	cin>>units;
	
	cout<<"User enter units is "<<units<<endl;
	
	bill(units);

	return  0;
	
}