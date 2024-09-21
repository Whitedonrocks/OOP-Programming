#include<iostream>
using namespace std;
class Polygon
{
    protected:
    int width,height;
    public:
    void setvalues(int a,int b)
    {
        width=a;
        height=b;
    }
    virtual int area()=0; //Pure Virtual Fxn
};
class Rect:public Polygon
{
    public:
        int area()
        {
            return width*height;
        }
};
class C
{
    public:
    int x,y;
    C(int a,int b)
    {
        x=a;
        y=b;
    }
    void add()
    {
        cout<<"The sum of two no is="<<x+y<<endl;
    }
};
int main()
{
    Rect R1;
    Polygon *ptr;    //Abstract class
    ptr=&R1;
    ptr->setvalues(4,5);
    cout<<"Area of Rectangle="<<ptr->area()<<endl;
    C c1(5,5);      // COncrete CLass
    c1.add();
    return 0;
}