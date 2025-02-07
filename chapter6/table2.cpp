#include <iostream>
using namespace std;

int main()
{
    // Print series: 201, 202, 204, 207, ...

    int n, p;

    for (p = 1; p <= 10; p++)
    {
        n = 200 + p;
        if (p == 1)
        {
            cout << n;
        }
        else
        {
            cout << "," << n;
        }
    }

    return 0;
}