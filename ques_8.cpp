/*
	Name:ques_8
	Author:lipika
	Date: 10-06-23 21.48
	Description:program to compute directed graph and
	 indegree and outdegree 
*/

#include <iostream>
using namespace std;
int main(){
	int s,m,n;
	char A[10][2];
	char B[10][2];
	

cout<<"enter number of vertex :";
	cin>>n; 
	cout<<"enter vertex name : ";
	for(int i=0;i<n;i++){
		cin>>B[i][0];
	}
	
	
	
	
	cout<<"enter number of ordered pairs : ";
	cin>>s;
	cout<<"enter ordered pairs of edges of directed graph : ";
	
	for(int i=0;i<s;i++){
	cout<<" (";
		for (int j=0;j<2;j++){
			cin>>A[i][j];
			
		}cout<<")";
	}
	
	
	
	for(int i=0;i<s;i++){
		cout<<endl;
		for (int j=0;j<2;j++){
			
			if (j==0){
			
			cout<<A[i][j]<<" is directed to  ";
	}else{
		cout<<A[i][j];
	}
	}
 }	
	  cout<<endl<<"--------------------------"<<endl;
	  	for(int i=0;i<n;i++){
			m=0;
		for (int j=0;j<s;j++)
	{
          if(B[i][0]==A[j][0]){
		  
               m+=1;
			   }
               
         
	       

	      
}
	  	  cout<<endl<<"OUT DEGREE OF ("<<B[i][0]<<") IS "<<m;}
	  	  
	  	  
	  	  
	  	  

		 cout<<endl<<"--------------------------"<<endl;
		for(int i=0;i<n;i++){
			m=0;
		for (int j=0;j<s;j++)
	{
          if(B[i][0]==A[j][1]
		  ){
		  
               m+=1;
			   }
      }
      
  
	
	  
	  	  cout<<endl<<"IN DEGREE OF ("<<B[i][0]<<") IS "<<m;
}
	
	
	
	
	
	return 0;
}
