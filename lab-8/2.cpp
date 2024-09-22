//Write a C++ program that reads the content of a text file named abc.txt character by character and displays it on the console.

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    char ch;
    ifstream fin;
    fin.open("abc.txt");
    while(!fin.eof()){
        fin.get(ch);
        cout<<ch<<endl;;
    }
    fin.close();
    return 0;
}