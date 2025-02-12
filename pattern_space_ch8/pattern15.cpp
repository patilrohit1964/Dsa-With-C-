#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
            cout << "  ";
        for (char ch = 'A'; ch < 'A' + i; ch++)
            cout << ch << " ";
        cout << endl;
    }
    return 0;
}
