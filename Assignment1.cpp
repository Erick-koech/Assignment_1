#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    
    Person(string n, int a) {
        name = n;
        age = a;
    }
    
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
    
    void greet() {
        cout << "Hello, my name is " << name << endl;
    }
    
    void haveBirthday() {
        age++;
        cout << name << " is now " << age << " years old!" << endl;
    }
};

int main() {
    Person shawn("Shawn Kakasi", 20);
    shawn.display();
    shawn.greet();
    shawn.haveBirthday();
    
    return 0;
}