#include<iostream>
using namespace std ;
int main(){
	
	
   cout<<"Enter Plz First three numbers !"<<endl;
   int n1 ,n2 ,n3 ;
   
   
   cin>>n1>>n2>>n3;
   cout<<"First Number  = "<<n1<<endl;
   cout<<"second  Number  = "<<n2<<endl;
   cout<<"Third  Number  = "<<n3<<endl;
   
    if(n1 > n2 ){
    	 
    	 cout<<"Number 1 Greater Than Number 2 "<<endl;
    	 if(n1 > n3){
    	  cout<<"Number 1 Greater Than Number  3 "<<endl;
		 }else{
		 	cout<<"Number 1 Greater Than Number 2   But Not Number 3 "<<endl;
		 }
	}else if(n2 >n1 ){
	        	 cout<<"Number 2 Greater Than Number 1 "<<endl;
	        	 if(n2 > n3 ){
	        	 	 cout<<"Number 2 Greater Than Number 3 "<<endl;
				 }else{
				 		cout<<"Number 2 Greater Than Number 1   But Not Number 3 "<<endl;
				 }
			}
			else if( n3 > n1 ){
				if(n3 > n2 ){
						cout<<"Number 3 Greater Than Number 1 "<<endl;
				}else{
						cout<<"Number 3 Greater Than Number 1   But Not Number 2 "<<endl;
				}
			}
			else if( n1 == n2 && n1 == n3 ){
				cout<<"All Number are equal ";
			}
				
	      else{
	      	cout<<"Plz enter posistive numbers ";
		  }
			
	
	return   0;
}
