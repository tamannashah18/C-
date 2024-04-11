#include<iostream>
using namespace std;
 
template<class T>
void max1(T a,T b)
{
    if(a>b)
    {
        cout<<"A: "<<a;
    }
    else
    {
        cout<<"B: "<<b;
    }
}
template<class T>
void max1(T a,T b,T c)
{
    if(a>b && a>c)
        cout<<"A: "<<a;
    else if(c>a && c>b)
        cout<<"C: "<<c;
    else
        cout<<"B: "<<b;
}

int main()
{
    max1<int>(1,44);
    max1<int>(8,9,5);
    return 0;
}