#include<iostream>
#define pi 3.14
using namespace std;
float area(float r)
{
    return pi*r*r;
}
float area(float l,float b)
{
    return l*b;
}
int main()
{
    float r,l,b;
    cout<<"Enter the value of l and b:"<<endl;
    cin>>l>>b;
    cout<<"Area of rectangle="<<area(l,b)<<endl;
    cout<<"Enter the value of r:"<<endl;
    cin>>r;
    cout<<"Area of circle:"<<area(r);
    return 0;
}
