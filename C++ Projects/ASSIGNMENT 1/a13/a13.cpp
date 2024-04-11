#include<iostream>
using namespace std;
int main()
{
	int n,i,temp;
	cout<<"ENTER NUMBER OF ELEMENTS";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout<<"ENTER ELEMENT";
		cin>>a[i];
	}
	cout<<"THE ELEMENTS BEFORE SWAP"<<endl;
	for(i=0;i<n;i++)
		{
			cout<<a[i]<<"\t";
		}
	temp=a[n-1];
	a[n-1]=a[0];
	a[0]=temp;
	cout<<"\nTHE ELEMENTS AFTER SWAP"<<endl;
	for(i=0;i<n;i++)
		{
			cout<<a[i]<<"\t";
		}
	return 0;
}
