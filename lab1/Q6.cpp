#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=10;i++)
    {
        if(i==6)
        {
            break;
        }
        cout<<i<<endl;
    }
    cout<<endl<<endl;
    for(int i=1;i<=10;i++)
    {
        if(i==6)
        {
            continue;
        }
        cout<<i<<endl;
    }
    int pv;
    label:
    cout<<"Enter any positive number:"<<endl;
    cin>>pv;
    if(pv<0)
    {
        goto label;
    }
    return 0;
}
