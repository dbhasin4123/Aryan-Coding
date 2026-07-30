#include <iostream>
using namespace std;

class father {
public :
void showfather() {
cout << "Father name : Rajesh\n";
}
};

class mother {
public :
void showmother() {
cout << "Mother name : Sunita\n";
}
};

class child : public father , public mother {
public :
void showchild() {
cout << "Child name : Anirudh";
}
};

int main() {
child myobj;
myobj.showfather();
myobj.showmother();
myobj.showchild();
return 0;
}
