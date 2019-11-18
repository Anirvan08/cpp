#include<iostream>
using namespace std;
int Prime(int n)
{int j=0;
for(int i=2;i<n;i++)
{if(n%i==0)
j++;
}
if(j==0)
return n;
else
return 0;
}
int main()
{
	int N,p;
	cout<<" Enter an Integer :\n";
	cin>>N;
	if(Prime(N)==N)
	cout<<N<<" is Prime\n";
	else
	cout<<N<<" is not Prime \n";
	cout<<"Prime Numbers less than 100 are:\n";
	for(int i=1;i<=100;i++)
	{if(Prime(i)==i)
	cout<<i<<"  ";
	}
	}
