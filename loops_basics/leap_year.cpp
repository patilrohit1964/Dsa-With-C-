#include <iostream>
using namespace std;

int main()
{
    int year = 2000;

    while (year <= 3000)
    {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            cout << year << " ";
        }
        year++;
    }

    return 0;
}
