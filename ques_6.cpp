/*
	Name:ques_6
	Author:lipika
	Date: 10-06-23 15.50
	Description:adjacentary matrix complete graph
*/
#include <iostream>
using namespace std;

int main(){
	int s1,s2,m=0,s=0;
	int A[10][10];
	
	cout<<"enter size of sqaure  matrix : ";
	cin>>s1;

	s2=s1;
	cout<<"enter matrix row wise : "<<endl;
	for (int i=0;i<s1;i++){
	cout<<"enter "<<i+1<<" row : ";
	for (int j=0; j<s2;j++){
		
		cin>>A[i][j];
	}cout<<endl;
	}
	  
	for (int i=0;i<s1;i++){
	 cout<<"[ ";
	for (int j=0;j<s2;j++){
	
		
		cout<<A[i][j];
		cout<<" ";
		
	}   
	cout<<"]";
	cout<<endl;
	}  
	
	for (int i=0;i<s1;i++){
	
	for (int j=0; j<s2;j++){
	
	
		if(A[i][j]==0 && i==j){

			
		    m+=1;
		}
			if(A[i][j]==1 && i!=j){

			
		    s+=1;
		}
		
	}
	}
	cout<<endl;
	 if(m==s1 && s==s1*s2-s1){
	 
	  cout<<"it is matrix of complete graph "; 
	   
	 }else{
	 	cout<<"it is not matrix of complete graph";
	 }
	 
		
	return 0;
}
	
