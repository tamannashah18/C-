#include<iostream>
using namespace std;
int main()
{
    int i=1,j,k=0,n,flag=0;
    cout<<"enter n: ";
    cin>>n;
    while(k<n)
    {
        for(j=1;j<4;j++)
        {
            if(j==i)
            {
                cout<<"* "<<endl;
                break;
            }
            else if(i!=0)
            {
                cout<<"  ";
            }
        }
        if(i%3==0)
        {
            if(flag==0)
                flag=1;
            else 
                flag=0;
        }
        if(flag==0)
            i++;
        else
        {
            i--;
        }
        k++;
    }
    return 0;
}