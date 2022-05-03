#include <iostream>

using namespace std;

int main()
{
    int userNumber, number;
    cout << "Enter your number: ";
    cin >> userNumber;
    for(int n = userNumber; n > 0; n /= 10)
    {
        if((n%10) % 2 == 0)
        {
            number += n%10;
        }
    }
    cout << "Sum of even numbers are - "<< number;
    return 0;
}
