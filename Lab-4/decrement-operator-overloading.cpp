#include<iostream>
using namespace std;
class number
{
    private:
    int n;
    public:
    number(int n=0)
    {
        this ->n=0;
    }
    int operator -- ()
    {
        return (n--);
    }
};
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    number n1(n);
    cout<<--n<<endl;

}