#include <iostream>
#include <string>
using namespace std;

int main() {
     
     int n ;
     int product  =1 ;
     cout<<"Enter an number"<<endl;
     cin>>n;
     
     for(int i = 1; i<= n ; i++){
     	 
     	 product= product * i ;
     	 
	 }
   cout<<product;
    return 0;
}
