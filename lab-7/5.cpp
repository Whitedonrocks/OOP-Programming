#include<iostream>
using namespace std;
int main()
{
    float n,d,r;
    cout<<"enter the first number:"<<endl;
    cin>>n;
    cout<<"enter the second number:"<<endl;
    cin>>d;
    try
    {
        if(d!=0)
        {
            r=n/d;
            cout<<"result:"<<r<<endl;
        }
        else
        {
            string msg="divide by zero exception";
            throw msg;
        }
    }
    catch (string s)
    {
        cout<<"error:"<<s<<endl;
    }
    return 0;
}
