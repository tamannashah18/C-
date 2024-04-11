#include<iostream>
#include<math.h>
using namespace std;
class calendar
{
	int days_of_mon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

public:
	struct date{
		int d,m,y;
	}d;
	int validity()
		{
			if(leap()==1)
				days_of_mon[2]=29;
			else
				days_of_mon[2]=28;
			if(d.d<=days_of_mon[d.m] && d.d>0 && d.m<13 && d.m>0 && d.y>0)
			{
				cout<<"valid date"<<endl;
				return 1;
			}
			else
				return 0;

		}
	void set_date()
		{
			int v;
			cout<<"ENTER DATE(DD-MM-YYYY)";
			cin>>d.d>>d.m>>d.y;
			v=validity();
			if(v==1)
				cout<<"VALID DATE";
			else
			{
				cout<<"INVALID DATE";
				exit(0);
			}

		}
	void get_date()
	{
		cout<<"Day: "<<d.d<<"Month: "<<d.m<<"Year: "<<d.y<<endl;
	}
	int leap()
	{
		return d.y%4==0 &&d.y%400==0;
	}
	void add_date()
	{
		int add,day,mon,yr;
		cout<<"ENTER NO OF DAYS TO ADD";
		cin>>add;
		day=d.d;
		mon=d.m;
		yr=d.y;
		day+=add;
		if(validity()==1)
		{
			while(day>days_of_mon[d.m])
			{
					day=day-days_of_mon[mon];
					mon++;
					if(mon>12)
					{
						mon=mon-12;
						yr++;
					}
			}
			cout<<"DATE after "<<add<<"days :\n "<<day<<" - "<<mon<<" - "<<yr<<endl;

		}
		else
			cout<<"INVALID DATE"<<endl;
	}
	void no_of_days()
	{
		int m;
		cout<<"ENTER MONTH TO FIND NO OF DAYS IN IT";
		cin>>m;
		cout<<"NO OF DAYS IN THE MONTH IS "<<days_of_mon[m]<<endl;
	}
}obj,obj1;
void date_diff()
{
	if(obj.validity()==1 && obj.validity()==1)
		cout<<"DIFFERENCE IS DAYS:"<<abs(obj1.d.d-obj.d.d)<<" MONTHS "<<abs(obj1.d.m-obj.d.m)<<" YEARS :"<<abs(obj1.d.y-obj.d.y);
	else
		cout<<"invalid dates";
}
int main()
{
	int ch=0,leap;
	while(1)
	{
		cout<<"\nENTER 1 to INSERT DATE"<<endl;
		cout<<"ENTER 2 to CHECK LEAP YEAR"<<endl;
		cout<<"ENTER 3 to RETIRVE DAY"<<endl;
		cout<<"ENTER 4 to RETIRVE MONTH"<<endl;
		cout<<"ENTER 5 to RETIRVE YEAR"<<endl;
		cout<<"ENTER 6 to FIND DIFFERENCE BETWEEN 2 DATES"<<endl;
		cout<<"ENTER 7 to FIND date after certain no. of days"<<endl;
		cout<<"ENTER 8 to FIND date after no. of days in a month"<<endl;
		cout<<"ENTER 9 to exit";
		cin>>ch;
		switch(ch)
		{
			case 1:
				obj.set_date();
				break;
			case 2:
				leap=obj.leap();
				if(leap==1)
					cout<<obj.d.y<<" is a leap year";
				else
					cout<<obj.d.y<<"is NOT a leap year";
				break;
			case 3:
				cout<<"DAY "<<obj.d.d<<endl;
				break;
			case 4:
				cout<<"MONTH "<<obj.d.m<<endl;
				break;
			case 5:
				cout<<"YEAR "<<obj.d.y<<endl;
				break;
			case 6:
				obj1.set_date();
				date_diff();
				break;
			case 7:
				obj.add_date();
				break;
			case 8:
				obj.no_of_days();
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






