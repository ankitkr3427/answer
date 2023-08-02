/*
	Name: array2 
	Author:lipika 
	Date: 23-04-23 14.42
	Description:search elements 
*/

#include <iostream>
using namespace std;
int main(){
     int flag=0;
	 int a;
     int search;
    int size;
	int array[size];
	cout<<"size of aaray : ";
	cin>>size;
	
		cout<<"enter numbers :";
	for(int i=0;i<size;i++)
	 cin>>array[i];
	 
	int m;
	
	 cout<<"enter search elements : ";
	 cin>>search; 
     for(int i=0;i<size;i++){
    
        if( array[i]==search ){
		   m=i;
           flag=1;
        
		  }

		}	
		 
		if (flag){
			cout<<"element is present";
			
		
		}else{
			cout<<"element is absent";
		}
return 0;
}
