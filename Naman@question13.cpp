#include<iostream>
using namespace std;
void Alter(int *n)
{ cout<<"\nEnter the new value";
  cin>>*n;
}
int main()
{int n;
 cout<<"Enter the value of n\n";
 cin>>n;
 cout<<"Value of n Before Altering is "<<n;
 Alter(&n);
 cout<<"Value of n After Altering is "<<n;
 return 0;
}
