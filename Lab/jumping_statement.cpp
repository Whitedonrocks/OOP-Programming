#include<iostream>
using namespace std;
int main()
{
    int n,i;
    for ( i = 0; i < 10; i++)
    {
        if (i==3)
        {
            continue;
        }
        if (i==9)
        {
            break;
        }
        cout<<i<<endl;
               
    }
    a:cout<<"Enter positive integer"<<endl;
    cin>>n;
    if (n<0)
    {
        goto a;
    }
    else
        cout<<"The integer is "<<n<<endl;
    
    return 0;
    
}