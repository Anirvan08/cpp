// MADE BY-  NAMAN JAIN
#include<iostream>
#include<string.h>
# define max 100
using namespace std;
int main()
{
	char str[max];
	int count[26],l;
	cout<<"Enter a String\n";
	cin.getline(str,max);
	l=strlen(str);
	for(int i=0;i<26;i++)
	{
		count[i]=0;
	}
	for(int i=0;i<l;i++)
	{
		char c=toupper(str[i]);
		count[c-'A']++;
	}
	cout<<"\n No. of occurance of each letter is :\n";
	for(int i=0;i<26;i++)
	{
		if(count[i]!=0)
		{
			cout<<char(i+'A')<<" = "<<count[i]<<"\n";
		}
	}
}
