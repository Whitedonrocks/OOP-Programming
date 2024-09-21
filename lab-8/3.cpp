//Write a C++ program that defines a class Student with attributes roll, name, and address. The program should take input for five students details and write the binary data of each student object to a file named student.txt using the ofstream class. The data should be written using the write() function.

#include<iostream>
#include<fstream>
using namespace std;
class Student{
    int roll;
    string name,address;
    public:
    void readData();
};
void Student::readData(){
    cout<<"enter roll number: ";
    cin>>roll;
    cout<<"enter name: ";
    cin>>name;
    cout<<"enter address: ";
    cin>>address;
}
int main(){
    Student s;
    int i;
    ofstream fout;
    fout.open("student.txt");
    for(i=0;i<5;i++){
        s.readData();
        fout.write((char *)&s,sizeof(Student));
    }
    fout.close();
    return 0;

}