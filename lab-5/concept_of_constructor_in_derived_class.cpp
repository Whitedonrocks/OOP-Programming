#include<iostream>
using namespace std;
class Person
{
    private:
        string name , address;
    public:
        Person(string n, string a)
        {
            name=n;
            address=a;
        }
        protected:void showPerson()
        {
            cout<<"Name:"<<name<<endl;
            cout<<"Address:"<<address<<endl;
        }
};
class Student: public Person
{
    private:int roll;
    public:
        Student(string n,string a,int r):Person(n,a)
        {
            roll=r;
        }
        void showStudent()
        {
            showPerson();
            cout<<"Roll no:"<<roll<<endl;
        }
};
int main()
{
    string name,address;
    int roll;
    cout<<"Enter name:"<<endl;
    cin>>name;
    cout<<"Enter address:"<<endl;
    cin>>address;
    cout<<"Enter roll no:"<<endl;
    cin>>roll;
    Student s(name,address,roll);
    cout<<"Students Information:"<<endl;
    s.showStudent();
    return 0;
}