#include<iostream>
using namespace std;
template <class T>
T getmax(T a,T b)
{
    T result;
    result=(a>b)?a:b;
    return result;
}
int main()
{
    int a=5,b=9,c;
    float x=10.5,y=21.8,z;
    char m='c',n='b',o;
    c=getmax(a,b);
    z=getmax(x,y);
    o=getmax(m,n);
    cout<<"larger of integer="<<c<<endl;
    cout<<"larger of float="<<z<<endl;
    cout<<"larger of character="<<o<<endl;
    return 0;
}
