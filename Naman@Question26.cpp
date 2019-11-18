#include<iostream>
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
{   student s[10];
    
	ifstream ifile("student.txt");
	
	while(ifile)
	{for(int i=0;i<10;i++)
	{
	
	
		ifile>>s[i].rno;
		//ifile>>s[i].cls;
		ifile>>s[i].name;
		//ifile>>s[i].year;
		ifile>>s[i].total_mks;
	}
}
	
	for(int i=0;i<10;i++)
	{
	  cout<<"\n INFORMATION OF "<<i+1<<"th Student\n\n";
	  cout<<"\nRoll no."<<" name"<<" total_mks";
	  cout<<"\n";
		cout<<s[i].rno<<"\t";
		//cout<<"class : "<<s[i].cls<<"\n";
		cout<<s[i].name<<"\t";
		//cout<<"year : "<<s[i].year<<"\n";
		cout<<s[i].total_mks;
	} 
ifile.close();
return 0;
}

