/*
	Name: 
	Copyright: 
	Author: 
	Date: 20-05-23 13.50
	Description: 
*/


#include <iostream>
using namespace std;
int main(){
	
	string m;
	int l;
	cout<<"enter string : ";
	cin>>m;
	int freq[123]={0};
	
	for(int i=0;i<m.length();i++){	
	cout<<m[i]<<endl;
	int indx=int(m[i]);
	freq[indx]++;
  } 
  
  	for(int i=65;i<123;i++){	
  	    if(freq[i]==0){
  	    	continue;
		  }
		  
		  cout<<"count of "<<char(i)<<" is "<<freq[i]<<endl;
  }
  
  return 0;
  
}
