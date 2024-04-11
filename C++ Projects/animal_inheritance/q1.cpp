#include<iostream>
using namespace std;
class animal{
    float weight;
    string name;
    public:
    animal(){}
    animal(int i)
    {
        cout<<"ENTER NAME OF THE ANIMAL:";
        cin>>name;
        cout<<"ENTER WEIGHT OF THE ANIMAL:";
        cin>>weight;
    }
    virtual void makesound()=0;
};
class dog:public animal{
    string breed;
    const string sound="WOOF";
    public:
    dog(){}
    dog(int i):animal(1)
    {
        cout<<"ENTER BREED OF THE DOG:";
        cin>>breed;
    }
    void makesound()
    {
        cout<<sound<<endl;
    }

}d;
class cat:public animal
{
    string food;
    public:
    cat(){}
    cat(int i):animal(1)
    {
        cout<<"ENTER FOOD OF THE CAT:";
        cin>>food;
    }
    void makesound()
    {
        cout<<"MEOW"<<endl;
    }
}c;
int main()
{
    int ch;
    while(1)
    {
        cout<<"ENTER 1 TO INSERT FOR DOG \n";
        cout<<"ENTER 2 TO INSERT FOR CAT \n";
        cout<<"ENTER 3 TO MAKE SOUND OF DOG\n";
        cout<<"ENTER 4 TO MAKE SOUND OF CAT\n";
        cout<<"ENTER 5 TO EXIT\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
                d=dog(1);
                d.makesound();
                break;
            case 2:
                c=cat(1);
                c.makesound();
                break;
            case 3:
                d.makesound();
                break;
            case 4:
                c.makesound();
                break;
            case 5:
                exit(0);

        }
    }
    return 0;
}