#include<iostream>
using namespace std;
class abc{
	public:
	int a,b,c;
		abc()
		{
			a=b=c=10;
		}
};
class space{
	
public:
int x,y,z;
	void setdata(int a,int b, int c)
	{
		x=a;
		y=b;
		z=c;
	}
	void display()
	{
		cout<<"X = "<<x<<" Y = "<<y<<" Z = "<<z<<endl;
	}
	//void operator -();
	friend space operator -(space s);
	friend void operator -();

};

void operator -(space y,abc x)
{
	x=x.a;
	y=x.b;
	z=x.c;

}
space operator -(space s)
{

	s.y=-s.y;
	s.z=-s.z;
	s.x=-s.x;
	return s;
}
int main()
{
	space x,y;
	x.setdata(-20,20,30);
	cout<<"obj ";
	x.display();
	y=-x;
	
	x.display();
	y.display();
	abc a;
	y-a;
	y.display();
	return 0;
}
