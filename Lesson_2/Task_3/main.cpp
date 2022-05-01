#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    cout << "Enter - ";
    cin >> num;
    int sum = 0;
    int lnum = num % 10;
    for(int n = num; n > 0; n /= 10)
    {
        if((n == lnum) || (n%10 == n/10%10))
            sum += n%10;
    }
    cout << "Sum - " << sum;
    return 0;
}
