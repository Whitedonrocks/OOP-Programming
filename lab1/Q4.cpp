#include<iostream>
namespace op1{
int var1;
}
namespace op2{
int var2;
}
using namespace std;
using namespace op1;
using namespace op2;
int main()
{
    int sum;
    cout<<"Enter first value:";
    cin>>var1;
    cout<<"Enter second value:";
    cin>>var2;
    sum=var1+var2;
    cout<<"sum="<<sum;
    return 0;
}
