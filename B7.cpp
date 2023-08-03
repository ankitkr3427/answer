Create a template function findPos() that accepts an array, 
size of the array and a key element. The function finds the key in the 
given array and returns the index value if the key is found else returns -1. 
Show the implementation with int, double and string datatypes.
Source Code:

#include<iostream>
using namespace std;

template<class Type>

int findPos(Type *arr,int size, Type key){
	
	for(int i=0;i<size;i++){
		if(*(arr+i)==key){
			return i;
			
		}
	}
	return -1;
	
}

int main(){
	
	char name[]={'a','b','c'};
	int numbers[]={1,2,33};
	double numb[]={2,3.6,6};
	
	int num=1;
	double num1=1;

	cout<<"\n Pos of 'b': "<<findPos(name,3,'b');

	cout<<"\n Pos of 1: "<<findPos(numbers,3,num);

	cout<<"\n Pos of 1: "<<findPos(numb,3,num1);
	
	return 0;
	
}

