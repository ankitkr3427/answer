/*
	Name:ques_2_c++ 
	Author:lipika
	Date: 17-05-23 22.16
	Description:remove duplicates in array 
*/

/*
#include <iostream>
using namespace std;
int main(){

     int size;
 	int array[size];


cout<<"enter size of array : ";
cin>>size;
cout<<"enter array : ";
for(int i=0;i<size;i++)
  {
    cin>>array[i];
   
//cout<<array[i]<<",";
}

cout<<endl<<"array is : ";
for(int i=0;i<size;i++){
	for(int j=1;j<size;j++){
		
		if ((array[i]==array[j])){
			break	;
			}else{
			array[i++];
			}


cout<<array[i]<<",";}
}






return 0;

}*/


#include<iostream>
using namespace std;
int main ()
{
    int A[10], B[10], n, i, j, k = 0;
    cout << "Enter size of array : ";
    cin >> n;
    cout << "Enter elements of array : ";
    for (i = 0; i < n; i++)
        cin >> A[i];    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (A[i] == B[j])
                break;
        }
        if (j == k)
        {
            B[k] = A[i];
            k++;
        }
    }
    cout << "Repeated elements after deletion : ";
    for (i = 0; i < k; i++)
        cout << B[i] << " ";
    return 0;}






