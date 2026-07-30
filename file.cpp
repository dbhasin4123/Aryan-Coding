#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
ofstream myWrite("employee.txt");
myWrite << "Name : John\n";
myWrite << "Salary = 500000\n";
myWrite << "Department : IT\n";

myWrite.close();

string mytext;
ifstream myReadFile("employee.txt");


while (getline (myReadFile,mytext)) {
 cout << mytext << endl;
 
 }
 return 0;
 }
 
