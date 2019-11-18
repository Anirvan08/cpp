#include<iostream>
void SumProduct(long int);
using namespace std;
int main()
{
	long int N;
	cout<<"Enter an Integer\n";
	cin>>N;
	SumProduct(N);
	return 0;
}
void SumProduct(long int n)
{
	long int p=1,s=0;
	while(n>0)
	{
		s+=n%10;
		p*=n%10;
		n/=10;
	}
	cout<<"\nSum of Digits is: "<<s;
	cout<<"\nProducts of Digits is: "<<p;
}
