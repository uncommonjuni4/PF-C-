#include<iostream>

using namespace std;

int coutdigit(int n ){
	
	int temp = n ;
	int digitcout =0 ;
	
	 while(temp >0){
	 	temp /=10;
	 	digitcout++;
	 	
	 }

	return  digitcout;
}


  int digitsum(int n){
  	     	int temp = n ;
	int digitcout =0 ;
	int sum  =  0;
	 while(temp >0){
		int num = temp % 10;
	 	temp /=10;
		
	 	
	 	 sum +=num;
	 	
	 }
	 
	 return sum ;
  }


  int revs(int n){
  	   
  	   int revs =  0;
  	   
  	   int temp  = n ;
  	   
  	   while(temp >0){
  	   	    int lastdigit = temp %10 ;
  	   	    
  	   	    revs = ( revs * 10)+ lastdigit ;
  	   	    
  	   	    temp /=10;
		 }
  	   
  	   
  	   cout<<"Revser  NUmber  "<<revs<<endl;  	   
  }
int main(){
	
	cout<<"Plz enter the number which is 3 digit"<<endl;
	int n ;
	
	cin>>n;
	
	cout<<"User enter Number is "<<n<<endl;
	
	
	int digitcout =coutdigit(n);
	cout<<"Total digtit "<<digitcout<<endl;
	
	
	int sum =  digitsum(n);
	 cout<<"Sum  of all digits = "<<sum<<endl; 
	 
	int  rev = revs(n);
	return  0;
	
}