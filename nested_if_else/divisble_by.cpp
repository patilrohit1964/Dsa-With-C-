#include <iostream>
using namespace std;

int main()
{
    int num, n;

    cout << "Enter two numbers (num, n): ";
    cin >> num >> n;

    if (n == 0)
    {
        cout << "Division by zero is not allowed!" << endl;
    }
    else
    {
        if (num % n == 0)
            cout << num << " is divisible by " << n << endl;
        else
            cout << num << " is not divisible by " << n << endl;
    }

    return 0;
}
