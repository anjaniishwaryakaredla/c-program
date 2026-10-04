#include<iostream>
using namespace std;
template <class T, class U>
class Data
{
	T a;
	U b;
	public:
		Data(T x, U y)
		{
			a = x;
			b = y;
		}
		void display()
		{
			cout << "First value:" << a << endl;
			cout << "Second value:" << b << endl;
		}
};
int main()
{
	Data<int, float> d(10, 5.5);
	d.display();
	return 0;	
}
