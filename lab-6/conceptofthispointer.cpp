#include<iostream>
using namespace std;
class Test
{
    private:
    int a,b;
    public:
    Test(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    int sum()
    {
        return a+b;
    }
};
int main()
{
    Test t(5,6);
    cout<<"The sum of two number is:"<<t.sum()<<endl;
    return 0;
}