// Write a C++ program to illustrate the concept of file input/output with streams.

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout("output.txt");
    fout<<"This is first line. "<<endl;
    fout<<"This is second line. "<<endl;
    fout.close();
    ifstream fin("output.txt");
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}