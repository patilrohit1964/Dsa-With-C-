#include <iostream>
using namespace std;

int main()
{
    for (int i = 2; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = 5; j > i; j--)
        {
            cout << "  ";
        }
        for (int j = i; j < 5; j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}