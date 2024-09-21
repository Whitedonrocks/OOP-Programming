#include<iostream>
using namespace std;
class Base
{
    public:
    ~Base(){
        cout<<"Destruction of Constructor A"<<endl;
    }
};
class Derived:public Base
{
    public:
    ~Derived(){
        cout<<"Destruction of Constructor B"<<endl;
    }
};
int main()
{
    Derived d;
    
}