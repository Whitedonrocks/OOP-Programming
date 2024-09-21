// Write a C++ program to illustrate the concept of File Access Pointer and their manipulator.

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("file_pointer.txt");
    fout<<"This is an example of file access pointer";
    fout.seekp(0,ios::beg);
    fout<<"F";
    fout.seekp(-5,ios::end);
    fout<<"Z";
    fout.seekp(1,ios::cur);
    fout<<"z";
    cout<<"Current position of put pointer: "<<fout.tellp()<<endl;
    fout.close();
    ifstream fin("file_pointer.txt");
    char ch;
    fin.seekg(11,ios::cur);
    fin.get(ch);
    cout<<"Character after 11 character: "<<ch<<endl;
    cout<<"Current poisition of get pointer: "<<fin.tellg()<<endl;
    fin.close();
    return 0;
    
}