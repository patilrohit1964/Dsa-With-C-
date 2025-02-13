#include <iostream>
using namespace std;

int main()
{
    char start = 'A'; // Starting character
    int rows = 5;     // Number of rows

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "  ";
        }
        for (char ch = start + i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}
