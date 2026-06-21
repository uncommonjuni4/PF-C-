#include<iostream>

using namespace std;


void cal(int sub[]){
	
	int totalmarks= 0 ;
	float percen ;

	for(int i =  0 ; i<3 ; i++){
		
		 totalmarks += sub[i];
		 
	}	
	
	percen = (float(totalmarks)  / 300) *100 ;
	
	 if(percen >90 && percen <=100){
	 	cout<<"Percentage  ="<<percen<<endl;
	 	
	 	cout<<"A+"<<endl;
	 }else if(percen >80 && percen <=90){
	 	cout<<"Percentage  ="<<percen<<endl;
	 	
	 	cout<<"A"<<endl;
	 }else if(percen >70 && percen <=80){
	 	cout<<"Percentage  ="<<percen<<endl;
	 	
	 	cout<<"B"<<endl;
	 }else if(percen >60 && percen <=70){
	 	cout<<"Percentage  ="<<percen<<endl;
	 	
	 	cout<<"C"<<endl;
	 }else if(percen >50 && percen <=60){
	 	cout<<"Percentage  ="<<percen<<endl;
	 	
	 	cout<<"D"<<endl;
	 }else{
	 		cout<<"Percentage  ="<<percen<<endl;
	 	cout<<"F"<<endl;
	 }
	
	cout<<"Total Marks  = "<<totalmarks<<endl;
};



 
int main(){
	
	cout<<"Enter Marks of three subjects"<<endl;
	int sub[3];
	
	
	for(int i = 0 ; i<3 ; i++){
		 
		 cout<<"Enter Marks of Subject "<<i+1<<endl;
		 cin>>sub[i];
		 cout<<" Marks of Subject  "<<i+1<<endl;
	};
	
	cal(sub);
	
	

	return  0;
	
}
