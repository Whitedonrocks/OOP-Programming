// Write a C++ program that:
// 1. Defines the Complex class with the specified attributes(real(int),imag(int)) and
// constructor.
// 2. Creates two Complex objects (c1 and c2) with user-defined real and imaginary parts.
// 3. Uses the add function to add c1 and c2 and display the sum.

#include<iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    Complex(int r=0, int i=0){
        real=r;
        imag=i;
    }
    void add(Complex c1, Complex c2){
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
        cout<<c1.real<<(c1.imag<0?"-":"+")<<abs(c1.imag)<<"i"<<endl;
        cout<<c2.real<<(c2.imag<0?"-":"+")<<abs(c2.imag)<<"i"<<endl;
        cout<<real<<(imag<0?"-":"+")<<abs(imag)<<"i"<<endl;
        
    }
  
};
int main(){
  Complex c1(4,5);
  
  Complex c2(8,-3);
 
  Complex c3;
  c3.add(c1,c2);



return 0;
}