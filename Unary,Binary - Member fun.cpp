#include<iostream>
using namespace std;
class Number
{
	int x;
	
public:
	Number(int a)
	{
		x = a;
	}
	void operator-()
	{
		x = -x;
	}
	void display()
	{
		cout<<"value="<< x << endl;
	}
};
int main()
{
	Number n(10);
	cout<<"Before unary operation:"<<endl;
	n.display();
	-n;
	cout<<"After unary operation:"<<endl;
	n.display();
	return 0;
}
