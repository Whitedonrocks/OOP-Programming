// Write a C++ program to illustrate the concept of random access to file.

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("random.txt");
    fout<<"First line"<<endl;
    fout<<"Second line"<<endl;
    fout.close();

    ifstream fin("random.txt");
    string line;
    fin.seekg(12,ios::beg);
    getline(fin,line);
    cout<<"Random access output: "<<line<<endl;
    fin.close();
    return 0;


}