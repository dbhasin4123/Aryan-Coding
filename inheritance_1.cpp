#include <iostream>
using namespace std;


class Laptop {
public :
string brand = "Dell";
void poweron() {
cout << "Laptop is starting...\n";
}
};

class GamingLaptop : public Laptop {
public :
string model = "Alienaware";
};

int main() {
GamingLaptop myObj;
 myObj.poweron();
cout << myObj.brand << endl;
cout << myObj.model;
return 0 ;
}

