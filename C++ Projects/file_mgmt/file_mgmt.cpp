#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //seekg() tellg() write in file
    //seekp() tellp() read from file
    fstream f;
    string s;
    int lines=0; 
    f.open("file.txt",ios::in);
    while(!f.eof())
    {
        getline(f,s);
        lines++;
    }
    f.close();
    cout<<"NO OF LINES : "<<lines;
    return 0;
}