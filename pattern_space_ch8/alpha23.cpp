#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            if (j == 0 || j == 6 || (i == j && i > 3) || (i + j == 6 && i > 3))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
