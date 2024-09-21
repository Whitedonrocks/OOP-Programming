#include<iostream>
using namespace std;
template <class T>
class Compare
{
    T a,b;
public:
    Compare (T x,T y)
    {
        a=x;
        b=y;
    }
    T getmax()
    {
        T res;
        res=a>b?a:b;
        return res;
    }
};
int main()
{
    Compare <int>obj1(179,56);
    cout<<"largest(integer)="<<obj1.getmax()<<endl;
    Compare <double>obj2(7.9,9.7);
    cout<<"largest(double)="<<obj2.getmax()<<endl;
    return 0;
}
