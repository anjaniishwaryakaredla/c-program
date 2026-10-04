#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;


    m[1] = "Apple";
    m[2] = "Banana";
    m[3] = "Mango";

    cout << "Map:\n";
    for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)
        cout << i->first << " " << i->second << endl;

    cout << "Value at key 2: " << m[2] << endl;


    m.erase(1);

    cout << "After deleting key 1:\n";
    for (map<int, string>::iterator i = m.begin(); i != m.end(); i++)
        cout << i->first << " " << i->second << endl;

    return 0;
}
