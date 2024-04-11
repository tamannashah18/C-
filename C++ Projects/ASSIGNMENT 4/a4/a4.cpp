#include<iostream>
using namespace std;
class customer{
    public:
    int id;
    string name;
    void setc()
    {
        cout<<"Enter id: ";
        cin>>id;
        cout<<"Enter Customer's name: ";
        cin>>name;
    }
    void display()
    {
        cout<<"Id = "<<id<<endl;
        cout<<"Name = "<<name<<endl;
    }
};
class bath
{
    public:
    int ch;
    enum itemb{Soap=150,Shampoo=500,Shower_Gel=250,Loofah=90};
    int set()
    {
        cout<<"ENTER 1 for SOAP"<<endl;
        cout<<"ENTER 2 for SHAMPOO"<<endl;
        cout<<"ENTER 3 for SHOWER GEL"<<endl;
        cout<<"ENTER 4 for LOOFAH"<<endl;
        cin>>ch;
        if(ch==1)
            return Soap;
        else if(ch==2)
            return Shampoo;
        else if(ch==3)
            return Shower_Gel;
        else if(ch==4)
            return Loofah;
        else
            return 0;
    }
};
class cleaning
{
    public:
    int ch;
    enum itemc{DishSoap=220,Detergent=1500,Mop=125,Scrubber=60};
    int set()
    {
        cout<<"ENTER 1 for DISH SOAP"<<endl;
        cout<<"ENTER 2 for DETERGENT"<<endl;
        cout<<"ENTER 3 for MOP"<<endl;
        cout<<"ENTER 4 for SCRUBBER"<<endl;
        cin>>ch;
        if(ch==1)
            return DishSoap;
        else if(ch==2)
            return Detergent;
        else if(ch==3)
            return Mop;
        else if(ch==4)
            return Scrubber;
        else
            return 0;
    }

};
class bill:public bath,public cleaning,public customer
{
    public:
    float gt;
    int ch,i=0,total,list[30],j,k;
    string item[100];
    void setlist()
    {
        if(list[i]==Soap)
            item[i]="SOAP";
        else if(list[i]==Shampoo)
            item[i]="SHAMPOO";
        else if(list[i]==Shower_Gel)
            item[i]="SHOWER GEL";
        else if(list[i]==Loofah)
            item[i]="LOOFAH";
        else if(list[i]==DishSoap)
            item[i]="DISH SOAP";
        else if(list[i]==Detergent)
            item[i]="DETERGENT";
        else if(list[i]==Mop)
            item[i]="MOP";
        else if(list[i]==Scrubber)
            item[i]="SCRUBBER";
    }
    void set()
    {
        cout<<"Enter Category\n ";
        cout<<"Enter 1 for bath supplies"<<endl;
        cout<<"Enter 2 for cleaning supplies"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                list[i]=bath::set();
                setlist();
                i++;
            break;
            case 2:
                list[i]=cleaning::set();
                setlist();
                i++;
            break;
        }
    }
    void calc()
    {
        total=0;
        for(int j=0;j<i;j++)
        {
            total+=list[j];
        }
        gt=total+(total*0.12);
    }
    void display()
    {
        customer::display();
        calc();
        cout<<"\n_____________________________________________\n";
        for(j=0;j<i;j++)
        {
            cout<<item[j]<<" = "<<list[j]<<endl;
        }
        cout<<"\n_____________________________________________\n";
        cout<<"TOTAL AMT = "<<total<<endl;
        cout<<"GST = "<<total*0.12<<endl;
        cout<<"\n + \n_____________________________________________\n";
        cout<<"GRAND TOTAL AMT = "<<gt<<endl;
    }
    void del()
    {
        cout<<"Enter the name of the supply you want to delete"<<endl;
        cout<<"ENTER 1 for DISH SOAP"<<endl;
        cout<<"ENTER 2 for DETERGENT"<<endl;
        cout<<"ENTER 3 for MOP"<<endl;
        cout<<"ENTER 4 for SCRUBBER"<<endl;
        cout<<"ENTER 5 for SOAP"<<endl;
        cout<<"ENTER 6 for SHAMPOO"<<endl;
        cout<<"ENTER 7 for SHOWER GEL"<<endl;
        cout<<"ENTER 8 for LOOFAH"<<endl;
        cin>>ch;
            if(ch==1)
            {
                for(j=0;j<i;j++)
                {
                    if(list[j]==DishSoap)
                    {
                        for(k=j;k<i;k++)
                        {
                            list[k]=list[k+1];
                        }
                    }
                }
                i--;
            }
            else if(ch==2)
            {
                for(j=0;j<i;j++)
                {
                    if(list[j]==Detergent)
                    {
                        for(k=j;k<i;k++)
                        {
                            list[k]=list[k+1];
                        }
                    }
                }
                i--;
            }
            else if(ch==3)
            {
                for(j=0;j<i;j++)
                {
                    if(list[j]==Mop)
                    {
                        for(k=j;k<i;k++)
                        {
                            list[k]=list[k+1];
                        }
                    }
                }
                i--;
            }
            else if(ch==4)
            {
               for(j=0;j<i;j++)
                {
                    if(list[j]==Scrubber)
                    {
                        for(k=j;k<i;k++)
                        {
                            list[k]=list[k+1];
                        }
                    }
                }
                i--;
            }
            else if(ch==5)
            {
                for(j=0;j<i;j++)
                {
                    if(list[j]==Soap)
                    {
                        for(k=j;k<i;k++)
                        {
                            list[k]=list[k+1];
                        }
                    }
                }
                i--;
            }
            else if(ch==6)
            {
                for(j=0;j<i;j++)
                {
                    if(list[j]==Shampoo)
                    {
                        for(k=j;k<i;k++)
                        {
                            list[k]=list[k+1];
                        }
                    }
                }
                i--;
            }
            else if(ch==7)
            {
                for(j=0;j<i;j++)
                {
                    if(list[j]==Shower_Gel)
                    {
                        for(k=j;k<i;k++)
                        {
                            list[k]=list[k+1];
                        }
                    }
                }
                i--;
            }
            else if(ch==8)
            {
                for(j=0;j<i;j++)
                {
                    if(list[j]==Loofah)
                    {
                        for(k=j;k<i;k++)
                        {
                            list[k]=list[k+1];
                        }
                    }
                }
                i--;
            }
            else
                cout<<"Invalid input";

    }
};
int main()
{
    int choice;
    bill b;
    while(1)
    {
        cout<<"\nEnter 1 for Adding supplies to the bill"<<endl;
        cout<<"Enter 2 for Deleting supplies from the bill"<<endl;
        cout<<"Enter 3 for Show the final bill"<<endl;
        cout<<"Enter 4 to exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
            b.set();
            break;
        case 2:
            b.del();
            break;
        case 3:
            b.display();
            break;
        case 4:
            exit(0);
            break;
        default:
            break;
        }

    }
    return 0;
}
