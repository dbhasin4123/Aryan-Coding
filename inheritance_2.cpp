#include <iostream>
using namespace std;

class Device {
public :
string company = "Apple";
void poweron() {
cout << " Device is powered on!\n ";
}
};

class phone : public Device {
public :
string type = "Smartphone";
};

class iphone : public phone {
public :
string model = "iphone 16";
};

int main() {
iphone myobj;
myobj.poweron();
cout << myobj.company << " " << myobj.type << " " << myobj.model;
return 0;
}

