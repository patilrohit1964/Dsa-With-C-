#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nMultiplication Tables:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Table for " << arr[i] << ":\n";
        for (int j = 1; j <= 10; j++)
        {
            cout << arr[i] << " x " << j << " = " << arr[i] * j << endl;
        }
        cout << endl;
    }

    return 0;
}
