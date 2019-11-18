//  MADE BY - NAMAN JAIN
#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
	float a,b,c;
	public:	
		Triangle(float x,float y,float z)
		{
			cout<<"\nTriangle Constructor Invoked!\n";
			a=x;
			b=y;
			c=z;
		}
		float Area(float b,float h)
		{
			return 0.5*b*h;
		}
		float Area()
		{
			return (sqrt(3)*a*a)/4;
		}
		void operator=(Triangle t)
		{
			a=t.a;
			b=t.b;
			c=t.c;
		}
		bool operator== (Triangle t)
		{
			bool b1=false;
			if(t.b==b && t.a==a && t.c==c)
				b1=true; 
			return b1;			
		}
		void show()
		{
			cout<<"\n Sides of the triangle are : "<<a<<" "<<b<<" "<<c;
		}
};
int main()
{
	Triangle Et(3,3,3);
	Et.show();
	cout<<"\n Area of the Triangle is : "<<Et.Area();
	Triangle Rt(3,4,5);
	Rt.show();
	cout<<"\n Area of the Triangle is : "<<Rt.Area(3,4);
	Et=Rt;
	cout<<"\n New Triangle : ";
	Et.show();
	if(Et==Rt)
		cout<<"\n\Both Triangles are Same";
	return 0;
}

