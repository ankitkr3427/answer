Create a template class Vector to show input, display and addition of two Vectors. Implement it with int and double datatypes.
Source Code:

#include<iostream>
using namespace std;

template<class Type>
class Vector{
	Type *v;
	int size;
	public:
		Vector(int m,Type *arr){
			v= new Type[size=m];
			for(int i=0;i<m;i++){
				v[i]=*(arr+i);				
			}
			
		}
		
		void display(){
			cout<<"\nArray:";
			for(int i=0;i<size;i++){
				cout<<v[i];
			}
		}
		
		Type sum(Vector x){
			Type sum=0;
			for(int i=0;i<size;i++){
				sum+=v[i];
			}
			for(int i=0;i<x.size;i++){
				sum+=x.v[i];
			}
			
			return sum;
		}
		
		void display_sum(Vector y){
			Type sm=sum(y);
			cout<<"\nSum of vectors: "<<sm;
			return;
		}
};

int main(){
	int numbers[]={1,2,3};
	double numb[]={1.3,3.2,4.5};
	int number[]={4,3,6};
	int s=3;
	Vector <int> v1(s,numbers);
	Vector <double> v2(s,numb);
	Vector <int> v3(s,number);
	v1.display();
	v2.display();
	v3.display();
	v1.display_sum(v3);
	return 0;
}

