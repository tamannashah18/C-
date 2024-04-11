#include<iostream>
using namespace std;
class strings{
	string s;
public:
	friend istream & operator >>(istream &c,strings &s)
		{
			cout<<"\nENTER STRING:";
			c>>s.s;
			return c;
		}
		friend ostream & operator <<(ostream &c,strings &s)
		{
			c<<s.s<<endl;
			return c;
		}
		void operator~()
		{
			for(int i=0;s[i]!='\0';i++)
			{
				if(s[i]>=65 && s[i]<=90)
					s[i]+=32;
				else if(s[i]>=97 && s[i]<=122)
					s[i]-=32;
			}
		}
};
int main()
{
	strings s;
		cin>>s;
		cout<<"THE STRING IS: ";
		cout<<s;
		~s;
		cout<<"THE TOGGLED STRING IS: ";
		cout<<s;
	return 0;
}



