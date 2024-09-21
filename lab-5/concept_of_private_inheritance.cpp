#include<iostream>
using namespace std;
class Person
{
    private:
        string name , address;
    public:
        void setPerson()
        {
            cout<<"Enter name:"<<endl;
            cin>>name;
            cout<<"Enter address:"<<endl;
            cin>>address;
        }
        protected:void showPerson()
        {
            cout<<"Name:"<<name<<endl;
            cout<<"Address:"<<address<<endl;
        }
};
class Student: private Person
{
    private:int roll;
    public:
        void setStudent()
        {
            setPerson();
            cout<<"Enter roll no:"<<endl;
            cin>>roll;
        }
        void showStudent()
        {
            showPerson();
            cout<<"Roll no:"<<roll<<endl;
        }
};
int main()
{
    Student s;
    s.setStudent();
    cout<<"Students Information:"<<endl;
    s.showStudent();
    return 0;
}