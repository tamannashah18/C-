
#include<iostream>
using namespace std;

int n,cnt=0;
class book
{
	int id,price,yr;
	string name,author,publisher;
	public:
		void input()
		{
			cout<<"ENTER ID:";
			cin>>id;
			cout<<"ENTER BOOK NAME";
			cin>>name;
			cout<<"ENTER AUTHOR NAME";
			cin>>author;
			cout<<"ENTER PUBLISHER NAME";
			cin>>publisher;
			cout<<"ENTER BOOK YEAR";
			cin>>yr;
			cout<<"ENTER BOOK PRICE";
			cin>>price;
		}
		void display()
		{
			cout<<id<<"\t\t"<<name<<"\t\t"<<author<<"\t\t"<<publisher<<"\t\t"<<price<<"\t\t"<<yr<<endl;
		}
		friend void sortbyprice();
		friend void sortbyname();
		 void searchbyname(string val)
		{
			if(name==val)
			{
				cout<<"ID"<<"\t"<<"BOOK NAME"<<"\t"<<"AUTHOR NAME"<<"\t"<<"PUBLISHER NAME"<<"\t\t"<<"PRICE"<<"\t"<<"PUBLISHING YEAR"<<endl;
				display();
				cnt++;
			}
		}
		 void searchbyprice(int l, int u)
		{
			if(l>u)
			{
				if(price<=l && price>=u)
				{
					cout<<"ID"<<"\t"<<"BOOK NAME"<<"\t"<<"AUTHOR NAME"<<"\t"<<"PUBLISHER NAME"<<"\t\t"<<"PRICE"<<"\t"<<"PUBLISHING YEAR"<<endl;
					display();
					cnt++;
				}
			}
			else
			{
				if(price<=u && price>=l)
				{
					cout<<"ID"<<"\t"<<"BOOK NAME"<<"\t"<<"AUTHOR NAME"<<"\t"<<"PUBLISHER NAME"<<"\t\t"<<"PRICE"<<"\t"<<"PUBLISHING YEAR"<<endl;
					display();
					cnt++;
				}

			}
		}
}b[10];

void sortbyprice()
{
	book temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(b[j].price>b[j+1].price)
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	cout<<"RECORDS AFTER SORTING"<<endl;
	cout<<"ID"<<"\t"<<"BOOK NAME"<<"\t"<<"AUTHOR NAME"<<"\t"<<"PUBLISHER NAME"<<"\t\t"<<"PRICE"<<"\t\t"<<"PUBLISHING YEAR"<<endl;

	for(int i=0;i<n;i++)
		b[i].display();
}
void sortbyname()
{
	book temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(b[j].name>b[j+1].name)
			{
				temp=b[j];
				b[j]=b[j+1];
				b[j+1]=temp;
			}
		}
	}
	cout<<"RECORDS AFTER SORTING"<<endl;
	cout<<"ID"<<"\t"<<"BOOK NAME"<<"\t"<<"AUTHOR NAME"<<"\t"<<"PUBLISHER NAME"<<"\t\t"<<"PRICE"<<"\t"<<"PUBLISHING YEAR"<<endl;

	for(int i=0;i<n;i++)
		b[i].display();
}
int main()
{

	string val;
	int ch=0,i=0,l,u;
	while(1)
	{
		cout<<"\nENTER 1 to INSERT"<<endl;
		cout<<"ENTER 2 to DISPLAY ALL RECORDS"<<endl;
		cout<<"ENTER 3 to SORT RECORDS BY PRICE"<<endl;
		cout<<"ENTER 4 to SEARCH BOOK BY BOOK NAME"<<endl;
		cout<<"ENTER 5 to SEARCH BOOK BY PRICE RANGE"<<endl;
		cout<<"ENTER 6 to SORT RECORDS BY BOOK NAME"<<endl;
		cout<<"ENTER 7 to exit";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"ENTER NO OF BOOKS YOU WANT TO ENTER";
				cin>>n;
				for(i=0;i<n;i++)
					b[i].input();
				break;
			case 2:
				cout<<"ID"<<"\t"<<"BOOK NAME"<<"\t"<<"AUTHOR NAME"<<"\t"<<"PUBLISHER NAME"<<"\t\t"<<"PRICE"<<"\t"<<"PUBLISHING YEAR"<<endl;
				for(i=0;i<n;i++)
					b[i].display();
				break;
			case 3:
				sortbyprice();
				break;
			case 4:
				cout<<"ENTER BOOK NAME YOU WANT TO SEARCH";
				cin>>val;
				cnt=0;
				for(i=0;i<n;i++)
					b[i].searchbyname(val);
				if(cnt==0)
					cout<<"no such records exists";
				break;

			case 5:
				cout<<"ENTER PRICE RANGE";
				cin>>l>>u;
				cnt=0;
				for(i=0;i<n;i++)
					b[i].searchbyprice(l,u);
				if(cnt==0)
					cout<<"no such records exists";
				break;
			case 6:
				sortbyname();
				break;
			case 7:
				exit(0);
				break;
			default:
				cout<<"invalid value"<<endl;
		}
	}
return 0;

}



