// MADE BY-  NAMAN JAIN
#include<iostream>
int fact(int);
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number\n";
	cin>>n;
	cout<<"Factorial of the "<<n<<" is : "<<fact(n);
}
int fact(int n)
{
	if(n>1)
	return n*fact(n-1);
}
