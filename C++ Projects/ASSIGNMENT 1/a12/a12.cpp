#include<iostream>
using namespace std;
int main()
{
	int n,sum=0,i;
	float avg;
	cout<<"ENTER NUMBER OF ELEMENTS";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cout<<"ENTER ELEMENT";
		cin>>a[i];
		sum+=a[i];
	}
	avg=sum/n;
	cout<<"SUM= "<<sum<<endl<<"AVERAGE= "<<avg;
	return 0;
}
