//5.	Input salary and assign tax rate:
//o	< 30,000 ? 5%
//o	30,000-70,000 ? 10%
//o	70,000 ? 15%

#include<iostream>
using namespace std;

int main(){
	
	
	int    salary ;
	cout<<"Plz enter Salary "<<endl;

    cin>>salary;
    
    cout<<"Enter Salary  = "<<salary<<endl;
     if(( salary  >0 ) || (salary <30000 )){ 

     	cout<<"Tax rate is 5%"<<endl;
	 }	else if (( salary >=30000  )  ||   (salary  < 70000)) {
	 		cout<<"Tax  Rate is 10%"<<endl;
	 }	else if ((salary >=70000 )){
	 		cout<<"Tax Rate us  15%"<<endl;
	 }
	 
	else{
		cout<<"Enter correct salary ";
	}
	return 0;
}
