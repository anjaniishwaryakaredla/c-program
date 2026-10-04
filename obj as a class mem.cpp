#include <iostream>
using namespace std;

class Address {
public:
    void display() {
        cout << "Address class" << endl;
    }
};

class Student {
    Address addr;   // Object of Address as a member

public:
    void show() {
        addr.display();
        cout << "Student class" << endl;
    }
};

int main() {
    Student s;
    s.show();

    return 0;
}
