#include <iostream>
using namespace std;

class Shape {
public :
 virtual void draw() {
cout << "Draw a shape";
}
};

class Circle : public Shape {
public :
void draw() {
cout << "Circle is oval";
}
};

int main() {
Shape* s;
Circle c;
s =& c;
s->draw();
return 0;
}
