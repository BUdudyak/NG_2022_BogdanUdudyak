#include <iostream>

using namespace std;

int main()
{
    int number = 0, userNumber = 0, checkNumber = 0;
    cout << "Enter size of array: ";
    cin >> number;
    int array[number];
    for(int i = 0; i < number; i++)
    {
        cout << "Enter " << i + 1 << " array's element: ";
        cin >> userNumber;
        array[i] = userNumber;
    }
    cout << "Number that you want to check: ";
    cin >> checkNumber;
    for(int i = 0; i < number; i++)
    {
        if(array[i] == checkNumber)
        {
            userNumber = -1;
            cout << "I know that number" << endl;
        }
    }
    if(userNumber != -1)
    {
        cout << "I don't know that number" << endl;
    }

    return 0;
}
