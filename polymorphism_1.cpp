#include <iostream>
using namespace std;


class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n";
    }
};

class cat : public Animal {
  public :
    void animalSound() {
    cout << "Cat makes a sound Meow-Meow\n";
    }
};

class dog : public Animal {
  public :
    void animalSound() {
    cout << "Dog makes a sound Bow-Bow\n";
    }
};

int main() {
Animal myanimal;
cat mycat;
dog mydog;

myanimal.animalSound();
mycat.animalSound();
mydog.animalSound();
return 0;
}