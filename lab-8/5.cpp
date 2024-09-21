//Write a C++ program that demonstrates how to format output when writing to a file using manipulators such as fixed, setprecision(), width(), and fill().

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main(){

    //writing
    ofstream fout;
    fout.open("example.txt");
    fout<<fixed<<setprecision(2);
    fout<<"Formated data : \n";
    fout<<"Number 1: "<<1234.4444<<endl;
    fout<<"Number 2: "<<9876.54321<<endl;
    fout<<"padded number: ";
    fout.width(10);
    fout<<42<<endl;
    fout<<"filled number: ";
    fout.fill('*');
    fout.width(10);
    fout<<42<<endl;
    fout.close();
    
    //reading
    ifstream fin;
    fin.open("example.txt");
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();
    return 0;

}
