// Write a C++ program that: 
// 1. Defines the Circle class with the attributes(radius(float)) and constructors. 
// 2. Creates an object circle1 of Circle with some radius using the parameterized constructor. 
// 3. Uses the copy constructor to create another object circle2 from circle1. 4. Displays the radius and area of both circle1 and circle2.


#include<iostream>
using namespace std;
class Circle{
    float radius;
    public:
        Circle(int r=0){
            radius=r;
        }
        Circle(Circle &r){
            radius=r.radius;
        }
        float area(){
            return 3.14*radius*radius;
        }
        float display(){
            cout<<"Area is "<<area()<<endl;
        }


};
int main(){
    Circle c1(5);
    c1.display();
    Circle c2=c1;
    c2.display();
    return 0;   
}