#include<iostream>
using namespace std;
int main()
{
	float l,b,area,peri;
	cout<<"ENTER LENGTH AND BREADTH OF A RECTANGLE:";
	cin>>l>>b;
	area=l*b;
	peri=2*(l+b);
	cout<<"AREA="<<area<<"\nPERIMETER="<<peri;
	return 0;
}
