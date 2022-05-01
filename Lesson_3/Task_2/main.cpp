#include <iostream>
#include <random>
#include <time.h>
#include <math.h>

using namespace std;

int main()
{
    srand(time(0));
    int array1[4], array2[4], number1 = 0, number2 = 0, helper = -1;
    for(int i = 0; i < 4; i++)
    {
        array1[i] = rand()%9;
        array2[i] = rand()%9;
    }
    for(int i = 4; i > 0; i--)
    {
        helper += 1;
        if(array1[i] != 0)
        {
            number1 += array1[i] * pow(10, helper);
        }
        if(array2[i] != 0)
        {
            number2 += array2[i] * pow(10, helper);
        }
    }
    cout << number1 << endl << number2 << endl;
    if(number1 > number2)
        cout << number1 << " > " << number2;
    if(number1 == number2)
        cout << number1 << " = " << number2;
    if(number1 < number2)
        cout << number1 << " < " << number2;
    return 0;
}
