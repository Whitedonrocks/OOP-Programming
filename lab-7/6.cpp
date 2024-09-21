#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"kindly,enter your age:"<<endl;
    cin>>age;
    try
    {
        if(age>=18)
        {
            cout<<"you are eligible for voting"<<endl;
        }
        else
        {
            string msg="You are not eligible for voting";
            throw msg;
        }
    }
    catch(string s)
    {
        cout<<"exception:"<<s<<endl;
    }
    return 0;
}
