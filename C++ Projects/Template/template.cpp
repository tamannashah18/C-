#include<iostream>
// function template
// template <class T>
// T add(T x,T y)
// {
//     return x+y;
// }
using namespace std;
// template <class T>
// //class template single data type

// class weight{
//     T kg;
// public:
//     void setdata(T x)
//     {
//         kg=x;
//     }
//     t getdata()
//     {
//         return kg;
//     }
// };
template<class T, class U>
class weight{
    T kg;
    U gm;
public:
    void setdata(T x,U y)
    {
        kg=x;
        gm=y;
    }
    T getkg()
    {
        return kg;
    }
    U getgm()
    {
        return gm;
    }
};
int main()
{
    // weight<int>w;
    // w.setdata(2);
    // cout<<"WEIGHT: "<<w.getdata()<<endl;
    // weight<float> w1;
    // w1.setdata(2.8);
    // cout<<"WEIGHT: "<<w1.getdata()<<endl;

//     cout<<"ADDED INT NOS: "<<add<int>(2,8)<<endl;
//     cout<<"ADDED FLOAT NOS: "<<add<float>(1.82,8)<<endl;
    weight <int, float> w;
    w.setdata(2,8.8);
    cout<<"KG: "<<w.getkg()<<endl;
    cout<<"GM: "<<w.getgm()<<endl;
    weight <float,float> w1;
    w1.setdata(10.5,8.8);
    cout<<"KG: "<<w1.getkg()<<endl;
    cout<<"GM: "<<w1.getgm()<<endl;
    
    return 0;
}