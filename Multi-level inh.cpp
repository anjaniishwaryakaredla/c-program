#include <iostream>
using namespace std;

class GrandParent {
public:
    void showGrandParent() {
        cout << "GrandParent class" << endl;
    }
};

class Parent : public GrandParent {
public:
    void showParent() {
        cout << "Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void showChild() {
        cout << "Child class" << endl;
    }
};

int main() {
    Child obj;

    obj.showGrandParent();
    obj.showParent();
    obj.showChild();

    return 0;
}
