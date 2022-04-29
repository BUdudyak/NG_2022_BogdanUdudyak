#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int mPrice = 0, vPrice = 0, cpuPrice = 0;
    float price, discount = 0;
    cout << "Motherboard price: ";
    cin >> mPrice;
    cout << "Videocard price: ";
    cin >> vPrice;
    cout << "CPU price: ";
    cin >> cpuPrice;
    cout << "Discount: ";
    cin >> discount;
    price = (mPrice + vPrice + cpuPrice) - (mPrice + vPrice + cpuPrice)*(discount / 100);
    cout << "Your PC will cost - " << price << "$";
    return 0;
}
