#include <iostream>
using namespace std;

int main()
{
    // Print series:  14, 28, 20, 40, 32, 64, ...

    int n = 14, p;

    cout << n;

    for (p = 1; p <= 10; p++)
    {
        if (p % 2 != 0)
        {
            n = n * 2;
            cout << "," << n;
        }
        else
        {
            n = n - 8;
            cout << "," << n;
        }
    }

    return 0;
}