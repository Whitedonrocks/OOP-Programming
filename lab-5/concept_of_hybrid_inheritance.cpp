#include<iostream>
using namespace std;
class Address
{
    private:string address;
    public:
        void setaddress()
        {
            cout<<"Enter address:"<<endl;
            cin>>address;
        }
        void showaddress()
        {
            cout<<"Address:"<<address<<endl;
        }
};
class Person: public Address
{
    private:
        string name;
    public:
        void setPerson()
        {
            cout<<"Enter name:"<<endl;
            cin>>name;
            setaddress();
        }
        protected:void showPerson()
        {
            cout<<"Name:"<<name<<endl;
            showaddress();
        }
};
class Teacher: public Person
{
    private:
        string fact;
        int salary;
    public:
        void gsetPerson()
        {
            setPerson();
            cout<<"Enter Teacher ID:"<<endl;
            cin>>fact;
            cout<<"Enter Teacher Salary"<<endl;
            cin>>salary;
        }
        void gshowPerson()
        {
            showPerson();
            cout<<"Teacher ID:"<<fact<<endl;
            cout<<"Teacher Salary:"<<salary<<endl;
        }
};

class Student: public Person
{
    private:int roll,fee;
    public:
        void setStudent()
        {
            setPerson();
            cout<<"Enter roll no:"<<endl;
            cin>>roll;
            cout<<"Enter Fee:"<<endl;
            cin>>fee;
        }
        void showStudent()
        {
            showPerson();
            cout<<"Roll no:"<<roll<<endl;
            cout<<"FEE :"<<fee<<endl;
        }
};
int main()
{
    cout<<"Enter Student detail First the Teacher"<<endl;
    Student s;
    s.setStudent();
    Teacher T;
    T.gsetPerson();
    cout<<"Students Information:"<<endl;
    s.showStudent();
    cout<<"Teachers Information:"<<endl;
    T.gshowPerson();
    return 0;
}