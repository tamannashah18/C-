#include<iostream>
using namespace std;
class string_class{
public:
	string s1;
	int length;
	void len()
	{
		length=0;
		for(int i=0;s1[i]!='\0';i++)
			length++;
		if(length==0)
			cout<<"invalid string";
	}
	void reverse()
	{
		char rev[100];
		len();
		int i,j=length-1;
		for(i=0;i<length;i++)
		{
			rev[i]=s1[j--];
		}

		for(i=0;i<length;i++)
		{
			cout<<rev[i];
		}

	}
	friend string concate();
	friend void upper();
	friend void lower();
	friend void compare();
	friend string copy();
	friend void palindrome();
}str,str1;

void compare(string_class &obj,string_class &obj1)
{
	obj.len();
	obj1.len();
	int i=0,comp=0;
	for(i=0;i<obj1.length;i++)
	{
		if(obj1.s1[i]!=obj.s1[i])
		{
			cout<<"not equal string"<<endl;
			break;
		}
		else
			comp++;
	}
	if(comp==obj1.length && comp==obj.length)
		cout<<"EQUAL STRINGS"<<endl;
}
void upper(string_class &obj)
{
	obj.len();
	int i;
	for(i=0;i<obj.length;i++)
	{
		if(obj.s1[i]>=91 && obj.s1[i]<=128)
			obj.s1[i]-=32;
	}
	cout<<"STRING IN UPPER CASE: "<<obj.s1<<endl;
}
void lower(string_class &obj)
{

	obj.len();
	int i;
	for(i=0;i<obj.length;i++)
	{
		if(obj.s1[i]>=60 && obj.s1[i]<=95)
			obj.s1[i]+=32;
	}
	cout<<"STRING IN LOWER CASE: "<<obj.s1<<endl;
}
string copy(string_class obj)
{
	string cpy;
	cpy=obj.s1;
	return cpy;
}
string concate(string_class obj,string_class obj1)
{
	return obj.s1 + obj1.s1;
}
void palindrome(string_class obj)
{
	obj.len();
	int i,j=obj.length-1,comp=0;
	char rev[100];
	for(i=0;i<obj.length;i++)
	{
		rev[i]=obj.s1[j--];
	}
	for(i=0;i<obj.length;i++)
		{
			if(obj.s1[i]!=rev[i])
			{
				cout<<"NOT Palindromic string"<<endl;
				break;
			}
			else
				comp++;
		}
	if(comp==obj.length)
		cout<<"PALINDROMIC STRING"<<endl;
}
int main()
{
	int ch=0;
	string s;

	cout<<"ENTER A STRING";
	cin>>str.s1;
	while(ch!=9)
	{
		cout<<"\nENTER 1 find length"<<endl;
		cout<<"ENTER 2 convert into upper case"<<endl;
		cout<<"ENTER 3 convert into lower case"<<endl;
		cout<<"ENTER 4 to compare 2 strings"<<endl;
		cout<<"ENTER 5 to copy 1 string into another"<<endl;
		cout<<"ENTER 6 to concatenate string into another"<<endl;
		cout<<"ENTER 7 to reverse the string"<<endl;
		cout<<"ENTER 8 to check if the string is palindromic"<<endl;
		cout<<"ENTER 9 to exit";
		cin>>ch;
		switch(ch)
		{
			case 1:
				str.len();
				cout<<"length= "<<str.length;
				break;
			case 2:
				upper(str);
				break;
			case 3:
				lower(str);
				break;
			case 4:
				cout<<"enter string 2";
				cin>>str1.s1;
				compare(str,str1);
				break;
			case 5:
				s=copy(str);
				cout<<"Copied string : "<<s<<endl;
				break;
			case 6:
				cout<<"enter string 2";
				cin>>str1.s1;
				s=concate(str,str1);
				cout<<"Concatenated string : "<<s<<endl;
				break;
			case 7 :
				str.reverse();
				break;
			case 8:
				palindrome(str);
				break;
			case 9 :
				exit(0);
				break;
			default:
				cout<<"invalid value"<<endl;

		}
	}
return 0;

}

