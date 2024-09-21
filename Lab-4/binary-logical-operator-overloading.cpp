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
    bool operator && (complex c2)
    {
        return ((r&&c2.r)&&(i&&c2.i));
    }
    bool operator || (complex c2)
    {
        return ((r||c2.r)&&(i||c2.i));
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
    complex c2;
    cout<<"C1:";c1.display();
    cout<<"C2:";c2.display();
    cout<<"c1&&c2 "<<(c1&&c2)<<endl;
    cout<<"c1||c2 "<<(c1||c2)<<endl;
    return 0;
}