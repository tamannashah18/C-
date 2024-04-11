#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter a no to see wether it is signer unsigned or zero";
	cin>>a;
	if(a>0)
		cout<<"POSITIVE";
	else if(a==0)
		cout<<"ZERO";
	else
		cout<<"NEGATIVE";
	return 0;
}
