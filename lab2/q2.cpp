#include<iostream>
#define N 1000
using namespace std;
int main()
{
    int n,*ptr,sum=0;
    cout<<"Enter value of n:"<<endl;
    cin>>n;
    ptr=new int[N];
    cout<<"Enter n array elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i);
        sum=sum+*(ptr+i);
    }
    cout<<"Sum of n array elements:"<<sum;
    delete[] ptr;
    return 0;
}
