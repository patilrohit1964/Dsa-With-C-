#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = i; j <= 5; j++)
        {
            if (j % 2 == 0)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << 1 << " ";
            }
        }
        cout << endl;
    }
}