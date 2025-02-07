#include <iostream>
using namespace std;

int main()
{
    // Print series:  3, 4, 7, 8, 11, 12, ...

    int n = 3, p;

    cout << n;

    for (p = 1; p <= 10; p++)
    {
        if (p % 2 != 0)
        {
            n = n + 1;
            cout << "," << n;
        }
        else
        {
            n = n + 3;
            cout << "," << n;
        }
    }

    return 0;
}