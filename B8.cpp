Rewrite program 1 to incorporate command line arguments and exception handling to raise appropriate errors.
Source Code:

#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int str_len(char *s){
	int i=0;
	while(*(s+i)!='\0'){
		i++;
	}
	return i;
}


int main(int argc,char *argv[]){
	
	try{
	
	
		if(argc==1){
			char ch;
			throw(ch);
					
		}
		else{		
			
			ofstream f2("file2.txt");	
			ifstream f1(argv[1]);
			
			
			if(!f1){
				throw(3);
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
		}
	}
	
	catch(int ch){
		cout<<"Error: File not found!";
	}
	catch(char ch){
		cout<<"Error: The name of the file to be copied was not entered. ";
		
	}
	catch(...){
		cout<<"ERROR!";
	}
	
	
	return 0;
	
}


