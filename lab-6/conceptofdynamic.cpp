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
class Base2:public Base1
{
public:
    void display()
    {
        cout<<"This is displayed from Base 2"<<endl;
    }
};
int main()
{
    Base2 d;
    d.display();
    d.Base1::display();
    return 0;
}