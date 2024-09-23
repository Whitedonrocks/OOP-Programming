#include<iostream>
using namespace std;
inline int minimum(int a,int b,int c)
{
    if(a<b&&a<c)
    {
        return a;
    }
    else if(b<a&&b<c)
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
 cout<<"Enter any three integer values:"<<endl;
 cin>>a>>b>>c;
 cout<<"Smallest value:"<<minimum(a,b,c)<<endl;
 return 0;
}
