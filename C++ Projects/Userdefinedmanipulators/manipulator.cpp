#include<iostream>
using namespace std;
ostream & unit(ostream & c)
{
    c<<" :) ";
    return c;
} 
int main()
{
    cout<<"hello"<<unit;
    return 0;
}