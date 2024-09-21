// Define a C++ class Student with private attributes name (string), rollNumber (integer), and marks (array of floats). Include public member functions: 
// • setData(string n, int r, float m[]): Sets the name, rollNumber, and marks for the student. 
// • calculateAverageMarks(): Calculates and returns the average of the marks. • displayData(): Displays the name, rollNumber, and average marks of the student. 
// In the main() function, create two Student objects, set their data, calculate and display their average marks, and display their details.

#include<iostream>
using namespace std;
class Student{
    string name;
    int rollNumber;
    float marks[5];
    public:
    void setData(string n, int r, float m[]){
        name=n;
        rollNumber=r;
        for(int i=0;i<5;i++){
        marks[i]=m[i];
        }
    }
   float calculateAverageMarks(){
    
    float avg=0;
    for(int i=0;i<5;i++){
        avg=avg+marks[i];
    }
    return avg/5;

   }
   void displayData(){
    cout<<"Name :"<<name<<"\t"<<"Roll Number: "<<rollNumber<<"\t"<<"Marks :"<<calculateAverageMarks()<<endl;
   }
    
  
};
int main(){
 Student s1;
float marks1[]={34,44,33,25,22};
float marks2[]={34,44,32,27,29};
s1.setData("Ram",12,marks1);
s1.displayData();
Student s2;
s2.setData("Hari",13,marks2);
s2.displayData();
return 0;
}