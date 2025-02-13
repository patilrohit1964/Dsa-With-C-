#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 0; j < rows - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << ((j % 2) == 0 ? "-" : "|") << " ";
        }
        cout << endl;
    }
    return 0;
}
