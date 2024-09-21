#include<iostream>
using namespace std;
template <class T, class U>
T getmin(T a,U b)
{
    T result;
    result=(a<b)?a:b;
    return result;
}
int main()
{
    int x=500;
    int r;
    char y='A';                    //ascii of A is 65 and a is 97
    r=getmin(x,y);
    cout<<"smaller of two value is:"<<r<<endl;
    return 0;
}
