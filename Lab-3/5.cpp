// Write a C++ program that: 
// 1. Defines the Rectangle class with the attributes(length(int) and width(int)) and constructor. 
// 2. Creates an object rect1 of Rectangle with a length of 5.0 and width of 3.0 using the parameterized constructor. 
// 3. Calculates and displays the area and perimeter of rect1 using the member functions. 

#include<iostream>
using namespace std;
class Rectangle{
    int length, width;
    public:
    Rectangle(int l=0,int w=0){
        length=5;
        width=3;
    }
    
    void area(){
        cout<<"Area = "<<length*width<<endl;
    }
    void perimeter(){
        cout<<"Perimeter= "<<2*(length+width)<<endl;
    }
};
int main(){
    Rectangle rect1;
    rect1.area();
    rect1.perimeter();  




return 0;
}