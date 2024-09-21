#include<iostream>
using namespace std;
class Base
{
    private:int x;
    protected:int y;
    public: int z;
};
class Derived:public Base
{
    public:void setData()
    {
        cout<<"Enter value of x:"<<endl;
        cout << "Enter value of y:"<<endl;
        cin>>y;
        cout<<"Enter value of z:"<<endl;
        cin>>z;
    }
};
int main()
{
    Derived d;
    d.setData();
    cout<<"z="<<d.z<<endl;
    return 0;
}