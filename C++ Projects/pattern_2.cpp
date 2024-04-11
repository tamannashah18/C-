#include<iostream>
using namespace std;
int *p,top=-1;
void allocate(int n)
{
    int size=0;
    for(int i=1;i<n;i++)
    {
        size+=i;
    }
    p=new int(size);   
}
void push(int i)
{
    p[++top]=i;
}
int main()
{
    int n,i,j,k,cnt;
    cout<<"Enter n:";
    cin>>n;
    cnt=1;
    allocate(n);
    for(i=n;i>0;i--)
    {
        for(k=n;k>i;k--)
        {
            cout<<" ";
        }
        for(j=0;j<i;j++)
        {
            cout<<" "<<cnt;
            push(cnt);
            if(cnt==9)
            {
                cnt=0;
            }
            else if(cnt==0)
            {
                cnt=9;
            }
            else{
                cnt++;
            }
        }
        cout<<endl;
    }
    for(i=1;i<=n;i++)
    {
        for(k=n;k>i;k--)
        {
            cout<<" ";
        }
        for(j=0;j<i;j++)
        {
            cout<<" "<<p[top--];
        }
        cout<<endl;
    }
    return 0;
}