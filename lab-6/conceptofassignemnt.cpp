#include<iostream>
using namespace std;
class Myclass
{
    public:
    int values;
    Myclass(int v)
    {
        values=v;
    }
};
int main()
{
    Myclass obj1(10);
    Myclass obj2=obj1;      //Copy initi
    cout<<"Obj2="<<obj2.values<<endl;
    Myclass obj3(20);
    obj1=obj3; //assignment
    cout<<"Obj3="<<obj3.values<<endl;
    return 0;
}