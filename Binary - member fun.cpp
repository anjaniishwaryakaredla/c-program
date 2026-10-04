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
	Number operator+(Number n)
	{
		Number temp(0);
		temp.x = x + n.x;
		return temp;
	}
	void display()
	{
		cout<<"value="<<x<<endl;
	}
};
int main()
{
	Number n1(10), n2(20), n3(0);
	n3 = n1 + n2;
	cout<<"Sum:";
	n3.display();
	return 0;
}
