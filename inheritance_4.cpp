#include <iostream>
using namespace std;


class Employee  {
  protected :
  int salary;
  };
  
class bonus : public Employee {
public :
int bonus;
 void setsalary(int s) {
 salary = s;
 }
 
 int getsalary() {
 return salary;
 }
 
 };
 
 int main () {
 bonus myobj;
 myobj.setsalary(6000000);
 cout << "Salary :" << " " << myobj.getsalary() << "\n";
 myobj.bonus = 200000;
 cout << "Bonus :" << " "<< myobj.bonus;
 return 0;
 }