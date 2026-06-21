#include<iostream>

using namespace std;


int cal(int sub[]);



 
int main(){
	
	cout<<"Enter Marks of three subjects"<<endl;
	int sub[3];
	
	
	for(int i = 0 ; i<3 ; i++){
		 
		 cout<<"Enter Marks of Subject "<<i<<endl;
		 cin>>sub[i];
		 cout<<" Marks of Subject  "<<i<<endl;
	}
	
	cal(sub);
	
	

	return  0;
	
}
