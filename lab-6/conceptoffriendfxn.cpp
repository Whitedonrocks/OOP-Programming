#include<iostream>
using namespace std;
class sample
{
    private:
    int a,b;
    public:
    void setvalue()
    {
        cout<<"Enter the value of a:"<<endl;
        cin>>a;
        cout<<"Enter the value of b:"<<endl;
        cin>>b;
    }
    friend float mean(sample S);
};
float mean(sample S)
{
    return ((S.a+S.b)/2);
}
int main()
{
    sample x;
    x.setvalue();
    cout<<"MEan Value:"<<mean(x);
    return 0;
}