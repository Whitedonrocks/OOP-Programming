// Write a C++ program that reads binary data from a file named student.txt containing five students details, and displays the stored data on the console. The program should use the ifstream class for reading the binary data and the read() function to retrieve each Student object. The details of each student should then be printed using the write_data() method.

#include<iostream>
#include<fstream>
using namespace std;
class Student{
    int roll;
    string name;
    string address;
    public:
    void write_data();
};
void Student::write_data(){
    cout<<"Roll number: "<<roll<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<endl;
}
int main(){
    Student s;
    int i;
    ifstream fin;
    fin.open("student.txt");
    for(i=0;i<5;i++){
        fin.read((char *)&s,sizeof(Student));
        s.write_data();
    }
    fin.close();
    return 0;
}