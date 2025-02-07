#include <iostream>
using namespace std;

int main()
{
    // Print series: 36, 34, 30, 28, 24, ...

    int n = 36, m, p;

    cout << n;

    for (p = 1; p <= 10; p++)
    {
        if (p % 2 != 0)
        {
            n = n - 2;
            cout << "," << n;
        }
        else
        {
            m = m - 4;
            cout << "," << m;
        }
    }

    return 0;
}