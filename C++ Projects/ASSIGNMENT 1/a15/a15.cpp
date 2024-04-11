#include<iostream>
using namespace std;
int main()
{
	int n,i,min,max;
	cout<<"ENTER NUMBER OF ELEMENTS";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout<<"ENTER ELEMENT";
		cin>>a[i];
	}
	max=min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>a[i])
			min=a[i];
		if(max<a[i])
			max=a[i];
	}
	cout<<"LARGEST ELEMENT= "<<max<<endl<<"SMALLEST ELEMENT= "<<min;
}
