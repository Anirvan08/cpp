// MADE BY-  NAMAN JAIN
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the no of terms of the series\n";
	cin>>n;
	int a[n];
	a[0]=0;
	a[1]=1;
	for(int i=2;i<n;i++)
	a[i]=a[i-1]+a[i-2];
	cout<<"Fabonacci series is \n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
}
