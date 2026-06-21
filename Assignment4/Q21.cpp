#include<iostream>

using namespace std;




 
int main(){
	  
	  int arry[4] = {1, 2, 3 , 4};
	  
	  
	  int *P_arrry = arry;
	  
	  
	  for(int i = 0 ;i<4; i++){
	  	cout<<"value at idex "<<i<<" of arry with help of pointer"<<*(P_arrry+i)<<endl;
	  }
	return  0;
	
}
