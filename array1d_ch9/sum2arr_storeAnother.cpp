#include <iostream>
using namespace std;

int main()
{
    int arr1[5] = {3, 2, 3, 4, 5}, arr2[5] = {1, 2, 3, 4, 5}, arr3[5] = {};

    int size = sizeof(arr1) / sizeof(arr1[0]);
    cout << "sum of both array values: ";
    for (int i = 0; i < size; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr3[i] << " ";
    }
    return 0;
}
