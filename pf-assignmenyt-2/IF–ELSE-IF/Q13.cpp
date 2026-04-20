/*//3.	Input age and classify:
//o	< 13 ? Child
//o	13-19 ? Teen
//o	20-59 ? Adult
//o	60+ ? Senior
*/


#include<iostream>
using namespace std;

int main(){
	
	
	int    age ;
	cout<<"Plz enter Age  "<<endl;

    cin>>age;
    
    cout<<"Enter Age  = "<<age<<endl;
     if((age >=60)){
     	
     	cout<<"Senior"<<endl;
	 }	else if ((age >=13 )&& ( age <=19)){
	 		cout<<"B"<<endl;
	 }	else if ((age >=20 )&& ( age <=59)){
	 		cout<<"teen"<<endl;
	 }
	 
	else{
		cout<<"Plz enter age in postive number";
	}
	return 0;
}
