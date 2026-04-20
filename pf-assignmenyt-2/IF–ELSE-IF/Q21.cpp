//1.	Input age and citizenship:
//o	If age ? 18
//"	If citizen ? Eligible to vote
//"	Else ? Not eligible
//o	Else ? Not eligible


#include<iostream>
using namespace std;

int main(){
	
	
	int   age  ;
	string cityzen;
	cout<<"Plz enter Age  "<<endl;

    cin>>age ;
    
    cout<<"Enter Age  = "<<age<<endl;
     
     if(age >=18){
     	
     	cout<<"you are Cityzen or Not( Y  For Yes and N for NO)) "<<endl;
     	cin>>cityzen;
    	cout<<"Enter cityzen status :  "<<cityzen<<endl;
     	if(cityzen == "Y"){
     		cout<<"you are Able to vote ";
		 }else{
		 		cout<<"you are  not  Able to vote ";
		 }
	 } else{
	 	cout<<"You are not able to vote   because you are under 18 !"<<endl;
	 }
     
	return 0;
}
