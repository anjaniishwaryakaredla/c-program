#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_front(5);

    cout << "List: ";

    list<int>::iterator i;
    for (i = l.begin(); i != l.end(); i++)
        cout << *i << " ";

    l.remove(10);

    cout << "\nAfter removing 10: ";
    for (i = l.begin(); i != l.end(); i++)
        cout << *i << " ";

    l.push_back(30);

    cout << "\nAfter adding 30: ";
    for (i = l.begin(); i != l.end(); i++)
        cout << *i << " ";

    return 0;
}


