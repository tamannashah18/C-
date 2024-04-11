#include<iostream>
using namespace std;
class CString{
	string s;
public:
		friend istream & operator >>(istream &c,CString &s)
		{
			cout<<"\nENTER STRING:";
			c>>s.s;
			return c;
		}
		friend ostream & operator <<(ostream &c,CString &s)
		{
			c<<s.s<<endl;
			return c;
		}
		void operator ==(CString &s1)
		{
			if(s==s1.s)
				cout<<"EQUAL STRINGS"<<endl;
			else
				cout<<"UNEQUAL STRINGS"<<endl;
		}
		void operator >=(CString &s1)
		{
			if(s>=s1.s)
				cout<<s<<" IS GREATER OR EQUAL TO "<<s1.s<<endl;
			else
				cout<<s1.s<<" IS GREATER OR EQUAL TO "<<s<<endl;
		}
		void operator <=(CString &s1)
		{
			if(s<=s1.s)
				cout<<s<<" IS LESS OR EQUAL TO "<<s1.s<<endl;
			else
				cout<<s1.s<<" IS LESS OR EQUAL TO "<<s<<endl;
		}
		void operator <(CString &s1)
		{
			if(s<s1.s)
				cout<<s<<" IS LESS THAN "<<s1.s<<endl;
			else if(s1.s<s)
				cout<<s1.s<<" IS LESS THAN "<<s<<endl;
			else
				cout<<"EQUAL STRINGS"<<endl;
		}
		void operator >(CString &s1)
		{
			if(s>s1.s)
				cout<<s<<" IS GREATER THAN "<<s1.s<<endl;
			else if(s<s1.s)
				cout<<s1.s<<" IS GREATER THAN "<<s<<endl;
			else
				cout<<"EQUAL STRINGS"<<endl;
		}
		void operator !=(CString &s1)
		{
			if(s!=s1.s)
				cout<<"UNEQUAL STRINGS"<<endl;
			else
				cout<<"EQUAL STRINGS"<<endl;
		}
};
int main()
{
		CString s,s1;
		cin>>s;
		cout<<"THE 1st STRING IS: ";
		cout<<s;
		cin>>s1;
		cout<<"THE 2nd STRING IS: ";
		cout<<s1;
		s==s1;
		s>=s1;
		s<=s1;
		s>s1;
		s<s1;
		s!=s1;
	return 0;
}



