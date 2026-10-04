#include <iostream>
using namespace std;

class Student
{
    int rollNo;

public:
    
    Student(int r)
    {
        rollNo = r;
    }

   
    Student(const Student &s)
    {
        rollNo = s.rollNo;
    }

    void display()
    {
        cout << "Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s1(101);

    
    Student s2 = s1;

    cout << "Original object:" << endl;
    s1.display();

    cout << "Copied object:" << endl;
    s2.display();

    return 0;
}
