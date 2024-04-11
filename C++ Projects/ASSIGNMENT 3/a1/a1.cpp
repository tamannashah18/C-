#include<iostream>
#include<stdio.h>
using namespace std;
class matrix
{
	int r,c,*a;
public:
	matrix(int row, int col)
	{
		r=row;
		c=col;
		a=new int(r*c);
	}
	void input()
	{
		for(int i=0;i<r*c;i++)
		{
			cin>>a[i];
		}
	}
	void display()
	{
		for(int i=0;i<r*c;i++)
		{
			cout<<a[i]<<" ";
			if(i!=0 && c%(i+1)==0)
				cout<<endl;
		}
	}
	matrix operator +(matrix M)
	{
		matrix m(r,c);
		for(int i=0;i<r*c;i++)
		{
				m.a[i]=M.a[i]+a[i];
		}
		return m;
	}
};
int main()
{
	int row,col;
	cout<<"ENTER SIZE OF ARRAY (ROWS AND COLUMS)";
	cin>>row>>col;
	matrix m1(row,col),m2(row,col),m3(row,col);
	cout<<"INPUT ARRAY 1"<<endl;
	m1.input();
	cout<<"INPUT ARRAY 2"<<endl;
	m2.input();
	cout<<"\nARRAY 1:"<<endl;
	m1.display();
	cout<<"\nARRAY 2:"<<endl;
	m2.display();
	cout<<"\nADDED ARRAY"<<endl;
	m3=m1+m2;
	m3.display();
	return 0;
}
