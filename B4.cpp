Create a Triangle class. Add exception handling statements to ensure the following conditions: all sides are greater than 0, and the sum of any two sides is greater than the third. The class should also have overloaded functions for calculating the area of a right-angled triangle and using Heron's formula to calculate the area of any type of triangle.

Source Code:

#include<iostream>
#include<cmath>
using namespace std;

class Triangle{
	int side1;
	int side2;
	int side3;
	
	public:
		
		Triangle(int s1,int s2,int s3){
			try{
			
				if(s1==0||s2==0||s3==0){
					throw(s1);
				}
				else if(s1>s3+s2||s2>s1+s3||s3>s1+s2){
					char ch;
					throw(ch);
					
				}
				else{
					side1=s1;
					side2=s2;
					side3=s3;
				}
			}
			catch(int i){
				cout<<"\nError: Side can't be zero";
			}
			catch(char c){
				cout<<"\nError: One side can't be greater than the sum of other two sides";
			}
			
		}
		
		float area(int b, int h){
			float area=0.5*b*h;
			cout<<"\nArea (Right triangle): "<<area;
			return area;
		}
		
		float area(){
			int s=side1+side2+side3;
			
			float area= sqrt(s*(s-side1)*(s-side2)*(s-side3));
			cout<<"\nArea: "<<area;
			return area;
		}
	
};
int main(){
	
	Triangle T1(2,2,3),T2(3,4,5),T3(0,7,0),T4(1,6,1);
	T1.area();
	T2.area(3,4);
	T2.area();
	return 0 ;
}


