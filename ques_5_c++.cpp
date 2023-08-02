/*
	Name:ques_5_c++ 
	Author:lipika
	Date: 18-05-23 19.11
	Description: merge two ordered arrays to get a single ordered array
*/

#include <iostream>
using namespace std;
int main(){
	int A[10],s1,B[10],c[10],s2,k=0;
	
	cout<<"enter size of array a : ";
	cin>>s1;
	cout<<"enter array A : ";
	for(int i=0;i<s1;i++){
		cin>>A[i];
	}
	
	
		cout<<"enter size of array b : ";
   	cin>>s2;
   	cout<<"enter array B : ";
 	for(int j=0;j<s2;j++){
		cin>>B[j];
	}
	
	
	cout<<"array is : ";
	for(int i=0;i<s1;i++){
		
		cout<<A[i]<<" ,";
	}
      
      
     
      
	for(int i=0;i<s2;i++){
		 int Flag=0;
		for(int j=0;j<s1;j++){
	       if(B[i]==A[j]){
	       	Flag=1;
			    }
				}	
				
	 if(Flag==0) {
	 	cout<<B[i]<<", ";
	 }
}
	
	return 0;
}
