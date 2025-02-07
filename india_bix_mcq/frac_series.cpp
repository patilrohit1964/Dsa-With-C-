#include <iostream>
using namespace std;

int main()
{
    // Print series: 2, 1, (1/2), (1/4), ...

    int n = 1, m = 2, p;

    cout << m << "," << n << ",";

    for (p = 1; p <= 10; p++)
    {
        m = m * 2;
        cout << "1/" << m * 1 << ",";
    }

    return 0;
}