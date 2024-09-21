#include<iostream>
using namespace std;
class Base1
{
public:
    void display()
    {
        cout<<"This is displayed from Base 1"<<endl;
    }
};
class Base2: virtual public Base1
{
};
class Base3: virtual public Base1
{
};
class Base4:public Base2,public Base3
{
};
int main()
{
    Base4 d;
    d.display();
    return 0;
}