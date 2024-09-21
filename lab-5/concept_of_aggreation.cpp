#include<iostream>
using namespace std;
class Employee
{
 public:
    string name,address;
    Employee(string n,string a)
    {
        name=n;
        address=a;
    }
};
class Company
{
public:
    Employee *employee;
    int cid;
    string cname;
    Company(int cid, string cname,Employee *employee)
    {
        this->cid=cid;
        this->cname=cname;
        this->employee=employee;
    }
    void display()
    {
        cout<<"Company ID:"<<cid<<endl;
        cout<<"Company Name:"<<cname<<endl;
        cout<<"Employee Name:"<<employee->name<<endl;
        cout<<"Employee Address:"<<employee->address<<endl;
    }
};
int main()
{
    int id;
    string cname, name, address;
    cout<<"Enter Company NAme"<<endl;
    getline(cin,cname);
    cout<<"ENter Company ID"<<endl;
    cin>>id;
    cin.ignore();
    cout<<"Enter Person Name"<<endl;
    getline(cin,name);
    cout<<"Enter person Address"<<endl;
    cin>>address;
    Employee e(name,address);
    Company c(id,cname,&e);
    c.display();
    return 0;
}