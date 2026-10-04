#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;


    d.push_back(20);
    d.push_back(30);
    d.push_front(10);

    cout << "Deque: ";
    for (int i = 0; i < d.size(); i++)
        cout << d[i] << " ";

    d.pop_front();

    cout << "\nAfter deleting front: ";
    for (int i = 0; i < d.size(); i++)
        cout << d[i] << " ";


    d.pop_back();

    cout << "\nAfter deleting back: ";
    for (int i = 0; i < d.size(); i++)
        cout << d[i] << " ";

    return 0;
}
