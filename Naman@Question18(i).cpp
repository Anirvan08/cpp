// MADE BY-  NAMAN JAIN
#include<iostream>
int fabonacci(int);
using namespace std;
int main()
{
	int n,i=0;
	cout<<"Enter the no. of terms of the series\n";
	cin>>n;
	cout<<"Fabonacci Series is : \n";
	while(i<n)
	{
	cout<<fabonacci(i)<<" ";
	i++;}
	return 0;
}
int fabonacci(int n)
{
	if((n==1)||(n==0))
	return(n);
	else
	return(fabonacci(n-1)+fabonacci(n-2));
}

