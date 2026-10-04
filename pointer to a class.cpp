#include <iostream>
using namespace std;

class Student {
public:
    void display() {
        cout << "Hello Student" << endl;
    }
};

int main() {
    Student s;

    Student *ptr = &s;  // Pointer to object

    ptr->display();

    return 0;
}
