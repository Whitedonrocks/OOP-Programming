#include<iostream>
using namespace std;
class Feet;
class Inches
{
private:
    float inches;
public:
    Inches(float i=0)
    {
        inches=i;
    }
    operator Feet();
};
class Feet
{
    private:
    float feet;
    public:
    Feet(float f=0)
    {
        feet=f;
    }
    void display()
    {
        cout<<"Feet: "<<feet<<endl;
    }
};
Inches::operator Feet()
{
    return Feet(inches/12);
}
int main()
{
    Inches i(66.0);
    Feet f=i;
    cout<<"Implicit conversion from Inches to Feet: "<<endl;
    f.display();
    return 0;
}