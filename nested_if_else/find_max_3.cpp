#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << "Maximum: " << a << endl;
        }
        else
        {
            cout << "Maximum: " << c << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "Maximum: " << b << endl;
        }
        else
        {
            cout << "Maximum: " << c << endl;
        }
    }

    return 0;
}
