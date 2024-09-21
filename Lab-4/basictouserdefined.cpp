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
    void display()
    {
        cout<<"Feet: "<<feet<<" Inches: "<<inches<<endl;
    }
    Distance(float f)
    {
        feet=static_cast<int>(f);
        inches=(f-feet)*12.0;
    }
};
int main()
{
    float distance_feet=5.5;
    Distance d=distance_feet;
    cout<<"Implicit conversion from float to Distance:"<<endl;
    d.display();
    return 0;
}
