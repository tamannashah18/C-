#include<iostream>
using namespace std;
void test(int x)
{
    try{
        if(x==1)
            throw x;
        else 
            if(x==0)
                throw 'x';
            else 
                if(x==-1)
                    throw 1.0;

            cout<<"End of try block\n";
    }
    catch(char c)
    {
        cout<<"character caught"<<endl;
    }
    catch(int c)
    {
        cout<<"int caught"<<endl;

    }
    catch(double c)
    {
        
        cout<<"double caught"<<endl;
    }
    catch(...)
    {
        cout<<"catch all"<<endl;
    }
    cout<<"END of try - catch block\n";
}
int main()
{
    test(1);
    test(0);
    test(-1);
    test(2);
    return 0;
}