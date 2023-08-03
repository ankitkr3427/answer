[1] 
//Copy the contents of one text file to another file, after removing all whitespaces.

//Source Code:

#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(){
	ifstream f1("first.txt");
	ofstream f2("second.txt");
	
	if(!f1||!f2){
		cout<<"Error in file";
		exit(100);
	}
	char ch;
	while(f1){
		f1.get(ch);
		if(ch==' '){
			continue;
		}
		else
		{
			f2<<ch;
		}
	}
	
	f1.close();
	f2.close();
	
	return 0;
	
}


