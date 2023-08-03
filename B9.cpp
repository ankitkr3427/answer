WAP to print a triangle of stars as follows (take the number of lines from the user):
ABCDEFGHI 
ABCD  FGHI 
ABC       GHI 
AB            HI
A                I
Source Code:

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter no. of rows: ";
	cin>>n;
	char ch='A';
	int m=n;
	int cnt=0;
	int k=n;
	for(int i=0;i<n;i++){
		
		for(int j=0;j<m;j++){
			cout<<char(ch+j);
			
		}
		for(int j=1;j<cnt;j++){
			cout<<' ';
		}
		for(int j=k-1;j<(n*2)-1;j++){
			cout<<char(ch+j);
		}
		
		m--;
		cnt+=2;
		k++;
		cout<<"\n";
	}
	
	return 0;
}


