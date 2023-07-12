/*
	Name:Lipika
	Author:LIPIKA
	Date: 26/03/23 22:38
	Description:CREATE CLASS SET
*/


#include <iostream>
using namespace std;

class SET
{

	int *arr;
	int size;



public:
void setsize()
	  	{ cout<<"Enter a number of elements  ";
	 	cin>>size;
	 	arr=new int[size];

	  	}

 void input()
	     {cout<<"Enter the elements ";
	     for(int i=0; i<size; i++)
	      {
		    cin>>arr[i];

		 } unique();
		   cout<<"The set  ";
		   output();
		   cardinality();}





void unique(){


	for (int i=0;i<size;i++){

	     for (int j=i+1;j<size;j++){

         if (arr[i]==arr[j]){
         	for (int k=j;k<size;k++)
         	 arr[k]=arr[k+1];
         	 size--;
			j--;

		 }	}

}}


void output(){

	     cout<<"{ ";
	     for (int i=0;i<size;i++)
	      cout<<arr[i]<<",";
	      cout<<"}";

	     }

void cardinality()
    {cout<<endl<<"cardinality of set is : "<<size;
	}

void ismember(){
int m ,flag=0;
cout<<endl<<"enter the  element for searh : ";
cin>>m;
{for(int i=0;i<size;i++){

	if (m==arr[i])
		{flag=1;
		break;
		}}
		if (flag)
           cout<<" ELEMENT IS PRESENT";
		   else
		   cout<<"ELEMENT IS ABSENT  ";


}

}

void setunion(SET s2){

  SET c;
   c.size=size+s2.size;
   c.arr=new int[c.size];
   for(int i=0;i<s2.size;i++){
      c.arr[i]=arr[i];
    for(int i=0;i<s2.size;i++){
      c.arr[i+size]=s2.arr[i];
	  }
	}
	 c.unique();
	 c.output();

}


void intersection(SET s2){

   SET c;
   c.size=0;
   c.arr=new int[c.size];
   for(int i=0;i<s2.size;i++){
      for(int j=0;j<size;j++){

         if (arr[j]==s2.arr[i]){
          c.arr[c.size]=arr[j];
          c.size++;
        }
      }
   }
   c.unique();
   c.output();
}


void subset(SET s2){
	int choice;
	cout<<endl<<"TO CHECK THE SUBSET OF SET A OVER SET B ENTER 1";
	
	cout<<endl<<"TO CHECK THE SUBSET OF SET B OVER SET A ENTER 2"<<endl;
	
	cout<<endl<<"CHOICE : ";
	cin>>choice;
	if(choice==1){
	
	int c=0;
	for(int i=0;i<size;i++){
		for (int j=0;j<s2.size;j++){
		
		if (arr[i]==s2.arr[j])
		   c++;
		   }
		   
		   } 
		    if(c==s2.size){
		   	cout<<endl<<"SET A is a subset of SET B";
		    
		   }if (c==size){
		   cout<<endl<<"SET A is propersubset of SET B";
	      }else{
	      	cout<<"SET A is not subset of SET B";
		  }
   }else{
   
	int c=0;
	for(int i=0;i<s2.size;i++){
		for (int j=0;j<size;j++){
		
		if (s2.arr[i]==arr[j])
		   c++;
		   }
		   
		   } 
		    if(c==size){
		   	cout<<endl<<"SET B is a subset of SET A";
		   }if (c==s2.size){
		   	 cout<<endl<<"SET B is proper subset of SET A";
		   }
		   else{
		   cout<<endl<<"SET B is not subset of SET A";
	      }

       }
}


void power_set(){
	cout<<"{{},";
	for(int i=0;i<size;i++){
		cout<<"{"<<arr[i]<<"},";
	}
	if(size!=1){
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
		
		cout<<"{"<<arr[i]<<","<<arr[j]<<"},";
	}
	}}
	
	if(size%2!=0 and size!=1){
	
	     cout<<"{";
		for(int i=0;i<size;i++){
		cout<<arr[i]<<",";
	}cout<<"}";
}cout<<"}";
}


void cartesian_product(SET s2){
	cout<<"{";
     for(int i=0;i<size;i++){
		for(int j=0;j<s2.size;j++){
		
		cout<<"("<<arr[i]<<","<<s2.arr[j]<<") ";
		
	}} 	cout<<"}";
}

	
	
	void setdifference(SET A){
		
		cout<<"{";
		
		for(int i=0;i<size;i++){
			int Flag=0;
			for(int j=0;j<A.size;j++){
				if(arr[i]==A.arr[j])
				  Flag=1;
				
				  	}
				if(Flag==0){
					cout<<arr[i]<<",";
				}
			}
				
			cout<<"}";}
		
	
	
	
	void symmetric_difference(SET A){
		
			cout<<"{";
		
		for(int i=0;i<size;i++){
			int Flag=0;
			for(int j=0;j<A.size;j++){
				if(arr[i]==A.arr[j])
				  Flag=1;
				
				  	}
				if(Flag==0){
					cout<<arr[i]<<",";
				}
			}
				for(int j=0;j<A.size;j++){
			int Flag=0;
			for(int i=0;i<size;i++){
				if(A.arr[j]==arr[i])
				  Flag=1;
				
				  	}
				if(Flag==0){
					cout<<A.arr[j]<<",";
				}
			}
		cout<<"}";
						
	}
		
	
