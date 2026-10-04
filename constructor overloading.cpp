#include<iostream>
using namespace std;
class Student
{
	int rollNo;
	string name;
public:
	Student()
	{
		rollNo = 0;
		name = "unknown";
	}
	Student(int r)
	{
		rollNo = r;
		name = "unknown";
	}
	Student(int r, string n)
	{
		rollNo = r;
		name = n;
	}
	void display()
	{
		cout<<"Roll No:"<< rollNo << endl;
		cout<<"Name:"<<name<<endl;
	}
};
int main()
{
	Student s1;
	Student s2(101);
	Student s3(102, "Rahul");
	cout<<"Student1"<<endl;
	s1.display();
	cout<<"/nStudent2"<<endl;
	s2.display();
	cout<<"/nStudent3"<<endl;
	s3.display();
	return 0;
}
