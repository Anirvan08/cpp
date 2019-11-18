#include<iostream>
void Reverse(long int);
using namespace std;
int main()
{
	long int N;
	cout<<"Enter an integer\n";
	cin>>N;
	Reverse(N);
	return 0;
}
void Reverse(long int n)
{
	cout<<"Reversed number is: ";
	while(n>0)
	{
		cout<<n%10;
		n/=10;
	}
}
