#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    int arr1[r][c], arr2[r][c], sum[r][c];

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "Sum of the two matrices:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
