#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << "  ";
        for (char ch = 'A' + i - 1; ch >= 'A'; ch--)
            cout << ch << " ";
        cout << endl;
    }
    return 0;
}
