#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int i;
	string str, str1, snew,s;
	cout<<"Enter the string : ";
	cin>>s;
	int len=s.length();
	while(len!=0)
	{
		str=s.substr(len-1,1);
		str1=s.substr(0,len-1);
		snew=snew+str;
		str=" ";
		len--;
	}
	if(snew==s)
	{
		cout<<endl<<s<<" is palindrome."<<endl;
	}
	else
	{
		cout<<endl<<s<<" is not palindrome as "<<snew<<" is not same as "<<s<<endl;
	}
	return 0;
}
