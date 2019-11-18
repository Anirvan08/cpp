#include<iostream>
void swap(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
using namespace std;
int main()
{ int p,q;
cout<<" Enter Two Numbers:\n";
cin>>p>>q;
cout<<" Numbers Before Swaping are :\n";
cout<<"A = "<<p<<"  "<<" B = "<<q<<endl;
swap(p,q);
cout<<" Numbers After Swaping are :\n";
cout<<"A = "<<p<<" B = "<<q<<endl;
return 0;}
