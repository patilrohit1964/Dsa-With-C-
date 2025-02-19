#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, sum = 0;

    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "even numbers of array: ";
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
    return 0;
}
