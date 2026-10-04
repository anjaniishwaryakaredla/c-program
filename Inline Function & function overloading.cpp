#include<iostream>
using namespace std;
inline int add(int a, int b)
{
	return a + b;
}
inline int add(int a, int b, int c)
{
	return a + b + c;
}
inline double add(double a, double b)
{
	return a + b;
}
int main()
{
	cout<<"Sum of two integers:"<<add(10,20)<<endl;
	cout<<"Sum of three integers:"<<add(10,20,30)<<endl;
	cout<<"Sum of two decimal numbers:"<<add(18.7, 7.18)<<endl;
	return 0;
}
