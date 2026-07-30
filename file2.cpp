#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
string name;
int rollno;
int marks;

ofstream myFile("student.txt");
cout << "Enter student name : " << endl;
cin >> name;
cout << "Enter roll no : " << endl;
cin >> rollno;
cout << "Enter marks : " << endl;
cin >> marks;

myFile << "Name : " << name << endl;
myFile << "Roll no : " << rollno << endl;
myFile << "Marks : " << marks;

myFile.close();

string mytext;
ifstream myread("student.txt");

while (getline(myread,mytext)) {
cout << mytext << endl;

}
return 0;
}