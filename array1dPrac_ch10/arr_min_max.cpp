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
        cout << "Reverse Number of array: ";
    for (int i = n-1; i >=0; i--)
    {
        cout << arr[i]<< " "; 
    }

    return 0;
}
