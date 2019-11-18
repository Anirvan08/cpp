#include<iostream>
using namespace std;
int main()
{
	int n,m,l,A[50],B[50],C[100],i=0,j=0,k=0;
	cout<<"\nEnter the Size of First Array: ";
	cin>>n;
	cout<<"\nEnter the elements of First Array(In Ascending Order): ";
	for(int i=0;i<n;i++)
		cin>>A[i];
	cout<<"\nEnter the Size of Second Array: ";
	cin>>m;
	cout<<"\n Enter the elements of Second Array (In Ascending Order): ";
	for(int i=0;i<m;i++)
		cin>>B[i];
	l=m+n;
	while(i<n && j<m)  
{
		if(A[i]<B[j])
			C[k++]=A[i++];
		else if(A[i]>B[j])
			C[k++]=B[j++];
		else if(A[i]==B[j])
		{
			C[k++]=A[i++];
			C[k++]=B[j++];
		}
	}
	while(i<n)
	C[k++]=A[i++];
	while(j<m)
	C[k++]=B[j++];
	cout<<"\nMerged Array in ascending order: ";
	for(int i=0;i<l;i++)
	cout<<C[i]<<' ';
	return 0;
}

