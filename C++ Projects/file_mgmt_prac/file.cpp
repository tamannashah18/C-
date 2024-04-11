#include<iostream>
#include<fstream>
using namespace std;
class book{
    string name;
    int id;
    public:
    void insert()
    {
        cout<<"Enter name";
        cin>>name;
        cout<<"Enter id";
        cin>>id;
        store_in_file();
    }
    void store_in_file()
    {
        fstream fin;
        fin.open("book.txt",ios::app);
        fin.write((char*)this,sizeof(*this));
        fin.close();
        // ofstream fout("book.txt",ios::app);
        // fout<<id<<name<<endl;
        // fout.close();
    }
    void show()
    {
        cout<<name<<" "<<id<<endl;
    }
    void read()
    {
        fstream fin;
        fin.open("book.txt",ios::in);
        while(fin.read((char*)this,sizeof(*this)))
        {
            show();
        }
        fin.close();
        // ifstream fin("book.txt");
        // while(fin>>id>>name)
        // {
        //     show();
        // }
        // fin.close();
    }
    void delete1()
    {
        string n;
        cout<<"ENTER NAME to be deleted:";
        cin>>n;
        fstream fin,fout;
        fin.open("book.txt",ios::in);
        fout.open("temp.txt",ios::out);
        while(fin.read((char *)this,sizeof(*this)))
        {
            if(n==name)
            {
                cout<<"DELETED DATA:"<<endl;
                show();
            }
            else
                fout.write((char *)this,sizeof(*this));

        }
            fin.close();
            fout.close();
            remove("book.txt");
        rename("temp.txt","book.txt");
        // ifstream fin("book.txt");
        // ofstream fout("temp.txt");
        // while(!fin.eof())
        // {
        //     fin>>id>>name;
        //     if(n==name)
        //     {
        //         cout<<"DELETED DATA:"<<endl;
        //         show();
        //     }
        //     else
        //         fout<<id<<name<<endl;
        // }
        // fin.close();
        // fout.close();
        // remove("book.txt");
        // rename("temp.txt","book.txt");
    }
    void update()
    {
        string n;
        cout<<"ENTER NAME:";
        cin>>n;
        fstream fin,fout;
        fin.open("book.txt",ios::in);
        fout.open("temp.txt",ios::out);
        while(fin.read((char *)this,sizeof(*this)))
        {
            if(n==name)
            {
                cout<<"ENTER ID:";
                cin>>id;
                cout<<"ENTER NAME:";
                cin>>name;
                fout.write((char *)this,sizeof(*this));
            }
            else
                fout.write((char *)this,sizeof(*this));
        }
        fin.close();
        fout.close();
        remove("book.txt");
        rename("temp.txt","book.txt");
        // string n;
        // cout<<"ENTER NAME to be updated:";
        // cin>>n;
        // ifstream fin("book.txt");
        // ofstream fout("temp.txt");
        // while(!fin.eof())
        // {
        //     fin>>id>>name;
        //     if(n==name)
        //     {
        //         cout<<"ENTER NEW ID:";
        //         cin>>id;
        //         cout<<"ENTER NEW NAME:";
        //         cin>>name;
        //     }
        //     fout<<id<<name<<endl;
        // }
        // fin.close();
        // fout.close();
        // remove("book.txt");
        // rename("temp.txt","book.txt");
    }
};
int main()
{
    int i=0;
    book b;
    // b.insert();
    // b.insert();
    b.read();
    b.delete1();
    cout<<"_______";
    b.read();
    return 0;
}