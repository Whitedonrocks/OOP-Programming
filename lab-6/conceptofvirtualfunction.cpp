#include<iostream>
using namespace std;
class Circle
{
    protected:
    float r;
    public:
    Circle(int radius)
    {
        r=radius;
    }
    virtual float area()
    {
        return 3.14*r*r;
    }
};
class cylinder:public Circle
{
    private:
    float h;
    public:
    cylinder(float radius,float height):Circle(radius)
    {
        h=height;
    }
    float area()
    {
        return (2*3.14*(r*r+r*h));
    }
};
int main()
{
    Circle *ptr;
    Circle C1(5);
    cylinder c2(5,7.8);
    ptr=&C1;
    cout<<"Area of Circle="<<ptr->area()<<endl;
    ptr=&c2;
    cout<<"Area of Cylinder="<<ptr->area()<<endl;
    return 0;
}