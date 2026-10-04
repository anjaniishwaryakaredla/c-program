#include <iostream>
using namespace std;

int main()
{
    try
    {
        int choice;
        cout << "Enter 1 or 2: ";
        cin >> choice;

        if (choice == 1)
            throw 10;
        else
            throw 5.5;
    }

    catch (int x)
    {
        cout << "Integer exception: " << x;
    }

    catch (double x)
    {
        cout << "Double exception: " << x;
    }

    return 0;
}
