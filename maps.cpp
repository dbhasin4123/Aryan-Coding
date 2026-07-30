#include <iostream>
#include <map>
using namespace std;

int main() {
 map<string , int> people = { {"Aryan" ,95} , {"Rahul",88} , {"Simran" ,92} , {"Neha" ,92} } ;
 
 cout << "Aryan marks : " << people["Aryan"] << endl;
 cout << "Rahul marks : " << people["Rahul"] << endl;
 cout << "Simran marks : " << people["Simran"] << endl;
 cout << "Neha marks : " << people["Neha"] << endl;
 
 cout << "Marks of Simran is : " << people["Simran"] << endl;
 
 people["Rahul"] = 92;
 people.erase("Neha");
 
  cout << "Aryan marks : " << people["Aryan"] << endl;
 cout << "Rahul marks : " << people["Rahul"] << endl;
 cout << "Simran marks : " << people["Simran"] << endl;
 
 cout << "Total numbers of students : " << people.size();
 
 return 0;
 
}