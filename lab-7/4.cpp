#include<iostream>
using namespace std;
template<class t>
class base
{
private:
    t a;
public:
    void setvalue(t value)
    {
        a=value;
    }
    void display()
    {
        cout<<"a="<<a<<endl;
    }
};
template<class t>
class derived:public base <t>
{
private:
    t b;
public:
    void setvalue(t val1,t val2)
    {
        base<t>::setvalue(val1);
        b=val2;
    }
    void display()
    {
        base<t>::display();
        cout<<"b="<<b<<endl;
    }
};
int main()
{
    derived <int>obj;
    obj.setvalue(123,22);
    obj.display();
    return 0;
}
