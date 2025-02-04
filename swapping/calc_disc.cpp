#include <iostream>
using namespace std;

int main()
{
    float price, discount, finalPrice;

    cout << "Enter the original price: ";
    cin >> price;

    cout << "Enter discount percentage: ";
    cin >> discount;

    finalPrice = price - (price * discount / 100);

    cout << "Final price after discount: Rs. " << finalPrice << endl;

    return 0;
}
