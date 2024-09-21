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
int main()
{
    Rect R1;
    Polygon *ptr;
    ptr=&R1;
    ptr->setvalues(4,5);
    cout<<"Area of Rectangle="<<ptr->area()<<endl;
    return 0;
}