#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter value: ";
    cin >> i;
    while (i >= 1)
    {
        if (i % 2 == 0)
        {
            cout << i << " is even" << endl;
        }
        else
        {
            cout << i << " is Odd" << endl;
        }
        i--;
    }
}