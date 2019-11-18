// MADE BY-  NAMAN JAIN
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,i,sum=0;
	cout<<"Emter the number of elements\n";
	cin>>n;
	int*ptr;
	ptr=(int*)malloc(n*sizeof(int));
	if(ptr==NULL)
	{
		cout<<"Memory not allocated\n";
		exit(0);
	}
	cout<<"Enter the Elements of array\n";
	for(i=0;i<n;i++)
	{
		cin>>*ptr;
		sum+=*ptr;
	}
	cout<<"Sum : "<<sum;
}
