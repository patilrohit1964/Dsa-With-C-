#include <iostream>
using namespace std;

void printTable(int num)
{
    cout << "Multiplication Table of " << num << ":\n";
    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    printTable(num);

    return 0;
}
