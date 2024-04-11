#include<iostream>
using namespace std;
class array{
public:
	int n,a[100];
	void display()
	{
		int i;
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<"\t";
		}
	}
	void insert()
	{
		int i;
		for(i=0;i<n;i++)
		{
			cout<<"enter value";
			cin>>a[i];
		}
		cout<<"array elements"<<endl;
		display();

	}
	void search()
		{
			int i,temp,cnt=0;
			cout<<"enter value to be searched";
			cin>>temp;
			for(i=0;i<n;i++)
			{
				if(a[i]==temp)
				{
					cout<<"The element "<<a[i]<<" is at index "<<i<<endl;
					cnt++;
				}
			}
			if(cnt==0)
				cout<<"no such element exists";
		}
	void sort()
	{
		int i,j,temp;
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		cout<<"sorted array elements"<<endl;
		display();
	}
	int sum()
	{
		int i,sum=0;
		for(i=0;i<n;i++)
		{
			sum+=a[i];
		}
		return sum;
	}
	void max()
	{
		int i,max=a[0];
		for(i=0;i<n;i++)
		{
			if(max<a[i])
				max=a[i];
		}
		cout<<"GREATEST ELEMENT = "<<max<<endl;
	}
	void min()
	{
		int i,min=a[0];
		for(i=0;i<n;i++)
		{
			if(min>a[i])
				min=a[i];
		}
		cout<<"LOWEST ELEMENT = "<<min<<endl;

	}
	void swap()
	{
		int temp;
		cout<<"ELEMENTS BEFORE SWAP"<<endl;
		display();
		temp=a[0];
		a[0]=a[n-1];
		a[n-1]=temp;
		cout<<"\nELEMENTS AFTER SWAP"<<endl;
		display();
	}
}a;
int main()
{
	int ch=0,s;
	float avg;
	cout<<"enter size of the array";
	cin>>a.n;
	while(ch!=9)
	{
		cout<<"\nENTER 1 to INSERT"<<endl;
		cout<<"ENTER 2 to SEARCH"<<endl;
		cout<<"ENTER 3 to SORT"<<endl;
		cout<<"ENTER 4 to find SUM"<<endl;
		cout<<"ENTER 5 to find AVERAGE"<<endl;
		cout<<"ENTER 6 to find GREATEST ELEMENT"<<endl;
		cout<<"ENTER 7 to LOWEST ELEMENT"<<endl;
		cout<<"ENTER 8 to SWAP FIRST AND LAST ELEMENT"<<endl;
		cout<<"ENTER 9 to exit";
		cin>>ch;
		switch(ch)
		{
			case 1:
				a.insert();
				break;
			case 2:
				a.search();
				break;
			case 3:
				a.sort();
				break;
			case 4:
				s=a.sum();
				cout<<"SUM OF ALL ELEMENTS"<<s<<endl;
				break;
			case 5:
				s=a.sum();
				avg= s/a.n;
				cout<<"AVERAGE OF ALL ELEMENTS"<<avg<<endl;
				break;
			case 6:
				a.max();
				break;
			case 7:
				a.min();
				break;
			case 8:
				a.swap();
				break;
			case 9:
				exit(0);
				break;
			default:
				cout<<"invalid value"<<endl;
		}
	}
return 0;

}






