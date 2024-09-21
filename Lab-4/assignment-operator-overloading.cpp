#include<iostream>
using namespace std;
class complex
{
    private:
    int r,i;
    public:
    complex(int r=0,int i=0)
    {
        this ->r=r;
        this ->i=i;

    }
    complex operator += (complex c2)
    {
        r+=c2.r;
        i+=c2.i;
        return *this;
    }
    complex operator -= (complex c2)
    {
        r-=c2.r;
        i-=c2.i;
        return *this;
    }
    complex operator *= (complex c2)
    {
        double tempr=r*c2.r-i*c2.i;
        i=r*c2.i+i*c2.r;
        r=tempr;
        return *this;
    }
    complex operator /= (complex c2)
    {
        double denom=c2.r*c2.r+c2.i*c2.i;
        double tempr=(r*c2.r-i*c2.i)/denom;
        i=(i*c2.r-r*c2.i)/denom;
        r=tempr;
        return *this;
    }
    void display()
    {
        cout<<r;
        (i>=0)?cout<<"+"<<i<<"i\n":cout<<i<<"i"<<endl;
    }
};
int main()
{
    complex c1(3,4);
    complex c2(1,2);
    cout<<"C1:";c1.display();
    cout<<"C2:";c2.display();
    complex c3=c1;
    c3.display();
    c3+=c2;
    c3.display();
    c3-=c2;
    c3.display();
    c3*=c2;
    c3.display();
    c3/=c2;
    c3.display();
    return 0;
}