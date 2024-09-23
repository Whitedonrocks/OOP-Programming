#include<iostream>
using namespace std;
int sum(int a,int b,int c)
{
    return a+b+c;
}
float sum(float a,float b,float c)
{
    return a+b+c;
}
int main()
{
    int a,b,c;
    float x,y,z;
    cout<<"Enter value of a, b, and c(int):"<<endl;
    cin>>a>>b>>c;
    cout<<"Enter value of x, y, and z(float):"<<endl;
    cin>>x>>y>>z;
    cout<<"Sum of integer values:"<<sum(a,b,c)<<endl;
    cout<<"sum of float values:"<<sum(x,y,z)<<endl;
    return 0;
}
