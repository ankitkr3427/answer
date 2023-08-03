#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc,char *argv[]){
	
	int cnt[26];
	for(int i=0;i<26;i++){
		cnt[i]=0;
	}
	for(int i=1;i<argc;i++){
		int j=0;
		while(argv[i][j]!='\0'){
			
			if(isalpha(argv[i][j]))
				cnt[int(argv[i][j])-int('a')]++;
			
			j++;
		}
		
	}
	for(int i=0;i<26;i++){
		if(cnt[i]!=0){
			cout<<"\nNo. of "<<char('a'+i)<<" : "<<cnt[i];
		}
	}
	cout<<"\n\n";
	
	return 0;
}


OUTPUT:

