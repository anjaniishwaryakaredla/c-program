#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo = 10;

private:
    int marks = 90;

protected:
    int age = 20;

public:
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s;

    cout << "Roll No: " << s.rollNo << endl;

    s.display();

    return 0;
}
