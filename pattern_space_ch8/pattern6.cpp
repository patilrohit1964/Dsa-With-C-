#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j < i; j++)
            cout << "  ";
        for (int j = i; j <= n; j++)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
