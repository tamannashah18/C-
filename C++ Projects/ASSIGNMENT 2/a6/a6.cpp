#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
	float n=158.14526;
	int n1=12345;
	cout<<"FORMATTED FIXED POINT "<<fixed<<setprecision(2)<<n<<endl;
	cout<<"FORMATTED Scientific  "<<scientific<<setprecision(3)<<n<<endl;
	cout<<"FORMATTED width "<<setw(20)<<setfill('*')<<n<<endl;
	cout<<"DECIMAL "<<setiosflags(ios::dec)<<n1<<resetiosflags(ios::dec)<<endl;
	cout<<"OCTAL "<<setiosflags(ios::oct)<<n1<<resetiosflags(ios::oct)<<endl;
	cout<<"HEXADECIMAL "<<setiosflags(ios::hex)<<n1<<resetiosflags(ios::hex)<<endl;
	cout<<"BASE-8 "<<setbase(8)<<n1<<endl;
	return 0;
}


