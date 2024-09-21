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
class Base2
{
public:
    void display()
    {
        cout<<"This is displayed from Base 2"<<endl;
    }
};
class derived: public Base1,public Base2
{
    public:
        void sdisplay()
        {
            Base1::display();
            Base2::display();
        }
};
int main()
{
    derived d;
    d.sdisplay();
    return 0;
}

// OR
// class derived: public Base1,public Base2
// {
// };
// int main()
// {
//     derived d;
//     d.Base1::display();
//     d.Base2::display();
//     return 0;
// }
