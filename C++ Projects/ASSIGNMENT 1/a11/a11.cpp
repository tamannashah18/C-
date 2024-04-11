#include<iostream>
using namespace std;
int main()
{
	string a;
	int i,v=0;
	cout<<"enter a string";
	cin>>a;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
			v++;

	}
	cout<<"vowels in string "<<a<<" = "<<v;
	return 0;
}
