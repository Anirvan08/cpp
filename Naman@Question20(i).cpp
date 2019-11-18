// MADE BY-  NAMAN JAIN
#include<iostream>
int gcd(int,int);
using namespace std;
int main()
{
	int n1,n2;
	cout<<"Enter first number\n";
	cin>>n1;
	cout<<"Enter second number\n";
	cin>>n2;
	cout<<"GCD of "<<n1<<" and "<<n2<<" is : ";
	cout<<gcd(n1,n2);
}
int gcd(int n1,int n2)
{
	if(n2!=0)
	return gcd(n2,n1%n2);
	else
	return n1;
}
