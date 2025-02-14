#include <iostream>
using namespace std;

int main()
{
    int rows = 7;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows * 2 - 1; j++)
        {
            if (j == i || j == (rows * 2 - 2 - i) && i < rows - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
