#include <iostream>

using namespace std;

int main()
{
    int userNumber, lNumber = 0, number;
    cout << "Enter your number: ";
    cin >> userNumber;
    for(int n = userNumber; n > 0; n /= 10)
    {
        lNumber = n%10;
        if(lNumber % 2 == 0)
        {
            number += lNumber;
        }
    }
    cout << "Sum of even numbers are - "<< number;
    return 0;
}
