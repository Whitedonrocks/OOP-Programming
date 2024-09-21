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
class study: public Person
{
    private:
        string grade;
    public:
        void gsetPerson()
        {
            setPerson();
            cout<<"Enter Grade:"<<endl;
            cin>>grade;
        }
        protected:void gshowPerson()
        {
            showPerson();
            cout<<"Grade:"<<grade<<endl;
        }
};

class Student: public study
{
    private:int roll;
    public:
        void setStudent()
        {
            gsetPerson();
            cout<<"Enter roll no:"<<endl;
            cin>>roll;
        }
        void showStudent()
        {
            gshowPerson();
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