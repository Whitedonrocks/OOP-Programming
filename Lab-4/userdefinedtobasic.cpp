#include<iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;
public:
    Distance(int f=0, float i=0)
    {
        feet=f;
        inches=i;
    }
    operator float ()
    {
        return feet+static_cast<float>(inches)/12.0f;
    }
};
int main()
{
    Distance d(5,6);
    float totalfloat=static_cast<float>(d);
    cout<<"Total Float Representation: "<<totalfloat<<endl;
    return 0;
}
