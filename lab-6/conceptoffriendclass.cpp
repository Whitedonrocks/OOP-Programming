#include<iostream>
using namespace std;
class Alpha
{
    private:
    int x;
    public:
    void Setdata(int y)
    {
        x=y;
    }
    friend class Beta;
};
class Beta
{
    public:
    void Showdata(Alpha a)
    {
        cout<<"x="<<a.x<<endl;
    }
};
int main()
{
    Alpha a;
    a.Setdata(5);
    Beta b;
    b.Showdata(a);
    return 0;
}