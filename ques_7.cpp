/*
	Name:ques_7 
	Author:lipika
	Date: 10-06-23 19.46
	Description:adjacent list for complete graph
*/

#include <iostream >
using namespace std;
int main (){
	int row ,col;
	char**a;
	 int c;
	
 int s1=0;
   int s=0;
   int s2=0;
	
	
	
	cout<<"enter number of vertices ";
	cin>>row;
	
/*
	cout<<"enter name of vertices  : ";
		char**arr;
	arr=new char*[row];
	for(int i=0;i<row;i++){
		cin>>arr[i];
	}
	*/
	
	

	a=new char*[row];
	
    
   	
      
	for(int i=0;i<row;i++){
	cout<<endl;
		 cout<<"enter number of neighbouring vertices of vertex "<<i+1<<" : ";
		
		 cin>>c;
		  
		  if(c>=row){
		  	cout<<"number of neighbouring vertices cannot be more than or equal to total number of vertices ";
		    exit(c>=row);
		  }
		  
		 
		 
		 
		 
		 a[i]=new char[c+1];
		 
		cout<<"enter vertex "<<i+1<<" along with its neighbouring vertex :";
		for(int j=0;j<c+1;j++){
			cin>>a[i][j];
			
			
	}cout<<endl<<"------------------------------------------------------------"<<endl;
	}
	
	cout<<"vertex      adjacency vertex ";
	for (int i=0;i<row;i++){
		cout<<endl;
		cout<<"  ";
		cout<<a[i][0]<<"              ";
		for(int j=1;j<a[i][j];j++){
			
			cout<<a[i][j]<<"  ";
			
	}cout<<"";
	}
	
	for (int i=0;i<row;i++){
	
	  	for (int j=1;j<a[i][j];j++){
	  		if(a[i][0]!=a[i][j]){
			     s+=1;
	            
		  }
	
		   }
}

	for(int i=0;i<row;i++){
		for(int j=0;j<row;j++){
			if(a[i][0]==a[j][0]){
				s1+=1;
				
			}
		}
	}
	
   for(int i=0;i<row;i++){
   	for(int j=1;j<row;j++){
   		for(int k=j;k<row;k++){
		   
   		if(a[i][j]==a[i][k]){
   			s2+=1;
   		
   		}
		   }
	   }
   }
			
			
			
		cout<<endl;
	   if(s1==row && s==row*row-row &&  s2==row*row-row)
		{
	   
	   
		cout<<"it is adjacency list of complete graph ";
		
}else{

		cout<<"it is not adjacency list of complete graph ";
}
	


	return 0;
}




