
#include<fstream>
#include<iostream>
#include<stdio.h>
#include<fstream>
using namespace std;

struct student
{
	int rno;
	string name;
	int cls;
	int year;
	float total_mks;
	
};

int main()
{
	student s[10];
	for(int i=0;i<10;i++)
	{
		cout<<"\n Enter the roll number of "<<i+1<<"student : ";
		cin>>s[i].rno;
		cout<<"\n Enter the name of "<<i+1<<"student : ";
		cin>>(s[i].name);
		cout<<"\n Enter the class of "<<i+1<<"student : ";
		cin>>s[i].cls;
		cout<<"\n Enter the year of "<<i+1<<"student : ";
		cin>>s[i].year;
		cout<<"\n Enter the total marks of "<<i+1<<"student : ";
		cin>>s[i].total_mks;
	}
	fstream fp("student.txt",ios::out);
	fp.seekp(0);
	for(int i=0;i<10;i++)
	{
		fp.write((char*)&s[i],sizeof(s[i]));
}
	fp.close();
	return 0;
	}
