#include<iostream>
using namespace std;
int main()
{
    try{
        try{
            throw 20;
        }
        catch(int n)
        {
            cout<<"PARTIALLY HANDLED\n";
            throw;
        }
    }
    catch(int n)
    {
        cout<<"HANDLED\n";
    }
    return 0;
}