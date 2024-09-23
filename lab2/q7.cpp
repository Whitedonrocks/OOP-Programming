#include<iostream>
using namespace std;
void swapp(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
 int a,b;
 cout<<"Enter value of a and b:"<<endl;
 cin>>a>>b;
 cout<<"Before swap:"<<endl;
 cout<<"a="<<a<<", and b="<<b<<endl;
 swapp(a,b);
 cout<<"After swap:"<<endl;
 cout<<"a="<<a<<", and b="<<b<<endl;
 return 0;
}
