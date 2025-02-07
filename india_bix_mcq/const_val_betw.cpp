#include <iostream>
using namespace std;

int main()
{
    // Print series: 21, 9, 21, 11, 21, 13, 21, ...

    int n = 21, p, m = 9;

    cout << n;

    for (p = 1; p <= 10; p++)
    {
        if (p % 2 != 0)
        {
            cout << "," << m;
            m = m + 2;
        }
        else
        {
            cout << "," << n;
        }
    }

    return 0;
}