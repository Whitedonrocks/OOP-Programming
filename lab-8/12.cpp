//Write a C++ program to illustrate the concept of stream operator overloading.

#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;
class Complex{
    float real,imag;
    public:
    Complex(float r=0, float i=0){
        real=r;
        imag=i;
    }
    friend istream &operator >> (istream &input,Complex &c){
        cout<<"Enter a real part: ";
        input>>c.real;
        cout<<"Enter a imag part: ";
        input>>c.imag;
        return input;
    }
    friend ostream &operator <<(ostream &output,Complex &c){
        output<<c.real;    //<<((c.imag>=0)?"+":"-")<<abs(c.imag)<<"i"<<endl;
        if(c.imag>=0){
            output<<"+"<<c.imag<<"i";
        }
        else{
            output<<"-"<<-c.imag<<"i";
        }
        return output;
    }
};
int main(){
    Complex c1;
    cin>>c1;
    cout<<"The complex number is: "<<c1<<endl;
    return 0;

}