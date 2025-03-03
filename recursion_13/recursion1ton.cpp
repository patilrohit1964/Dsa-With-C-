#include <iostream>
using namespace std;

void printOneToN(int n, int current = 1)
{
    if (current > n)
        return;
    cout << current << " ";
    printOneToN(n, current + 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printOneToN(n);
    return 0;
}
