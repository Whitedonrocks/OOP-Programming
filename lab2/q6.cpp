#include<iostream>
using namespace std;
int sum(int a,int b,int c=10)
{
    return a+b+c;
}
int main()
{
    int a,b,c;
    cout<<"Enter value of a, b, and c:"<<endl;
    cin>>a>>b>>c;
    cout<<"Sum without default argument:"<<sum(a,b,c)<<endl;
    cout<<"Sum with default argument:"<<sum(a,b)<<endl;
    return 0;
}
