//3.	Input username and password:
//o	If username correct
//"	If password correct ? Login success
//"	Else ? Wrong password
//o	Else ? Invalid username

#include<iostream>
using namespace std;

int main(){
	
	
	
	string UserName , password ;
	cout<<"UserName must be Your  Name in upperCase and Password Must be  also your  name in lowerCaser "<<endl;
	cout<<"Plz enter User Name "<<endl;

    cin>>UserName;
    
    cout<<"Enter UserName  = "<<UserName<<endl;
     if( UserName  == "JUNAID"){
     	 
     	 cout<<"UserName Status :   ||Correct UserName|| "<<endl;
     	 cout<<"Now Enter Password---------- "<<endl;
     	  cin>>password;
     	 if(password  == "junaid"){
     	 	  cout<<"Password  Status :   ||Correct Password|| "<<endl;
		  }else{
		  	 cout<<"Password  Status :   ||UnCorrect Password|| "<<endl;
		  }
       
	 }	
	 
else{
	  cout<<"UserName Status :   ||UnCorrect UserName|| "<<endl;	
	 }
	
	return 0;
}
