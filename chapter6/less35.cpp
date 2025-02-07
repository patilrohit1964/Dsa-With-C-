#include <iostream>
using namespace std;

int main()
{
    // Print series: 544, 509, 474, 439, ...

    int n = 544;

    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            cout << n;
            n = n - 35;
        }
        else
        {
            cout << ", " << n;
            n = n - 35;
        }
    }

    return 0;
}