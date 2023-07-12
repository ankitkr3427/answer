/*
	Name:ques_4
	Author:lipika 
	Date: 20-05-23 13.50
	Description: 
*/


#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main(){
	int order,c;
	int *arr;
	
	cout<<"enter terms of equation : ";
	cin>>order;
	
	if(order<=2){
		cout<<"eqaution should have at least 3 terms to find solution by brute force ";
	}else{
	
    
    	arr = new int [order];
	 

	
	 
 	 
 	cout<<"Enter value of x's : \n"; 
 	for (int i=0; i<order-2; i++){
 	cout<<"x"<<i+1<<" : "; 
 	
 	
  	
   	cin>>arr[i];
        }
        
        
    
  //  cout<<"x"<<order-1<<" : X ";
    
    cout<<"constant : ";
	 cin>>c;
	 
	 if(c>10){
	 	cout<<"\n constant should have to less than or equal to 10 ";
	 }else{
	 
       cout<<endl;
    	cout<<"Entered  equation is  : \n"; 
 	for (int i=0; i<order-2; i++){
 	cout<<arr[i]<<" + "; 
  	
        } cout<<"x"<<order-1;
		cout<<" = "<<c<<endl;

      
     cout<<endl<<"value of x is : ";
      for(int i=0;i<order-2;i++){
      	c-=arr[i];
	  }cout<<c<<endl;
    
    
    
}
    
}
	return 0;
}
