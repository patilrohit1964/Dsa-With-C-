#include <iostream>
using namespace std;

int main()
{
    // Print series: 22, 21, 23, 22, 24, 23, ...

    int n = 22, p;

    cout << n;

    for (p = 1; p <= 10; p++)
    {
        if (p % 2 != 0)
        {
            n = n - 1;
            cout << "," << n;
        }
        else
        {
            n = n + 2;
            cout << "," << n;
        }
    }

    return 0;
}