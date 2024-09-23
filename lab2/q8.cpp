#include<iostream>
using namespace std;
int &maximum(int &a,int &b,int &c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>a && b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int a,b,c;
    cout<<"Enter value of a, b, and c:"<<endl;
    cin>>a>>b>>c;
    cout<<"Greatest value:"<<maximum(a,b,c);
    return 0;
}
