#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int str_len(char *s){
	int i=0;
	while(*(s+i)!='\0'){
		i++;
	}
	return i;
}

void char_adr(char *s){
	int i=0;
	while(*(s+i)!='\0'){
		cout<<"\n\n"<<*(s+i)<<" address : "<<i;
		i++;
	}
	return;
}
	
void concat(char *s1,char *s2){
	int l1=str_len(s1);
	int l2=str_len(s2);
	
	
	char s[30];
	for(int i=0;i<l1;i++){
		s[i]=*(s1+i);
		
	}
	for(int j=0;j<l1;j++){
		s[j+l1]=*(s2+j);
	}
	int size=str_len(s);
	cout<<"\n\nConcatenated String: ";
	for(int i=0;i<size;i++){
		cout<<s[i];
	}
	return;
}

void low_upper(char *s){
	
	int size=str_len(s);
	if(*(s))
	for(int i=0;i<size;i++){
		if(*(s+i)<122 && *(s+i)>96)
			
			*(s+i)=*(s+i)-32;
	}
	
	return;
}

void comp(char *s1,char *s2){
	cout<<"\n";
	if(s1>s2){
		cout<<s1<<" is greater than "<<s2;
	}
	else if(s2>s1){
		cout<<s2<<" is greater than "<<s1;
	}
	else{
		cout<<s1<<" is equal to "<<s2;
	}
	return;
	
}

void reverse(char *s){
	int size=str_len(s);
	char str[30];
	for(int i=0;i<size;i++){
		str[i]=*(s+i);
	}
	int j=0;
	for(int i=size-1;i>=0;i--){
		*(s+j)=str[i];
		j++;
	}
		
	return;
}

void insert(char *s1,char *s2,int key){
	int size1=str_len(s1);
	char str[30];
	int j=0;
	for(int i=key;i<size1;i++){
		str[j]=s1[i];
		j++;
	}
	str[size1-key]='\0';
	int size2=str_len(s2);
	int k=0;

	for(int i=key;i<key+size2;i++){
		
		s1[i]=s2[k];
		k++;
		
	}
	j=0;
	int size3=str_len(str);
	for(int i=(key+size2);i<=(key+size2+size3);i++){
		*(s1+i)=str[j];
		
		j++;
	}
	return;
	
}


int main(){
	char s[]="abcde";
	char k[]="fghi";
	char u[30]="uvwxyz";
	
	cout<<"\nFirst string - s: "<<s;
	cout<<"\nSecond string - k: "<<k;
	cout<<"\nThird string - u: "<<u;
	char ch;
	
	cout<<"\n\nMENU : \n1)Address of each character in a string.\n2)Concatenate two strings.\n3)Compare two strings.\n4)Calculate length of string.\n5)Convert lowercase to uppercase.\n6)Reverse the string.\n7)Insert one string into another string at specified position.\n\nChoose an option from the above menu: ";	
	cin>>ch;
	
	switch(ch){
		case '1':
			cout<<"\n1)Address of each character in string s.";
			char_adr(s);
			break;
			
		case '2':
			cout<<"\n2)Concatenate string s and k.";
			concat(s,k);
			break;
		case '3':
			cout<<"\n3)Compare string s and k.";
			comp(s,k);
			break;
		case '4':
			cout<<"4)Calculate length of string u.";
			cout<<"\nLength of string u: "<<str_len(u);
			break;
		case '5':
			cout<<"\n5)Convert string k from lowercase to uppercase.";
			low_upper(k);
			cout<<"\nString k: "<<k;
			break;
		case '6':
			cout<<"\n6)Reverse the string s";
			reverse(s);
			cout<<"\nString s: "<<s;
			break;
		case '7':
			cout<<"\n7)Insert string k into string u at 4th position.";
			insert(u,k,4);
			cout<<"\nString u: "<<u;
			break;
			
		default:
			cout<<"Enter a valid option!";
		
	}
	
	char key;
	cout<<"\n\nPress 0 to exit the program and any other key to continue....";
	cin>>key;
	
	if(key=='0'){
		cout<<"\n\nProgram Ended.......";
		exit(100);
	}
	else
		main();
	
	return 0;
}



OUTPUT:

