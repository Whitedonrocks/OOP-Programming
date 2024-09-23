#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter value of a and b:"<<endl;
    cin>>a>>b;
    if(a>b)
    {
        cout<<a<<" is greater than "<<b<<endl;
    }
    else{
        cout<<b<<" is greater than "<<a<<endl;
    }
    int c,d,e;
    cout<<"Enter value of c,d and e:"<<endl;
    cin>>c>>d>>e;
    if(c>d)
    {

        if(c>e)
        {

            cout<<c<<" is the largest value"<<endl;
        }
        else
        {

            cout<<e<<" is the largest value"<<endl;
        }
    }
    else{
        if(d>e)
        {
            cout<<d<<"is largest"<<endl;
        }
        else{
            cout<<e<<" is the largest value"<<endl;
        }
    }
    int f,g,h;
    cout<<"Enter value of f,g and i:"<<endl;
    cin>>f>>g>>h;
    if(f>g&&f>h)
    {
        cout<<f<<" is the largest value"<<endl;
    }
    else if(g>f&&g>h)
    {

        cout<<g<<" is the largest value"<<endl;
    }
    else{
        cout<<h<<" is the largest value"<<endl;
    }
    int choice;
    cout<<"Enter any option:"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtraction"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cin>>choice;
    float num1,num2;
    cout<<"Enter value of num1 and num2:"<<endl;
    cin>>num1>>num2;
    switch(choice)
    {
    case 1:
        cout<<"sum:"<<(num1+num2);
        break;
    case 2:
        cout<<"sub:"<<(num1-num2);
        break;
    case 3:
        cout<<"mul:"<<(num1*num2);
        break;
    case 4:
        cout<<"div:"<<(num1/num2);
        break;
    default:
        cout<<"Invalid Option!!!"<<endl;
        break;
    }
    return 0;
}
