#include<iostream>
using namespace std;
int main()
{
	int A[10];
	int *p=A;
	cout<<"\n Enter the 10 integers : ";
	for(int i=0;i<10;i++)
	{
		cin>>*(p+i);
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<9-i;j++)
		{
			if(*(p+j)>*(p+j+1))
			{
				int temp=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp;
			}
		}
	} 
    cout<<"\n The sorted array in ascending order is(using pointers) : ";
	for(int i=0;i<10;i++)
	{cout<<*(p+i)<<" ";
	}
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<9-i;j++)
		{
			if(*(p+j)<*(p+j+1))
			{
				int temp=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=temp;
			}
		}
	}
	//bubble sort method used 
    cout<<"\n The sorted array in descending order is(using pointers) : ";
	for(int i=0;i<10;i++)
	{
	cout<<*(p+i)<<" ";
    }
	return 0;
}
