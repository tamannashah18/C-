#include<iostream>
using namespace std;
int j=0;
string dep[4]={"IT","Sales","HR","Production"};
class person{
    public:
    string name,mail;
    int age;
    person(){};
    person(int a,string m, string n)
    {
        name=n;
        age=a;
        mail=m;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Mail: "<<mail<<endl;
    }
};
class employee:public person{
    public:
    float base,da,hra,salary,pf;
    employee(){};
    employee(float b,int a,string m, string n):person(a,m,n)
    {
    base = b;
    da = b * (5.0 / 100);
    hra = b * (8.0 / 100);
    pf = b * (10.0 / 100);
    salary = b + hra + da - pf;
    }
    void display()
    {
        cout<<"Basic Salary: "<<base<<endl;
        cout<<"DA: "<<da<<endl;
        cout<<"HRA: "<<hra<<endl;
        cout<<"PF: "<<pf<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
class dept:public employee{
    public:
    int d;
    string desig;
    dept(){};
    dept(string des,int d,float b,int a,string m, string n):employee(b,a,m,n)
    {
        this->d=d;
        desig=des;
    }
    void display1()
    {
        person::display();
        employee::display();
        cout<<"Department: "<<dep[d]<<endl;
    }
}emp[10];

void sort()
{
    int i, k;
    dept temp;
    for (i=0;i<j-1;i++)
    {
        for (k = 0;k<j-i-1;k++)
        {
            if (emp[k].d>emp[k + 1].d)
            {
                temp=emp[k];
                emp[k]=emp[k+1];
                emp[k+1]=temp;
            }
        }
    }
}

int main()
{
    int i,ch=0,d,a;
    string des, m, n;
    float b;
    while (1)
    {
        cout<<"\nENTER 1 to insert\n";
        cout<<"ENTER 2 to display\n";
        cout<<"ENTER 3 to sort by department \n";
        cout<<"ENTER 4 to exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout<<"\nENTER DETAILS OF EMPLOYEE";
            cout<<"\nEnter Name: ";
            cin>>n;
            cout<<"Enter Age: ";
            cin>>a;
            cout<<"Enter Mail id: ";
            cin>>m;
            cout<<"Department name: "<< endl;
            for (i=0;i<4;i++)
            {
                cout<<"enter "<<i+1<<" for "<<dep[i]<<endl;
            }
            cout<<"Enter Department no.: ";
            cin>>d;
            d-=1;
            cout<<"Enter Designation: ";
            cin>>des;
            cout<<"Enter Basic salary: ";
            cin>>b;
            if (d>=0 && d<4)
                emp[j++] = dept(des,d,b,a,m,n);
            else
                cout << "Invalid input " << endl;
            break;
        case 2:
            for (i=0;i<j;i++)
            {
                emp[i].display1();
            }
            break;
        case 3:
            sort();
        break;
        case 4:
            exit(0);
            break;
        default:
            cout<<"Invalid input"<<endl;
            break;
        }
    }
    return 0;
}




