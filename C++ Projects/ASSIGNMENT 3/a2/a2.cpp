#include<iostream>
using namespace std;
class times{
	int h,m,s;
public:
	friend istream & operator >>(istream &c,times &t)
	{
		cout<<"\nENTER HOURS:";
		c>>t.h;
		cout<<"ENTER MINUTES:";
		c>>t.m;
		cout<<"ENTER SECONDS:";
		c>>t.s;
		return c;
	}
	friend ostream & operator <<(ostream &c,times &t)
	{
		c<<"\nHOURS: MINUTES: SECONDS =  "<<t.h<<t.m<<t.s;
		return c;
	}
	void operator==(times t)
	{
		if(h==t.h && t.m==m && t.s==s)
			cout<<"\nEQUAL TIME\n";
		else
			cout<<"\nNOT EAUAL TIME";
	}
};
int main()
{
	times t;
	cin>>t;
	cout<<t;
	times t1;
	cin>>t1;
	cout<<t1;
	t1==t;
	return 0;
}




