#include <iostream>
using namespace std;

int main()
{
    // Print series: 8, 22, 8, 28, 8, ...

    int n = 8, p, m = 22;

    cout << n;

    for (p = 1; p <= 10; p++)
    {
        if (p % 2 != 0)
        {
            cout << "," << m;
            m = m + 6;
        }
        else
        {
            cout << "," << n;
        }
    }

    return 0;
}