#include<iostream>
using namespace std;
class a
{
    public :
    int i;
};
class b:virtual public a 
{
    public :
    int j;
};
class c:virtual public a 
{
    public :
    int k;
};
class d:public b,public c
{
    public :
    int sum;
};
int main()
{
    d obj;
    obj.i=10;
    obj.j=20;
    obj.k=30;
    obj.sum=obj.i+obj.j+obj.k;
    cout<<"SUM :"<<obj.sum;
    return 0;
}