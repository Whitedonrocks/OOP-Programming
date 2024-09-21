// Create a C++ class Circle with a private attribute radius (double). Include public member functions: 
// • setRadius(double r): Sets the radius of the circle. 
// • calculateArea(): Calculates and returns the area of the circle. 
// • calculateCircumference(): Calculates and returns the circumference of the circle. 
// In the main() function, create an object of the Circle class, set its radius, and display its area and circumference. 

#include<iostream>
using namespace std;
class Circle{
    double radius;
    public:
    void setRadius(double r){
        radius=r;
    }
    double calculateArea(){
        return 3.14*radius*radius;
    }

    double calculateCircumference(){
        return 2*3.14*radius;
    }
};
int main(){
    Circle c1;
    c1.setRadius(6);
    cout<<"Area of circle is: "<<c1.calculateArea()<<endl;
    cout<<"Circumference of circle is: "<<c1.calculateCircumference()<<endl;

    




return 0;
}