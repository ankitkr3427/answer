/*
	Name: ques_9_c++
	Author: LIPIKA 
	Date: 15-06-23 11:34
	Description: 
*/

#include <iostream>
using namespace std;

class person{
	public:
		string name;
		person(string name1){
		name =name1;
		}
		
	
		virtual void display()
		{cout<<name;
		}
};
class student:public person

{
	public:
	string course;
	int marks;
	int year;
	student(string name1,string course1,int marks1,int year1):person(name1){
		course=course1;
		marks=marks1;
		year=year1;
	}
	
	
	void display(){
		cout<<"name : "<<name<<endl;
		cout<<"course : "<<course<<endl;
		cout<<"marks : "<<marks<<endl;
		cout<<"year : "<<year<<endl;
	}
	
	

};

class employee:public person{
	public:
		string department;
		int salary;
		employee(string name1,string department1,int salary1):person(name1){
		
	         department=department1;
	         salary=salary1;
			 }
	         
	void display(){
		cout<<"department : "<<department<<endl;
		cout<<"salary : "<<salary<<endl;
       	}   
	         
	         
};

int main(){
	person *bptr;
	student s1("anil ","bsc ",300,2023);
	bptr=&s1;
	bptr->display();
	employee l1("anil","computer science",30000);
	bptr=&l1;
	bptr->display();
}
