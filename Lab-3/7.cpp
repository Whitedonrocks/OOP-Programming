// Write a C++ program that:
// 1. Defines the Book class with the attributes(title(string), author(string)) and constructor.
// 2. Uses the destructor to display a message indicating the destruction of a Book object.
// 3. Creates an object book1 of Book with a title of "The Great Gatsby" and author "F. Scott
// Fitzgerald".
// 4. Displays a message when book1 is destroyed at the end of the program.



#include<iostream>
using namespace std;
class Book{
    string title, author;
    public:
        Book(){
            title="unknown";
            author="unknown";
        }
        Book(string t, string a){
            title=t;
            author=a;
        }
        void display(){
            cout<<"Title: "<<title<<"\t\t"<<"Author: "<<author<<endl;
        }
        ~Book(){
            cout<<"Book1 is distroyed."<<endl;
        }
};
int main(){
    Book book1("The Great Gatsby","F. ScottFitzgerald");
    book1.display();





return 0;
}