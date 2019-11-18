#include<iostream>
#include<conio.h>
using namespace std;
class Person
{
		string Name;
		int Age;
	public:
		Person()
		{
			Name="No Name";
			Age=0;
		}
		virtual void set()  //virtual function
		{
			cout<<"\n Enter Name: ";
			cin>>Name;
			cout<<" Enter Age: ";
			cin>>Age;
		}
		virtual void print()  //virtual function
		{
			cout<<"\n Name: "<<Name;
			cout<<"\n Age: "<<Age;
		}
};
class Teacher : public Person 
{
		string subject;
		int salary;
	public:
		Teacher()
		{
			subject="None";
			salary=10000;
		}
		void set()
		{
			cout<<"\n Enter Subject: ";
			cin>>subject;
			cout<<" Enter Salary: ";
			cin>>salary;	
		}
		void print()
		{
			cout<<"\n Subject taught: "<<subject;
			cout<<"\n Salary: "<<salary;
		}
};
class Student:public Person
{
		char grade;
		int standard;
	public:
		Student()
		{
			grade='F';
			standard=1;
		}
		void set()
		{
			cout<<"\n Enter Grade: ";
			cin>>grade;
			cout<<" Enter Standard: ";
			cin>>standard;	
		}
		void print()
		{
			cout<<"\n Grade: "<<grade;
			cout<<"\n Standard: "<<standard;
		}
};
int main()
{
	Person* p;  //use of pointer for runtime polymorphism
	Person p1;
	p=&p1;  //p=address of Person type object
	cout<<"\n OBJECT OF PERSON CLASS: ";
	p->set();
	p->print();
	cout<<endl;
	cout<<"\n OBJECT OF TEACHER CLASS: ";
	Teacher t1;
	p=&t1;  //p=address of Teacher type object
	p->set();
	p->print();
	cout<<endl;
	Student s1;
	p=&s1;  //p=address of Student type object
	cout<<"\n OBJECT OF STUDENT CLASS: ";
	p->set();
	p->print();
	delete p;  //deallocating memory
	getch();
	return 0;
}
