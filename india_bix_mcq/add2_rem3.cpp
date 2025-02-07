#include <iostream>
using namespace std;

int main()
{
    // Print series: 7, 10, 8, 11, 9, 12, ...

    int n = 7, m = 10, p;

    cout << n << "," << m;

    for (p = 1; p <= 10; p++)
    {
        if (p % 2 != 0)
        {
            n++;
            cout << "," << n;
        }
        else
        {
            m++;
            cout << "," << m;
        }
    }

    return 0;
}