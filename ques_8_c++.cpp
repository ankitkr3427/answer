/*
	Name: 
	Copyright: 
	Author: 
	Date: 29-06-23 18.02
	Description: 
*/

#include <iostream>
using namespace std;

class MATRIX
{
		int arr[10][10];
	int size,size1;



public:
void setsize()
	  	{ cout<<"Enter a row of matrix  ";
	 	cin>>size;//size1;
	    cin>>size1;

	  	}
	
	



  void input(){
  cout<<"	enter matrix   ";
  for(int i=0;i<size;i++){
  	for (int j=0;j<size1;j++){
  		cin>>arr[size][size1];
	  }
  }

  
}
  
  void display(){
  	cout<<"	 matrix is ";
  for(int i=0;i<size;i++){
  	cout<<"[";
  	for (int j=0;j<size1;j++){
  		cout<<arr[size][size1];
	  }cout<<"]";
  }
  
  

  }
	
};


int main(){
MATRIX A ,B;
A.setsize();
A.input();
A.display();


return 0;
}

