#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a < b)
        cout << "Minimum: " << a << endl;
    else
        cout << "Minimum: " << b << endl;

    return 0;
}
