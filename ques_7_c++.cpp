/*
	Name:ques_7_c++ 
	Author: lipika
	Date: 18-05-23 18.39
	Description: gcd
*/


#include <iostream>
using namespace std;
int main(){
	int num1,num2 ,gcd;
	cout<<"enter numbers : ";
	cin>>num1 >>num2;
 	
 	if(num1>num2){
      	
  	for(int i=1;i<=num2;i++){
		if(num1%i==0 and num2%i==0){
			gcd=i;
		}
 	}cout<<"gcd : "<< gcd;
     }
else{
	
	for(int i=1;i<=num1;i++){
		if(num1%i==0 and num2%i==0){
			gcd=i;
		}
	}cout<<"gcd : "<<gcd;
}

	return 0;
}
