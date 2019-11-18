#include<iostream>
using namespace std;
int main()
{
	float n=0, i=1, s=0;
	cout<<"Enter the number of terms\n";
	cin>>n;
	while(i<=n){
	s+=1/i;
	i++;
     
}
 cout<<"\nSum of Series is : "<<s;
}
