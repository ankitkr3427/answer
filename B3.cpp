Define a class Person having a name as a data member. Inherit two classes, Student and Employee, from Person. The student has additional attributes such as course, marks and year, and Employee has department and salary. Write a display () method in all the three classes to display the corresponding attributes. Provide the necessary methods to show runtime polymorphism.

Source Code:

#include<iostream>
#include<cstring>
using namespace std;

int str_len(char *s){
	int i=0;
	while(*(s+i)!='\0'){
		i++;
	}
	return i;
}

class Person{
	
		protected:
			char Name[20];
			int name_len;	
	
		public:
		
		
		Person(char *s){
		 	name_len=str_len(s);
		 	for(int i=0;i<name_len;i++){
		 		Name[i]=*(s+i);
			 }
		
		
		}	 
		
		void display(){
			cout<<"\nPerson class Display\n";
			for(int i=0;i<name_len;i++){
				cout<<Name[i];
			}
			return;
		}
		 	
};

class Student : public Person{
	char Course[20];
	int Marks;
	int Year;
	int cor_len;
	
	public:
		Student(char *n,char *c, int m, int y):Person(n){
			cor_len=str_len(c);
		 	for(int i=0;i<cor_len;i++){
		 		Course[i]=*(c+i);}
		 	
		 	Marks=m;
		 	Year=y;
			
		}
		
		
		void display(){
			cout<<"\n\nStudent class Display";
			cout<<"\nName: ";
			for(int i=0;i<name_len;i++){
				cout<<Name[i];
			}
			cout<<"\nCourse: ";
			for(int i=0;i<cor_len;i++){
				cout<<Course[i];
			}
			
			cout<<"\nMarks: "<<Marks;
			cout<<"\nYear: "<<Year;
			
			
			return;
		}
		
		
};

class Employee: public Person{
	char Depart[20];
	int Salary;
	int dep_len;
	
	public:
		Employee(char *n, char *d, int sal):Person(n){
			dep_len=str_len(d);
			for(int i=0;i<dep_len;i++){
		 		Depart[i]=*(d+i);}
		 		
		 	Salary=sal;
			
		} 
		
		void display(){
			cout<<"\n\nEmployee class Display";
			cout<<"\nName: ";
			for(int i=0;i<name_len;i++){
				cout<<Name[i];
			}
			cout<<"\nDepartment: ";
			for(int i=0;i<dep_len;i++){
				cout<<Depart[i];
			}
			
			cout<<"\nSalary: "<<Salary;
		
			return;
		}
	
};

int main(){
Person P1("Pokemon");
	P1.display();
	
	Student S("Ash","BSc",45,1);
	S.display();
	
	Employee E("Dr.Oak","Laboratory",5000);
	E.display();
	
	return 0;
}


