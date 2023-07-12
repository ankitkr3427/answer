/*
	Name:ques_2 
	Author:lipika
	Date: 10-05-23 21.54
	Description: 
*/

#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{   int n;
   int relation;
    int *arr;
    int **b;
cout<<"enter number of elements ";
cin>>n;
arr=new int[n];
cout<<"enter numbers : ";
for(int i=0;i<n;i++){
	cin>>arr[i];	
}


cout<<"no. of enter relation ";
cin>>relation;
b=new int*[relation];
cout<<"enter relation ";
for(int i=0;i<relation;i++){
	b[i]=new int [relation];
	cout<<"(";
	for(int j=0;j<2;j++){
		cin>>b[i][j];
	}cout<<")";
}


int A[10][10];

/*
for(int i=0;i<n;i++){
	for(int j=0;j<2;j++){
		if(arr[i]==b[j][0]){
			for(int k=0;k<n;k++){
			
			if(b[j][1]==arr[k]){
				A[i][k]==1;			
			}
	   }
		}else{
			A[i][j]=0;
		}
	}
}*/




for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		
		if(b[i][j]==b[j][i]){
		
		
		A[i][i]==1;
		
	}else{
		A[i][j]=0;
	}
}}

for(int i=0;i<n;i++){
	cout<<"[";
	for(int j=0;j<n;j++){
		cout<<A[i][j];
	}cout<<"]";
	cout<<endl;
}


/*
    int a[10][10], m, i, j, k, r=1, ir=1, s=1, ans=1, tr=1;
    cout<<"\nEnter the order of the square matrix :";
    cin>>m;
    cout<<"\nEnter the relation in matrix format(0/1):\n";
    
    for(i = 0; i < m; i++)
    
        for(j = 0; j < m; j++)
         cin>>a[i][j];
        //To check reflexive
    for(i = 0; i < m; i++)
    {
        if(a[i][i] != 1)
        
           r = 0;
        if(a[i][i] != 0)
        
           ir = 0;
    }
    //To check symmetric
    
    for(i = 0; i < m; i++)
    
        for(j = 0; j<m; j++)
        {
            if(a[i][j] == 1 && a[j][i] != 1)
               s = 0;
            if(a[i][j] == 1 && a[j][i] == 1 && i != j)
               ans = 0;
        }
        //To check transitive
        for(i = 0; i < m; i++)
        
           for(j = 0; j < m; j++)
           
              for(k = 0; k < m; k++)
              
                 if(a[i][j] == 1 && a[j][k] == 1 && a[i][k] != 1)
                    tr = 0;
           if(r == 1)
              cout<<"\n\nRelation is reflexive";
           else if(ir == 1)
              cout<<"\n\nRelation is irreflexive";
           else
              cout<<"\n\nRelation is neither reflexive nor irreflexive";
           if(s == 1)
             cout<<"\n\nRelation is symmetric";
           if(ans == 1)
             cout<<"\n\nRelation is antisymmetric";
           if(s != 1 && ans != 1)
              cout<<"\n\nRelation is not symmetric";
           if(tr == 1)
              cout<<"\n\nRelation is transitive";
           else
              cout<<"\n\nRelation is not transitive";
           if(r == 1 && s == 1 && tr == 1)
              cout<<"\n\nRelation is equivalance";
           else
              cout<<"\n\nRelation is not a equivalance relation";
           if(r == 1 && ans == 1 && tr == 1)
              cout<<"\n\nRelation is partial ordering relation";
           else
              cout<<"\n\nRelation is not a partial ordering relation";
           cout<<"\n\n";
           system("pause");*/
           return 0;
 }