void complement(SET A){
	
		cout<<"{";
		
		for(int i=0;i<size;i++){
			int Flag=0;
			for(int j=0;j<A.size;j++){
				if(arr[i]==A.arr[j])
				  Flag=1;
				
				  	}
				if(Flag==0){
					cout<<arr[i]<<",";
				}
			}
				
			cout<<"}";}

		
				
		};
		
		
		
int main()
{
	int choice;
    int num;


SET s1,s2,uni;
cout<<endl<<"FOR SET A "<<endl;
s1.setsize();
s1.input();
cout<<endl<<"--------------------------------------"<<endl;

cout<<endl<<"FOR SET B "<<endl;
s2.setsize();
s2.input();
cout<<endl<<"--------------------------------------"<<endl;


cout<<endl<<"                  OPERATIONS "<<endl;
cout<<"             Enter 1 for ismember"<<endl;
cout<<"             Enter 2 for powerset"<<endl;
cout<<"             Enter 3 for union and intersection"<<endl;
cout<<"             Enter 4 for subset"<<endl;
cout<<"             Enter 5 for cartesian product"<<endl;
cout<<"             Enter 6 for difference  "<<endl;
cout<<"             Enter 7 for symmetric difference  "<<endl;
cout<<"             Enter 8 for complement "<<endl;
cout<<"             Enter 9 to enter new sets "<<endl;
cout<<"             Enter 10 to end "<<endl;


do{
cout<<endl<<"Enter number of operation which you want to perform : ";
	cin>>choice;
switch(choice){

case 1:
	cout<<endl<<"ENTER 1 FOR SEARCHING THE ELEMENT IN SET A"<<endl;
	cout<<"ENTER 2 FOR SEARCHING THE ELEMENT IN SET B"<<endl;
	cout<<endl;
	cout<<"ENTER NUMBER : ";
	cin>>num;
	if(num==1){
	
s1.ismember();
cout<<endl<<"-------------------------------------"<<endl;}
else{
s2.ismember();
cout<<endl<<"--------------------------------------"<<endl;}	
break;


case 2:
	cout<<endl<<"ENTER 1 FOR POWER SET OF SET A"<<endl;
	cout<<"ENTER 2 FOR POWER SET OF SET B"<<endl;
	cout<<endl;
	cout<<"ENTER NUMBER : ";
	cin>>num;
	if(num==1){
cout<<endl<<"power set of SET A is ";
s1.power_set();
cout<<endl<<"---------------------------------------"<<endl;}

else{

cout<<endl<<"power set of SET B is ";
s2.power_set();
cout<<endl<<"----------------------------------------"<<endl;}
break;


case 3:
cout<<endl<<"union is : ";
s1.setunion(s2);
cout<<endl;
cout<<endl<<"intersection is : ";
s1.intersection(s2);
cout<<endl<<"-------------------------------------------"<<endl;
break;

case 4:
s1.subset(s2);
cout<<endl<<"-------------------------------------------"<<endl;
break;


case 5:
cout<<"ENTER 1 FOR A X A"<<endl;
cout<<"ENTER 2 FOR B X B"<<endl;
cout<<"ENTER 3 FOR A X B"<<endl;
cout<<"ENTER 4 FOR B X A"<<endl;
cout<<endl;
cout<<"ENTER NUMBER ";
cin>>num;
if(num==1){
s1.cartesian_product(s1);
cout<<endl;
cout<<endl<<"-----------------------------------------"<<endl;}
if(num==2){
s2.cartesian_product(s2);
cout<<endl;
cout<<endl<<"------------------------------------------"<<endl;}
if(num==3){
s1.cartesian_product(s2);
cout<<endl;
cout<<endl<<"-------------------------------------------"<<endl;}
if(num==4){
s2.cartesian_product(s1);
cout<<endl;
cout<<endl<<"-------------------------------------------"<<endl;}
break;


case 6:
	
cout<<"ENTER 1 FOR A-B "<<endl;
cout<<"ENTER 2 FOR B-A "<<endl;
cout<<endl;
cout<<"ENTER NUMBER ";
cin>>num;
cout<<endl;
cout<<"difference is  :  ";
if(num==1)
{

s1.setdifference(s2);
cout<<endl;
cout<<endl<<"-----------------------------------------"<<endl;
}else{


s2.setdifference(s1);
cout<<endl;
cout<<endl<<"-----------------------------------------"<<endl;

}
break;



case 7:
	cout<<endl;
	cout<<"symmetric difference is : ";
	s1.symmetric_difference(s2);
	
	cout<<endl;
cout<<endl<<"-----------------------------------------"<<endl;
	
	break;


case 8:
cout<<endl<<"FOR UNIVERSAL SET  "<<endl;
uni.setsize();
uni.input();

cout<<endl<<"--------------------------------------"<<endl;
	
cout<<"ENTER 1 FOR COMPLEMENT OVER SET A "<<endl;
cout<<"ENTER 1 FOR COMPLEMENT OVER SET B "<<endl;
cout<<endl;
cout<<"ENTER NUMBER : ";
cin>>num;
cout<<endl;
if(num==1){

uni.complement(s1);}
else{
	uni.complement(s2);
}
cout<<endl;
cout<<endl<<"-----------------------------------------"<<endl;


break;








case 9:
	cout<<endl<<"FOR SET A "<<endl;
	s1.setsize();
	s1.input();
	cout<<endl<<"---------------------------------";
	cout<<endl<<"FOR SET B "<<endl;
	s2.setsize();
	s2.input();
	cout<<endl<<"---------------------------------";
     break;
     
     
case 10:
	cout<<"                    PROGRAM END";
	break;
}
}
while(choice!=10);
return 0;

}








