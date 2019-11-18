//   MADE BY NAMAN JAIN
#include<iostream>
using namespace std;
class BOX
{
		float l,b,h;
	public:
		BOX()
		{
			l=1;
			b=1;
			h=1;
			cout<<"\n New Box Created\n";
		}
		void set()
		{
			cout<<"Enter length : ";
			cin>>l;
			cout<<"\nEnter breadth : ";
			cin>>b;
			cout<<"\nEnter height : ";
			cin>>h;
		}
		float S_Area()
		{
			return 2*(l*b+b*h+h*l);
		}
		float Volume()
		{
			return l*b*h;
		}	
		void operator++()
		{
			++l;
			++b;
			++h;
			cout<<"\n Incremented values of box: ";
			show();
		}
		void operator++(int)
		{
			l++;
			b++;
			h++;
			cout<<"\n Incremented values of box: ";
			show();
		}
		void operator--()
		{
			--l;
			--b;
			--h;
			cout<<"\n Decremented values of box: ";
			show();
		}
		void operator--(int)
		{
			l--;
			b--;
			h--;
			cout<<"\n Decremented values of box: ";
			show();
		}
		friend bool operator==(BOX b1,BOX b2);
		void operator=(BOX b1)
		{
			l=b1.l;
			b=b1.b;
			h=b1.h;
			cout<<"\n Modified values of box: ";
			show();
		}
		void check_cube()
		{
			if(l==b && l==h)
				cout<<"\n Box created is a cube.";
			else
				cout<<"\n Box created is a cuboid.";
		}
		void show()
		{
			cout<<"\n Length: "<<l;
			cout<<"\t Breadth: "<<b;
			cout<<"\t Height: "<<h;
		}
};
bool operator==(BOX b1,BOX b2)
{
	return(b1.l==b2.l && b1.b==b2.b && b1.h==b2.h);	
}

int main()
{
	BOX c;
	c.set();
	c.check_cube();
	cout<<"\n Surface Area: "<<c.S_Area();
	cout<<"\n Volume: "<<c.Volume();
	++c;
	c++;
	--c;
	c--;
	BOX cb;
	cb.set();
	cb.check_cube();
	cout<<"\n Surface Area: "<<cb.S_Area();
	cout<<"\n Volume: "<<cb.Volume();
	if(cb==c)
		cout<<"\n Both boxes are equal.";
	else
		cout<<"\n Both boxes are not equal.";
	cb=c;
	if(cb==c)
		cout<<"\n Both boxes are equal.";
	else
		cout<<"\n Both boxes are not equal.";
	return 0;
}

