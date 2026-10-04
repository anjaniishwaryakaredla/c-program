#include<iostream>
using namespace std;
template <class T>
class Calculator
{
	T a, b;
	
	public:
		Calculator(T x, T y)
		{
			a = x;
			b = y;
		}
		T add()
		{
			return a + b;
		}
};
int main()
{
	Calculator<int> c1(10,20);
	Calculator<float> c2(5.5, 2.5);
	cout << "Integer sum:" << c1.add() << endl;
	cout << "Float sum:" << c2.add() << endl;
	return 0;
}
