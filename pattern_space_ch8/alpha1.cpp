#include <iostream>
using namespace std;

int main()
{
    int rows = 7, cols = 5; // Dimensions of the 'A' pattern

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            //   print cols first middle and last row
            if (j == 0 || j == cols - 1 || i == 0 || i == 2)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}
