/*/Develop a program for class student with properties: rollno, name, marks of
3 subjects, total, percentage and grade. The behavior of student should
include:
a. Accept the input from the user.
b. Display the data.
c. Calculate the total marks obtained, percentage and grade of each
student.
d. Display the student who secured 1 st rank.*/
#include<iostream>
using namespace std;
class student
{
	public:
		int rno;
		float marks[3],total,per;
		string name;
		char grade;

		void input()
		{
			cout<<"ENTER ROLL NO:";
			cin>>rno;
			cout<<"ENTER NAME";
			cin>>name;
			for(int i=0;i<3;i++)
			{
				cout<<"ENTER MARKS OF SUBJECT "<<i+1;
				cin>>marks[i];
			}
		}
		void display()
		{
			cout<<"\nROLL NO: "<<rno<<endl;
			cout<<"NAME: "<<name<<endl;
			cout<<"MARKS\nSUBJECT 1 SUBJECT 2  SUBJECT 3"<<endl;
			for(int i=0;i<3;i++)
				cout<<marks[i]<<'\t';
			calc();
		}
		void calc()
		{
			for(int i=0;i<3;i++)
				total+=marks[i];
			per=total/3;
			if(per>85)
				grade='A';
			else if(per>75)
				grade='B';
			else if(per>50)
				grade='C';
			else if(grade>33)
				grade='D';
			else
				grade='F';
			cout<<"\nTOTAL: "<<total<<endl;
			cout<<"PERCENTAGE: "<<per<<endl;
			cout<<"GRADE: "<<grade<<endl;
		}
}s[10];
int n;
void calcrank()
{
	float max=s[0].per;
	int i;
	for(i=0;i<n;i++)
	{
		if(s[i].per>max)
			max=s[i].per;
	}
	for(i=0;i<n;i++)
	{
		if(s[i].per==max)
			s[i].display();
	}
}
int main()
{
	int ch=0,i=0;
	while(1)
	{
		cout<<"\nENTER 1 to INSERT"<<endl;
		cout<<"ENTER 2 to DISPLAY"<<endl;
		cout<<"ENTER 3 to TOTAL MARKS"<<endl;
		cout<<"ENTER 4 to find 1st RANK"<<endl;
		cout<<"ENTER 5 to exit";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"ENTER NO OF STUDENTS YOU WANT TO ENTER";
				cin>>n;
				for(i=0;i<n;i++)
					s[i].input();
				break;
			case 2:
				for(i=0;i<n;i++)
					s[i].display();
				break;
			case 3:
				for(i=0;i<n;i++)
					s[i].calc();
				break;
			case 4:
				calcrank();
				break;
			case 5:
				exit(0);
				break;
			default:
				cout<<"invalid value"<<endl;
		}
	}
return 0;

}



