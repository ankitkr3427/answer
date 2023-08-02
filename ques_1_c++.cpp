/*
	Name: 
	Copyright: 
	Author: 
	Date: 20-05-23 17.11
	Description: 
*/


#include <iostream>
//#include <math.h>
#include <bits/stdc++.h>
using namespace std;


   int main(int argc, char * argv[]) {
   int j,n,a,i;

   if (argc >= 2) 
    { 
         n= atoi(argv[1]);}
	     else
	     {
	  	cout<< "enter no of term : ";
         cin>>n;
	     }  
	  	       
          float sum = 0;
for(int i = 1; i < n+1; i++) {


sum = sum - 1 / pow(-i, i);}
 
	    cout<<sum; 
	return 0;   
	}
	
	
	


