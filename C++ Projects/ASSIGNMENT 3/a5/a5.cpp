#include<iostream>
using namespace std;
class binary{
	float s;
public:
	friend istream & operator >>(istream &c,binary &s)
		{
			cout<<"\nENTER NUMBER:";
			c>>s.s;
			return c;
		}
		friend ostream & operator <<(ostream &c,binary &s)
		{
			c<<s.s<<endl;
			return c;
		}
		void operator +(binary &s1)
		{
			cout<<"ADDITION IS : "<<s+s1.s<<endl;
		}
		void operator -(binary &s1)
		{
			cout<<"DIFFERENCE IS : "<<s-s1.s<<endl;
		}
		void operator *(binary &s1)
		{
			cout<<"PRODUCT IS : "<<s*s1.s<<endl;
		}
		void operator /(binary &s1)
		{
			cout<<"QUOTIENT IS : "<<s/s1.s<<endl;
		}

};
int main()
{
		binary s,s1;
		cin>>s;
		cout<<"THE 1st NUMBER IS: ";
		cout<<s;
		cin>>s1;
		cout<<"THE 2nd NUMBER IS: ";
		cout<<s1;
		s+s1;
		s-s1;
		s*s1;
		s/s1;
	return 0;
}



