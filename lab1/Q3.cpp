#include<iostream>
#define pi 3.14
using namespace std;
int main()
{
    float r,a,p;
    cout<<"Enter radius of circle:"<<endl;
    cin>>r;
    a=pi*r*r;
    p=2*pi*r;
    cout<<"Area of circle:"<<a<<endl;
    cout<<"circumference of circle:"<<p<<endl;
    return 0;
}
