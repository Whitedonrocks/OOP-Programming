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
    complex operator + (complex c2)
    {
        complex c3;
        c3.r=r+c2.r;
        c3.i=i+c2.i;
        return c3;
    }
    complex operator - (complex c2)
    {
        complex c3;
        c3.r=r-c2.r;
        c3.i=i-c2.i;
        return c3;
    }
    complex operator * (complex c2)
    {
        return complex(r*c2.r-i*c2.i,r*c2.i-i*c2.r);
    }
    complex operator / (complex c2)
    {
        int denom=c2.r*c2.r+c2.i*c2.i;
        return complex((r*c2.r+i*c2.i)/denom,(i*c2.r-r*c2.i)/denom);
    }
    void display()
    {
        cout<<r;
        (i>=0)?cout<<"+"<<i<<"i\n":cout<<i<<"i"<<endl;
    }
};
int main()
{
    int i,r,i1,r1;
    cout<<"Enter the number"<<endl;
    cin>>i>>r;
    cout<<"Enter the number"<<endl;
    cin>>i1>>r1;
    complex c1(i,r);
    complex c2(i1,r1);
    complex c3=(c1+c2);
    cout<<"C1"<<endl;
    c1.display();
    cout<<"C2"<<endl;
    c2.display();
    cout<<"C3"<<endl;
    c3.display();
    complex c4=(c1-c2);
    cout<<"C4"<<endl;
    c4.display();
    complex c5=(c1*c2);
    cout<<"C5"<<endl;
    c5.display();
    complex c6=(c1/c2);
    cout<<"C6"<<endl;
    c6.display();
}