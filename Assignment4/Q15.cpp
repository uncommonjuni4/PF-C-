#include <iostream>
using namespace std;


int power(int base , int exp ){
	   int result = 1;
	   
	   for(int i = 0 ; i<exp ;i++){
	   	   result  *= base ;
	   }
	   
	   return result ;
	   
}

    
  bool isstrom(int n  ){
  	   
  	   int org = n;
  	   int sum = 0;
  	   int totalnumber = 0;
  	   
  	   int temp  =  n;
  	   
  	   while(temp >0){
  	   	  temp  = temp /10;
  	   	  totalnumber++;
  	   	  
  	   	  cout<<"Total Number "<<totalnumber<<endl;
		 }
		 
		 
		 temp = n ;
		 
		 while(temp > 0){
		 	  int lastdigit = temp % 10;
		 	  
		 	  sum +=power(lastdigit  , totalnumber);
		 	  temp /= 10;
		 	  
		 	  cout<<"Last digt "<<lastdigit<<endl;
		 }
		 
		 
		 return sum  ==org ;
  }

int main() {
    cout << "Enter a Positive integer---" << endl;
    int n;
    cin >> n;
   
    cout << "Enter Number by user ---" << n << endl;
   
    if(isstrom(n)) {
        cout << "number is an Armstrong number " << endl;
    } else {
        cout << "number is not an Armstrong number " << endl;
    }   

    return 0;
}