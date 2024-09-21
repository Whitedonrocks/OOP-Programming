#include<iostream>
using namespace std;
class Number
{
private:
    int n;
public:
    Number(int n)
    {
        this ->n=n;
    }
    int operator !()
    {
        return (-n);
    }
};
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    Number N1(n);
    cout<<!N1<<endl;
}

