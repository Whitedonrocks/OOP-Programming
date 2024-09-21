//Write a C++ program that reads the first line from a text file named abc.txt and displays it on the console.

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream fin;
    char str[100];
    fin.open("abc.txt");
    fin.getline(str,100);
    cout<<"From file: "<<endl;
    cout<<str;
    fin.close();
    return 0;
}