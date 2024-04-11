/* Develop a program for class date and time and include all its functionalities.
a. Date.
b. Time.
c. Format Date.
d. Difference between 2 dates.
e. Check Leap year.
f. Retrieve Day.
g. Retrieve Month.
h. Retrieve Year.
i. Retrieve Hour.
j. Retrieve Minute.
k. Retrieve Second.*/
#include<iostream>
#include<math.h>
using namespace std;
class date_time
{

public:
	struct date{
		int d,m,y;
	}d;
	struct time{
		int h,m,s;
	}t;
	void set_date()
		{
		cout<<"ENTER DATE(DD-MM-YYYY)";
			cin>>d.d>>d.m>>d.y;
		}
	void set_time()
		{
			cout<<"ENTER TIME(HH:MM:SS)";
			cin>>t.h>>t.m>>t.s;
		}
	void get_date()
	{
		cout<<"Day: "<<d.d<<"Month: "<<d.m<<"Year: "<<d.y<<endl;
	}
	void get_time()
		{
			cout<<"Hour: "<<t.h<<"Minute: "<<t.m<<"Seconds: "<<t.s<<endl;
		}
	void format()
	{
		int ch;
		cout<<"ENTER 1 for DD-MM-YYYY"<<endl;
		cout<<"ENTER 2 for MM-DD-YYYY"<<endl;
		cout<<"ENTER 3 for YYYY-MM-DD"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:
			cout<<"Day: "<<d.d<<"Month: "<<d.m<<"Year: "<<d.y<<endl;
			break;
		case 2:
			cout<<"Month: "<<d.m<<"Day: "<<d.d<<"Year: "<<d.y<<endl;
			break;
		case 3:
			cout<<"Year: "<<d.y<<"Month: "<<d.m<<"Day: "<<d.d<<endl;
			break;
		default:
			cout<<"invalid input";
			break;
		}
	}

	void leap()
	{
		if(d.y%4==0 || d.y%400==0)
			cout<<d.y<<" is a leap year";
		else
			cout<<d.y<<"is NOT a leap year";
	}
}obj,obj1;
void date_diff()
{
	cout<<"DIFFERENCE IS DAYS:"<<abs(obj1.d.d-obj.d.d)<<" MONTHS "<<abs(obj1.d.m-obj.d.m)<<" YEARS :"<<abs(obj1.d.y-obj.d.y);
}
int main()
{
	int ch=0;
	while(1)
	{
		cout<<"\nENTER 1 to INSERT DATE"<<endl;
		cout<<"ENTER 2 to INSERT TIME"<<endl;
		cout<<"ENTER 3 to FORMAT DATE"<<endl;
		cout<<"ENTER 4 to CHECK LEAP YEAR"<<endl;
		cout<<"ENTER 5 to RETIRVE DAY"<<endl;
		cout<<"ENTER 6 to RETIRVE MONTH"<<endl;
		cout<<"ENTER 7 to RETIRVE YEAR"<<endl;
		cout<<"ENTER 8 to RETIRVE HOUR"<<endl;
		cout<<"ENTER 9 to RETIRVE MINUTE"<<endl;
		cout<<"ENTER 10 to RETIRVE SECONDS"<<endl;
		cout<<"ENTER 11 to FIND DIFFERENCE BETWEEN 2 DATES"<<endl;

		cout<<"ENTER 12to exit";
		cin>>ch;
		switch(ch)
		{
			case 1:
				obj.set_date();
				break;
			case 2:
				obj.set_time();
				break;
			case 3:
				obj.format();
				break;
			case 4:

				break;
			case 5:
				cout<<"DAY "<<obj.d.d<<endl;
				break;
			case 6:
				cout<<"MONTH "<<obj.d.m<<endl;
				break;
			case 7:
				cout<<"YEAR "<<obj.d.y<<endl;
				break;
			case 8:
				cout<<"HOUR "<<obj.t.h<<endl;
				break;
			case 9:
				cout<<"MINUTE "<<obj.t.m<<endl;
				break;
			case 10:
				cout<<"SECONDS "<<obj.t.s<<endl;
				break;
			case 11:
				obj1.set_date();
				date_diff();
				break;
			case 12:
				exit(0);
				break;
			default:
				cout<<"invalid value"<<endl;
		}
	}
return 0;

}






