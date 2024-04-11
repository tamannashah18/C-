#include<iostream>
#include<fstream>
using namespace std;
class employee{
    int id;
    string name;
    public:
    static int eno;
    employee(){
        id=0;
        name="";
    }
    employee(int id,string n)
    {
        this->id=id;
        name=n;
        inc_eno();
    }
    void display()
    {
        cout<<"ID: "<<id<<"\nNAME:  "<<name<<endl;
    }
    static void inc_eno()
    {
        eno++;
    }
};
int employee::eno=0;
class dept:public employee{
    string d;
    public:
    dept(){};
    dept(string d,int id,string n):employee(id,n)
    {
        this->d=d;
    }
    void write_in_file()
    {
        ofstream fout("data.txt",ios::app);
        fout.write((char*)this,sizeof(*this));
        fout.close();
    }
    void display()
    {
        employee::display();
        cout<<"department ="<<d<<endl;
    }
};
int main()
{
    dept e[10];
    int i,n,id;
    string name,d;
    cout<<"enter no of employees to enter data:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"enter id";
        cin>>id;        
        cout<<"enter name";
        cin>>name;      
        cout<<"enter deptartment";
        cin>>d;        
        e[i]=dept(d,id,name);
        e[i].write_in_file();
    }
    dept obj;
    ifstream fin("data.txt");
        while(fin.read((char *)&obj,sizeof(obj)))
        {
            obj.display();
        }
    fin.close();
    return 0;
}