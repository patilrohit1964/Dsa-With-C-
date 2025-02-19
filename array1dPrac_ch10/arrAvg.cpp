#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    double avg;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    avg = sum / n;

    cout << "The Average of the Array is: " << avg << endl;

    return 0;
}
