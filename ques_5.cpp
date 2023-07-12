/*
	Name:ques-5 
	Author:LIPIKA 
	Date: 20-05-23 15.06
	Description:POLYNOMAIL 
*/


#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	int order,x,s=0;
	int *arr;
	
	cout<<"enter order of equation : ";
	cin>>order;
    
    	arr = new int [order+1];
	 
	 	cout<<"\n Enter coefficients : \n"; 
 	for (int i=0; i<=order; i++){
 	cout<<"x^"<<i<<" : "; 
  	
   	cin>>arr[i];
        }
     cout<<"\n Enter value of x : "; 
     cin>>x;
        for (int i=0; i<=order; i++){
	
	 s += arr[i] *pow(x, i); }
	 cout<<endl<<"Result is :"<<s;
	    
      
      
     getch(); 
  
	
	return 0;
}
