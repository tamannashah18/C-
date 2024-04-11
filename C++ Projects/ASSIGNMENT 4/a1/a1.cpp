/*1. Design a class called "Vehicle" which contains appropriate data members. Design
a class "two-Wheeler" from vehicle which contains data member’s distance and
mileage. Use overloading techniques. Assume further classes for inheritance and
demonstrate the use of Multi-level inheritance for the above problem.
 */
#include<iostream>
using namespace std;
int sco=0,bik=0,i;
void count(int);
class vehicle{
public:
	string brand,model,engine;
	float price;
	int stock;
	void set()
	{
		cout<<"Enter Brand: ";
		cin>>brand;
		cout<<"Enter Model: ";
		cin>>model;
		cout<<"Enter Engine: ";
		cin>>engine;
		cout<<"Enter Price: ";
		cin>>price;
		cout<<"Enter Stock: ";
		cin>>stock;
	}
	void get()
	{
		cout<<"Brand: "<<brand<<endl;
		cout<<"Model: "<<model<<endl;
		cout<<"Engine type: "<<engine<<endl;
		cout<<"Price: "<<price<<endl;
		cout<<"Stock remaining: "<<stock<<endl;
	}
};
class two_wheeler:public vehicle
{
	float dist,mil;
public:
	void set2()
	{
		cout<<"ENTER DISTANCE";
		cin>>dist;
		cout<<"ENTER MILEAGE";
		cin>>mil;
	}
	void get2()
	{
		get();
		cout<<"Distance: "<<dist<<endl;
		cout<<"Mileage: "<<mil<<endl;
	}
};
class scooty:public two_wheeler
{
	string colour[5]={"silver","blue","black","white","pink"};
	int col;
public:
	 void setS()
	{
		cout<<"ENTER COLOUR NO."<<endl;
		for(int i=0;i<5;i++)
			cout<<i<<" - "<<colour[i]<<"\t";
		cin>>col;
		if(col<0 || col>5)
			cout<<"INVALID INPUT";
		else
		{
			set();
			set2();
			count(1);
		}
	}
	 void getS()
	 {
		 get2();
		 cout<<"Colour: "<<colour[col]<<endl;
	 }

}s[5];
class bike:public two_wheeler
{
	string colour[4]={"silver","blue","black","white"};
	int col;
public:
	 void setB()
	{
		cout<<"ENTER COLOUR NO."<<endl;
		for(int i=0;i<4;i++)
			cout<<i<<" - "<<colour[i]<<"\t";
		cin>>col;
		if(col<0 || col>3)
			cout<<"INVALID INPUT";
		else
		{
			set();
			set2();
			count(2);
		}
	}
	 void getB()
	 {
		 get2();
		 cout<<"Colour: "<<colour[col]<<endl;
	 }
}b[5];
void count(int a)
{
	switch(a)
	{
		case 1:sco++;break;
		case 2:bik++;break;
	}
}
int main()
{
	int ch,veh,cnt=0,j;
	string mod;
	while(1)
	{
		cout<<"\nENTER 1 for INSERTING"<<endl;
		cout<<"ENTER 2 for DISPLAY"<<endl;
		cout<<"ENTER 3 for SEARCH BY MODEL NAME"<<endl;
		cout<<"ENTER 4 for DELETE DATA"<<endl;
		cout<<"ENTER 5 for EXIT"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nENTER 1 for SCOOTER"<<endl;
				cout<<"ENTER 2 for BIKE"<<endl;
				cin>>veh;
				switch(veh)
				{
					case 1:
						s[sco].setS();
						break;
					case 2:
						b[bik].setB();
						break;
					default:
						cout<<"INVALID INPUT"<<endl;
				}
				break;
			case 2:
					cout<<"\nENTER 1 for SCOOTER"<<endl;
					cout<<"ENTER 2 for BIKE"<<endl;
					cout<<"ENTER 3 for ALL VEHICLES"<<endl;
					cin>>veh;
					switch(veh)
					{
						case 1:
							for(i=0;i<sco;i++)
							{
								cout<<i+1<<endl;
								s[i].getS();
							}
							break;
						case 2:
							for(i=0;i<bik;i++)
							{
								cout<<i+1<<endl;
								b[i].getB();
							}
							break;
						case 3:
							cout<<"---------SCOOTY--------\n";
							for(i=0;i<sco;i++)
							{
								cout<<i+1<<endl;
								s[i].getS();
							}
							cout<<"---------BIKE--------\n";
							for(i=0;i<bik;i++)
							{
								cout<<i+1<<endl;
								b[i].getB();
							}
							break;
						default:
							cout<<"INVALID INPUT"<<endl;
							break;
					}
					break;
				case 3:
					cout<<"\nENTER 1 for SCOOTER"<<endl;
					cout<<"ENTER 2 for BIKE"<<endl;
					cin>>veh;
					cout<<"ENTER MODEL NAME";
					cin>>mod;
					cnt=0;
					switch(veh)
					{
						case 1:
							for(i=0;i<sco;i++)
							{
								if(mod==s[i].model)
								{
									s[i].getS();
									cnt++;
								}
							}
							break;
						case 2:
							for(i=0;i<bik;i++)
							{
								if(mod==b[i].model)
								{
									cnt++;
									b[i].getB();
								}
							}
							break;
						default:
							cout<<"INVALID INPUT"<<endl;
							cnt++;
							break;
					}
					if(cnt==0)
						cout<<"NO SUCH DATA EXISTS"<<endl;
					break;
				case 4:
					cout<<"\nENTER 1 for SCOOTER"<<endl;
					cout<<"ENTER 2 for BIKE"<<endl;
					cin>>veh;
					cout<<"ENTER MODEL NAME";
					cin>>mod;
					cnt=0;
					switch(veh)
					{
					case 1:
						for(i=0;i<sco;i++)
						{
							if(mod==s[i].model)
							{
								cnt++;
								for(j=i;j<sco-1;j++)
								{
									s[j]=s[j+1];
								}
								sco--;
								break;
							}
						}
						break;
					case 2:
						for(i=0;i<bik;i++)
						{
							if(mod==b[i].model)
							{
								cnt++;
								for(j=i;j<bik-1;j++)
								{
									b[j]=b[j+1];
								}
								bik--;
								break;
							}
						}
						break;
					default:
						cout<<"INVALID INPUT"<<endl;
						cnt++;
						break;

					}
					if(cnt==0)
						cout<<"NO SUCH DATA EXISTS"<<endl;
					break;
					case 5:
						exit(0);
						break;
					default:
						cout<<"INVALID INPUT"<<endl;
						break;
		}
	}
	return 0;
}
