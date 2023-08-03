[2]

//Count the number of words in the given text file.

//Source Code:

#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(){
	ifstream f1("words.txt");
	
	if(!f1){
		cout<<"Error in file";
		exit(100);
	}
	int count=0;	
	char ch;
	while(f1){
		f1.get(ch);
		
		if(ch==' '){
			count++;
		}
		
	}
	
	cout<<"No. of words : "<<count;
	
	f1.close();

	
	return 0;
	
}




