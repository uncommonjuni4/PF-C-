//2.	Input marks in two subjects:
//o	If both ? 40
//"	If average ? 60 ? Pass with merit
//"	Else ? Pass
//o	Else ? Fail


#include<iostream>
using namespace std;

int main(){
	
	
	int    sub1 , sub2 , avg ,total ;
	cout<<"Plz enter Subject 1 Numbers and Subject 2 Numbers  "<<endl;

    cin>>sub1>>sub2;
    
    cout<<"Subject 1 Numbers   = "<<sub1<<endl;
    cout<<"Subject 1 Numbers   = "<<sub2<<endl;
     if( (sub1 > 40 ) && (sub2 > 40)){
     	
     	cout<<"Both Subjects Marks are Greater than  40 ! "<<endl;
     	   total= sub1 + sub2 ;
     	   cout<<"Total marks of both subjects :   "<<total<<endl;
     	    avg =  (total / 2 );
     	    cout<<"Total Avger  of both subjects :   "<<avg<<endl;
     	    if( avg  >= 60){
     	    	cout<<"Average Status of  60 is  || full fill ||"<<endl;
     	    	cout<<"Pass on Merit"<<endl;
			 }else{
			 	cout<<"Average Status of  60 is  ||Not full fill ||"<<endl;	
				cout<<"Pass"<<endl;	
			 }
	 }	else{
	 		cout<<"Both Subjects Marks are lower  than  40 ! "<<endl;
	 }
	
	return 0;
}
