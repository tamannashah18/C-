#include<iostream>
using namespace std;
int pat=0,i,ip=0,op=0;
void count();
class patient
{
public:
	string name,gender;
	int age,ph,id;
	void set()
	{
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter gender: ";
		cin>>gender;
		cout<<"Enter id: ";
		cin>>id;
		cout<<"Enter age: ";
		cin>>age;
		cout<<"Enter phone number: ";
		cin>>ph;
	}
	void get()
	{
		cout<<"name: "<<name<<endl;
		cout<<"gender: "<<gender<<endl;
		cout<<"id type: "<<id<<endl;
		cout<<"age: "<<age<<endl;
		cout<<"phone number: "<<ph<<endl;
	}
};
class IPD
{
	public:
	int ward,bed,charge=3500,extra;
	void set2()
	{
		cout<<"Enter ward no.";
		cin>>ward;
		cout<<"Enter bed no.";
		cin>>bed;
		cout<<"Enter extra charges";
		cin>>extra;
	}
	void get2()
	{
		cout<<"Ward no.: "<<ward<<endl;
		cout<<"bed no.: "<<bed<<endl;
		cout<<"Charge per day: "<<charge<<endl;
		cout<<"Extra charges: "<<extra<<endl;
	}
};
class IPD_PATIENT:public patient,public IPD
{
	int days,total;
public:
	void set3()
	{
		set();
		set2();
		cout<<"Enter no of days admitted";
		cin>>days;
		total=extra+charge*days;
		count();
	}
	void get3()
	{
		get();
		get2();
		cout<<"Days admitted: "<<days<<endl;
		cout<<"Total Charge : "<<total<<endl;
	}
}ipd[5];
void count()
{
	ip++;
}
void sort()
{
	IPD_PATIENT t;
	for(i=0;i<ip-1;i++)
	{
		for(int j=0;j<ip-i-1;j++)
		{
			if(ipd[j].age>ipd[j+1].age)
			{
				t=ipd[j];
				ipd[j]=ipd[j+1];
				ipd[j+1]=t;
			}
		}
	}
}
int main()
{
	int ch,cnt=0,j;
	string name;
	while(1)
	{
		cout<<"\nENTER 1 for INSERTING"<<endl;
		cout<<"ENTER 2 for DISPLAY"<<endl;
		cout<<"ENTER 3 for SEARCH BY NAME"<<endl;
		cout<<"ENTER 4 for DELETE DATA"<<endl;
		cout<<"ENTER 5 for SORT DATA by age"<<endl;
		cout<<"ENTER 6 for EXIT"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				ipd[ip].set3();
				break;
			case 2:
				for(i=0;i<ip;i++)
				{
					cout<<i+1<<endl;
					ipd[i].get3();
				}
				break;
			case 3:
					cout<<"ENTER PATIENT NAME";
					cin>>name;
					cnt=0;
					for(i=0;i<ip;i++)
					{
						if(name==ipd[i].name)
						{
							ipd[i].get3();
							cnt++;
						}
					}
					if(cnt==0)
						cout<<"NO SUCH DATA EXISTS"<<endl;
					break;
				case 4:
					cout<<"ENTER PATIENT NAME";
					cin>>name;
					cnt=0;
						for(i=0;i<ip;i++)
						{
							if(name==ipd[i].name)
							{
								cnt++;
								for(j=i;j<ip-1;j++)
								{
									ipd[j]=ipd[j+1];
								}
								ip--;
								break;
							}
						}
					if(cnt==0)
						cout<<"NO SUCH DATA EXISTS"<<endl;
					break;
					case 5:
						sort();
						cout<<"sorted data\n";
						for(i=0;i<ip;i++)
						{
							cout<<i+1<<endl;
							ipd[i].get3();
						}
						break;
					case 6:
						exit(0);
						break;
					default:
						cout<<"INVALID INPUT"<<endl;
						break;
		}
	}
	return 0;
}

