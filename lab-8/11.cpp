//Write a C++ program to illustrate the concept of testing error during file operation.

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("error.txt");
    fout<<"first line"<<endl;
    fout<<"second line"<<endl;
    if(fout.good()){
        cout<<"file writing went successfully."<<endl;
    }
    if(fout.fail()){
        cout<<"Failure occured while reading a file."<<endl;
    }
    
    ifstream fin("error.txt");
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    if(fin.bad()){
        cout<<"A serious error occured while reading the file. "<<endl;
    }
    if(fin.eof()){
        cout<<"Reached the end of the file. "<<endl;
    }
    fin.close();
    return 0;
}       