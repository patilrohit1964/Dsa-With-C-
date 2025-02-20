#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    int arr[r][c], temp;

    cout << "Enter elements of the array:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    int size = r * c;
    int oneD[size], index = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            oneD[index++] = arr[i][j];
        }
    }

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (oneD[j] > oneD[j + 1])
            {
                temp = oneD[j];
                oneD[j] = oneD[j + 1];
                oneD[j + 1] = temp;
            }
        }
    }

    index = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = oneD[index++];
        }
    }

    cout << "Sorted array in ascending order:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Sorted array in descending order:\n";
    for (int i = r - 1; i >= 0; i--)
    {
        for (int j = c - 1; j >= 0; j--)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
