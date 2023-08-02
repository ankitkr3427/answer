/*
	Name:ques 4
	Author:lipika
	Date: 28-06-23 18.59
	Description: 
*/

#include <iostream>
using namespace std;
int main()

{  	string  *arr;
 int ch;
 string n;
	 
     cout<<"enter the string : ";
     getline(cin,n);




string  s2,s;

	
	
	cout<<"enter the 2nd string : ";
	getline(cin,s2);

cout<<"enter 1 for address of string "<<endl;
cout<<"enter 2 for compare the strings "<<endl;
cout<<"enter 3 for concatenation of string "<<endl;
cout<<"enter 4 for length of string "<<endl;
cout<<"enter 5 for lower to upper case";
cout<<"enter 6 for reverse ";
cout<<"enter 7 for insert string ";
do{





cout<<endl;
 cout<<endl<<"enter choice ";
   cin>>ch;
   cout<<endl;
	switch(ch){
	
	
	
	case 1:
		{
		

  	arr=&n;
	  char *p;
     char a;
       int length =0;
       for(int i=0;n[i]!=0;i++){
       	 length+=1;
	   }
       
  	for(int i=0;i<length;i++){
 	a=arr[0][i];
 	p=&a;
 	cout<<"address of "<<arr[0][i]<<" "<<p<<endl;
} 
cout<<endl<<"--------------------------------------"<<endl;
}break;

   case 2:{

   

	
	
	cout<<"concatenate the strings : ";
	s=n+s2;
	cout<<s;
	cout<<endl<<"--------------------------------------"<<endl;
	break;
}  
	
		

	case 3:{
		
	
	if(n<s2){
		cout<<"2nd string  is greater than string 1st ";
	}else{
		cout<<"string 1st  is greater than string string 2nd " ;
	}
	cout<<endl<<"--------------------------------------"<<endl;
	break;
}

case 4:{
		arr=&n;
       int length =0;
       for(int i=0;arr[0][i]!='\0';i++){
       	 length+=1;

}  cout<<"length is : "<<length;
	
	break;
}

 
case 5:{
  	int len=0;
  	for(int i=0;n[i]!='\0';i++)
     {
                             	
 	len+=1;}
 	
 	
 	cout<<"lower to upper case : ";
 	for(int i=0;i<len;i++){
  	if (n[i]>96 && n[i]<123){
		n[i]-=32;
		cout<<n[i];
  	}else{
  		cout<<n[i];
	  }
      }   
	
	    
  	break;
}


case 6:{
	
		int len=0;
  	for(int i=0;n[i]!='\0';i++)
     {
                             	
 	len+=1;}
 	cout<<"reverse string : ";
 	
 	for(int i=len-1;i>=0;i--){
 		cout<<n[i];
	 }
 	
 	
 	
	break;
}
 case 7:{
 	int index;
 	cout<<"enter a position at which u want to write :";
 	cin>>index;
 	
 		int len=0;
  	for(int i=0;n[i]!='\0';i++)
     {
                             	
 	len+=1;}
 	
 		int lenn=0;
  	for(int i=0;s2[i]!='\0';i++)
     {
                             	
 	lenn+=1;}
 	cout<<"insert string : ";
 	cout<<n.insert(2,s2);
 	string c;
 	for(int i=0;i<len;i++){
 		for(int j=0;j<lenn;j++){
 		
 		if(index==i){
 		//	c[i]=s2[1];
		 }else{
		 //	cout<<n[i++];
		 }
	 }
	break;
 }
}


}}while(ch!=0);
	

return 0;
}
