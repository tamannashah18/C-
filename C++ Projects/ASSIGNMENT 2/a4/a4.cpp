#include<iostream>
using namespace std;
class Employee
{
	public:
		int code;
		float basic,hra,da;
		string name,desig,dept;
		struct date
		{
			int d,m,y;
		}dob,doj,exp;
		void input()
		{
			cout<<"ENTER ID";
			cin>>code;
			cout<<"ENTER NAME";
			cin>>name;
			cout<<"ENTER DESIGNATION";
			cin>>desig;
			cout<<"ENTER DEPARTMENT";
			cin>>dept;
			cout<<"ENTER BASIC SALARY";
			cin>>basic;
			cout<<"ENTER JOINING DATE(dd-mm-yyyy)";
			cin>>doj.d>>doj.m>>doj.y;
			cout<<"ENTER BIRTH DATE(dd-mm-yyyy)";
			cin>>dob.d>>dob.m>>dob.y;
			if(basic<0)
				cout<<"invalid input\n";

			else if(basic<30000)
			{

				da=basic*6/10;
				hra=basic*2/10;
			}
			else if(basic>30000 && basic<45000)
			{

				da=basic*7/10;
				hra=basic*3/10;
			}
			else
			{

				da=basic*4/10;
				hra=basic*85/100;
			}
		}
		void display()
		{
			cout<<"\nID: "<<code<<endl;
			cout<<"NAME: "<<name<<endl;
			cout<<"DESIGNATION:  "<<desig<<endl;
			cout<<"DEPARTMENT: "<<dept<<endl;
			cout<<"BASIC SALARY: "<<basic<<endl;
			cout<<"DA: "<<da<<endl;
			cout<<"HRA: "<<hra<<endl;
			cout<<"JOINING DATE(dd-mm-yyyy): "<<doj.d<<"-"<<doj.m<<"-"<<doj.y<<endl;
			cout<<"BIRTH DATE(dd-mm-yyyy): "<<dob.d<<"-"<<dob.m<<"-"<<dob.y<<endl;
		}
		void total()
		{
			float total;
			total=basic+hra+da;
			cout<<"EMPLOYEE NAME: "<<name<<endl;
			cout<<"EMPLOYEE CODE: "<<code<<endl;
			cout<<"TOTAL SALARY :"<<total;
		}
		void totalexp(int d,int m,int y)
		{
			int day,month,year;
			if(doj.d>d)
				day=doj.d-d;
			else
				day=d-doj.d;

			if(doj.m>m)
				month=doj.m-m;
			else
				month=m-doj.m;
			if(doj.y>y)
				cout<<"invalid input"<<endl;
			else
				year=y-doj.y;
			if(day>30)
			{
				day=0;
				month++;
			}
			if(month>12)
			{
				month=0;
				year++;
			}
			exp.d=day;
			exp.m=month;
			exp.y=year;
		}

}e[10];

int main()
{
	int ch=0,i=0,n,d,m,y;
	float avg;
	while(ch!=9)
	{
		cout<<"\nENTER 1 to INSERT"<<endl;
		cout<<"ENTER 2 to DISPLAY"<<endl;
		cout<<"ENTER 3 to TOTAL SALARY"<<endl;
		cout<<"ENTER 4 to find EMPLOYEES WHO WORK IN SALES DEPT."<<endl;
		cout<<"ENTER 5 to calculate TOTAL EXPERIENCE"<<endl;
		cout<<"ENTER 6 to search the employees with more than 5 years of experience"<<endl;
		cout<<"ENTER 7 to exit";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"ENTER NO OF EMPLOYEES YOU WANT TO ENTER";
				cin>>n;
				for(i=0;i<n;i++)
					e[i].input();
				break;
			case 2:
				for(i=0;i<n;i++)
					e[i].display();
				break;
			case 3:
				for(i=0;i<n;i++)
					e[i].total();
				break;
			case 4:
				for(i=0;i<n;i++)
				{
					if(e[i].dept=="sales")
						e[i].display();
				}
				break;
			case 5:
				printf("ENTER CURRENT DATE (dd-mm-yyyy)");
				cin>>d>>m>>y;
				for(i=0;i<n;i++)
				{
					e[i].totalexp(d,m,y);
					cout<<"EXPIRIENCE IS : "<<e[i].exp.d<<" DAYS"<<e[i].exp.m<<" MONTHS"<<e[i].exp.y<<" YEARS"<<endl;
				}
				break;
			case 6:
				printf("ENTER CURRENT DATE (dd-mm-yyyy)");
				cin>>d>>m>>y;
				for(i=0;i<n;i++)
					e[i].totalexp(d,m,y);
				for(i=0;i<n;i++)
				{
					if(e[i].exp.y>5)
					{
						e[i].display();
						cout<<"EXPIRIENCE IS : "<<e[i].exp.d<<" DAYS"<<e[i].exp.m<<" MONTHS"<<e[i].exp.y<<" YEARS"<<endl;
					}
				}
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



