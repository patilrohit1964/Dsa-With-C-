#include <iostream>
using namespace std;

int main()
{
    int rows = 7;
    int cols = 5;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (j == 0 || (j == 4 && (i != 0 && i != 3 && i != 6)) ||
                (i == 0 && j < 4) || (i == 6 && j < 4))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
