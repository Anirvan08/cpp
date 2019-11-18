#include<iostream>
using namespace std;
int main()
{
	int n, s=0;
	cout<<"Enter the no. of terms:\n";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	if(i%2==0)
		s-=i;
		else
		s+=i;
	}
	cout<<"\nSum of the series is: "<<s;
}
