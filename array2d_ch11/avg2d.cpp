#include <iostream>
using namespace std;

int main()
{
    int r, c;

    cout << "Enter number of rows: ";
    cin >> r;
    cout << "Enter number of columns: ";
    cin >> c;

    int arr[r][c], sum = 0;
    int totalElements = r * c;

    cout << "Enter elements of the array:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }

    double average = (double)sum / totalElements;

    cout << "Average of all elements: " << average << endl;

    return 0;
}
