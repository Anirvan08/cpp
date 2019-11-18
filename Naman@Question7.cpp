#include<iostream>
void Factors(int);
using namespace std;
int main()
{
	int N;
	cout<<"Enter an Integer\n";
	cin>>N;
	cout<<"Factors of the number are:\n";
	Factors(N);
	return 0;
}
void Factors(int n)
{
	for(int i=1;i<=n;i++)
	{
	if(n%i==0)
	 cout<<i<<", ";	
	}
}
