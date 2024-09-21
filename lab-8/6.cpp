// Write a C++ program that creates a text file named marks.txt and writes subject names along with their corresponding marks in a formatted manner. The program should align the marks using the setw() manipulator to ensure proper spacing. After writing the data to the file, the program should read the content back from the file and display it on the console.

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main(){
    ofstream fout("marks.txt");
    fout<<"Subject"<<setw(30)<<"Marks"<<endl;
    fout<<"Mathemathics"<<setw(23)<<"80"<<endl;
    fout<<"English"<<setw(28)<<"70"<<endl;
    fout.close();

    ifstream fin("marks.txt");
    string line;
    while(getline(fin,line)){
        cout<<line<<endl;
    }
    fin.close();
    return 0;
}