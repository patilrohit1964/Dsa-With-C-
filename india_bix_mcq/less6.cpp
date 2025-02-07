#include <iostream>
using namespace std;

int main()
{
    // Print series: 58, 52, 46, 40, 34, ...

    int n = 58, p;

    cout << n;

    for (p = 1; p <= 10; p++)
    {
        n = n - 6;
        cout << "," << n;
    }

    return 0;
}