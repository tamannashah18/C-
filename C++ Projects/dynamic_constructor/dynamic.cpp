#include <iostream>
using namespace std;

class geeks 
{
	int* p,n;

public:
	// default constructor
  geeks(){}
	geeks(int n)
	{

		// allocating memory at run time
		// and initializing
		p = new int[n];
        this->n=n;
		for (int i = 0; i < n; i++) {
			cin>> p[i];
        }
		cout << endl;
	}
    void show()
    {
        
            cout << endl;
            for (int i = 0; i < n; i++)
            {
                cout<< p[i]<<" ";
            }
    }
};

int main()
{
	int n;
	geeks* ptr = new geeks[5];
  for(int i=0;i<5;i++)
  {
    cout<<"ENTER n:";
    cin>>n;
    ptr[i]=geeks(n);
  }
  for(int i=0;i<5;i++)
  {
    cout<<"\nARRAY "<<i+1<<endl;
    ptr[i].show();
  }
  return 0;
}