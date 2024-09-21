//Write a C++ program to illustrate the concept of sequential access to file.

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("sequential.txt");
    fout<<"this is first line."<<endl;
    fout<<"this is second line."<<endl;
    fout.close();
    ifstream fin("sequential.txt");
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}