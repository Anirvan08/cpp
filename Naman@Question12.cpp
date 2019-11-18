#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"Enter the First no. a= ";
	cin>>a;
	cout<<"Enter the Second no. b= ";
	cin>>b;
	int*p=&a;
	int*q=&b;
	temp=*p;
	*p=*q;
	*q=temp;
	cout<<"The value of a and b after swapping are \n"<<"a="<<a<<"  "<<"b="<<b;
	return 0;
}