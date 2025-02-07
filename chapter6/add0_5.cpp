#include <iostream>
using namespace std;

int main()
{
    // Print series:  1.5, 2.3, 3.1, 3.9, ...
    double n = 1.5;
    int p;

    cout << n;

    for (p = 1; p < 10; p++)
    {
        n = 1.5 + p * 0.8;
        cout << "," << n;
    }

    return 0;
}