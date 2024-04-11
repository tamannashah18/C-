#include<iostream>
using namespace std;
int main()
{
	int n,i,temp;
	cout<<"ENTER NUMBER OF ELEMENTS";
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		cout<<"ENTER ELEMENT";
		cin>>a[i];
	}
	cout<<"THE ARRAY"<<endl;
	for(i=0;i<n;i++)
		{
			cout<<a[i]<<"\t";
		}
	int j=n;
	for(i=0;i<n;i++)
			{
				b[i]=a[--j];
			}
	cout<<"\nTHE REVERSED ARRAY"<<endl;
	for(i=0;i<n;i++)
		{
			cout<<b[i]<<"\t";
		}
	return 0;
}
