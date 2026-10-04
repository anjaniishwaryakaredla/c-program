#include <iostream>
using namespace std;

class Student {
public:
    void studentDetails() {
        cout << "Student Details" << endl;
    }
};

class Sports {
public:
    void sportsDetails() {
        cout << "Sports Details" << endl;
    }
};

// Line 15: Inherits from both Student and Sports classes
class Result : public Student, public Sports {
public:
    void displayResult() {
        cout << "Result Details" << endl;
    }
};

int main() {
    Result r;
    r.studentDetails(); // Line 23: Calls the Student base class function
    r.sportsDetails();  // Line 24: Calls the Sports base class function
    r.displayResult();
    return 0;
}
