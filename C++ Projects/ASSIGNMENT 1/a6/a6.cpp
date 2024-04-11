#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"enter 2 nos:";
	cin>>a>>b;
	cout<<"BEFORE SWAP\nA="<<a<<" B="<<b;

	temp=a;
	a=b;
	b=temp;
	cout<<"\nAFTER SWAP\nA="<<a<<" B="<<b;
	return 0;
}
