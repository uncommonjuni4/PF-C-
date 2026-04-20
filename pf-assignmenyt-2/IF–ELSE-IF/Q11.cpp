#include<iostream>
using namespace std;

int main(){
	
	
	int    marks ;
	cout<<"Plz enter marks "<<endl;

    cin>>marks;
    
    cout<<"Enter marks  = "<<marks<<endl;
     if((marks >=85 )&& ( marks <=100)){
     	
     	cout<<"A"<<endl;
	 }	else if ((marks >=70 )&& ( marks <=84)){
	 		cout<<"B"<<endl;
	 }	else if ((marks >=50 )&& ( marks <=69)){
	 		cout<<"C"<<endl;
	 }else{
	 	cout<<"Fail";
	 }
	
	return 0;
}
