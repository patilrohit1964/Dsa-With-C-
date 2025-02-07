#include <iostream>
using namespace std;

int main()
{
    // Print series: 31, 29, 24, 22, 17, ...

    int n = 31, p;

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
            n = n - 5;
            cout << "," << n;
        }
    }

    return 0;
}