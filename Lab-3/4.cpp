// Write a C++ program that: 
// 1. Defines the Person class with the attributes(name(string) and age(int)) and member functions(setData(),displayData()). 
// 2. Creates an object person1 using the default constructor. 
// 3. Sets the name and age using the setData() function. 
// 4. Displays the name and age of person1 using the displayData() function. 


#include<iostream>
using namespace std;
class Person{
    string name;
    int age;
    public:
    Person(){
        name="unknown";
        age=0;
    }
    void setData(string n,int a){
        name=n;
        age=a;
    }
    void displayData(){
        cout<<"Name of person: "<<name<<"\t"<<"Age: "<<age<<endl;
    }
};
int main(){
Person person1;
person1.displayData();
Person person2;
person2.setData("Bikash",19);
person2.displayData();




return 0;
}