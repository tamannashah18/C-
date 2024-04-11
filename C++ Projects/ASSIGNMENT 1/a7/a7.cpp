#include<iostream>
using namespace std;
int main()
{
	int i,a,fact=1;
	cout<<"ENTER NUMBER TO FIND ITS FACTORIAL"<<endl;
	cin>>a;
	for(i=a;i>0;i--)
	{
		fact*=i;
	}
	cout<<"FACTORIAL OF "<<a<<" IS "<<fact;
	return 0;
}
