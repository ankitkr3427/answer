/*
	Name:ques_3  
	Author:lipika 
	Date: 25-06-23 21.16
	Description:permutation 
*/

#include <iostream>
#include <conio.h>
using namespace std;

  void perm(int A[],int n, int b)
  {
  	if(b==n-1){
  		for(int j=0;j<n;j++)
  		cout<<A[j];
  		cout<<"\n";
  	         	 
	  }else{
	  	for(int i=b;i<n;i++){
		  
	  	swap(A[b],A[i]);
	  	perm(A,n,b+1);
		swap(A[b],A[i]);
	  }
}
  }
  
  
   void perm_rep(int A[],int B[],int n, int b)
  {
  	if(b==n)
	  {
  		for(int j=0;j<n;j++)
  		cout<<B[j];
  		cout<<"\n";
  		
	  }else{
	  	for(int i=0;i<n;i++)
	  	{
		  B[b]=A[i];
		  
	  	perm_rep(A,B,n,b+1);
	  	
	  } 
  }
}
   int main(){
   	static int n;
   	int A[n];
   	int B[n];
   	int b=0;
   	int ch;
   	cout<<"enter the no. of elments : ";
   	cin>>n;
   	cout<<"enter the elements : ";
   	for(int i=0;i<n;i++)
   	{
   		cin>>A[i];
   		
	   }
	   cout<<endl;
	   cout<<"enter 1 for permutation without repition "<<endl;
	   cout<<"enter 2 for permutation repition "<<endl;
	   
	   cout<<"enter choice : ";
	   cin>>ch;
	   cout<<endl;
	   
	   
	   switch(ch)
	   {
	   	case 1:
	   		perm(A,n,b);
	   		break;
	   		
	   		
	   	case 2:
		   perm_rep(A,B,n,b);
		   break;
		   
		   
		  default:
		  cout<<"invalid input ";
		  
		  
		  	
	   }
	   
	   getch();
	   return 0;
	   
	   
   }
  
