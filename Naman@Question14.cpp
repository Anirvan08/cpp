#include<iostream>
using namespace std;
void circle(double r);
int main()
{
	double R;
	cout<<"Enter the radius of circle\n";
	cin>>R;
	 circle(R);	
}
void circle(double r)
{
	cout<<"Area of circle is ";
	double a=3.14*r*r;
	cout<<a;
	  double c=2*3.14*r;
	 cout<<"\nCircumference of the circle is "<<c;
}
