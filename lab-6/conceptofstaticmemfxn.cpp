#include<iostream>
using namespace std;
class Student
{
    private:
    int roll;
    string name;
    static int counter;
    public:
    void getdata()
    {
        cout<<"Enter rollno and name"<<endl;
        cin>>roll>>name;
        counter++;
    }
    static void displaycount()
    {
        cout<<"Count="<<counter<<endl;
    }
};
int Student::counter=0;
int main()
{
    Student::displaycount();
    Student o;
    o.getdata();
    Student o1;
    o1.getdata();
    Student::displaycount();
    return 0;
}