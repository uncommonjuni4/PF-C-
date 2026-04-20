//5.	Input salary and years of service:
//o	If salary > 50,000
//"	If service > 5 years ? Bonus 10%
//"	Else ? Bonus 5%
//o	Else ? No bonus
#include<iostream>
using namespace std;

int main(){
	
	
	int    salary , bouns , exp ;
	cout<<"Plz enter Salary ------- "<<endl;

    cin>>salary;
    cout<<"Able to Get bouns if salary is above than 50000!  ";
    cout<<"Enter Salary  = "<<salary<<endl;
     if( salary > 50000){
     	  cout<<"Salary Greater 50K Status   || Full-Fill"<<endl;
     	  cout<<"Enter Your job Experence! "<<endl;
     	   cin>>exp;
     	   cout<<"your Job Experice   = "<<exp<<endl;
     	   if(exp  >=5){
     	   	    cout<<"Bousd status to get 10%  ||  Full-Fill"<<endl;
     	   	    bouns = (salary * 10) / 100;
     	   	    salary = salary + bouns;
     	   	    cout<<"Salary Agter 10% bouns  = "<<salary<<endl; 
			}else{
				cout<<"Bousd status to get 5%  ||  Full-Fill"<<endl;
     	   	    bouns = (salary * 5) / 100;
     	   	    salary = salary + bouns;
     	   	    cout<<"Salary Agter 5% bouns  = "<<salary<<endl; 
			}
     	
	 }	else{
	 		cout<<"Not  Able to Get bouns if salary is below  than 50000! "<<endl;
	 }
	
	return 0;
}
