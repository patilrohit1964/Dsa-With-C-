#include <iostream>
using namespace std;

void printNtoOne(int n)
{
    if (n < 1)
        return;
    cout << n << " ";
    printNtoOne(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printNtoOne(n);
    return 0;
}
