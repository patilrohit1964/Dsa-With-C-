#include <iostream>
using namespace std;

int main()
{
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if ((i == 0 || i == 6) && (j > 0 && j < 4) || (j == 0 || j == 4) && (i > 0 && i < 6))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
