#include<iostream>
using namespace std;
int main()
{
	int i,a,prime=0,j,cnt,sum=0;
	cout<<"ENTER N";
	cin>>a;
	for(i=1;prime!=a;i++)
	{
		cnt=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				cnt++;
		}
		if(cnt==2)
		{
			sum+=i;
			prime++;
		}
	}
	cout<<"\nSUM = "<<sum;
	return 0;
}
