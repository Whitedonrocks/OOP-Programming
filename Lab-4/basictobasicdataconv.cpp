#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num_int=10;
    double num_double=num_int;
    cout<<"Implicit conversion from int to double:"<<endl;
    cout<<"Double Value"<<fixed<<setprecision(2)<<num_double<<endl;
    cout<<"Integer Value"<<fixed<<setprecision(2)<<num_int<<endl;
    float num_float=3.14f;
    int num_int_f_float=num_float;
    cout<<"Implicit conversion from float to int:"<<endl;
    cout<<"Float value:"<<num_float<<endl;
    cout<<"Integer value after conversion:"<<num_int_f_float<<endl;
    return 0;
}