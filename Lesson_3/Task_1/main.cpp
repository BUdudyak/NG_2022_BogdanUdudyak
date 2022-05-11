#include <iostream>

using namespace std;

int main()
{
    int number = 0, userNumber = 0;
    cout << "Enter size of array: ";
    cin >> number;
    int array[number];
    for(int i = 0; i < number; i++)
    {
        cout << "Enter " << i + 1 << " array's element: ";
        cin >> array[i];
    }
    cout << "Number that you want to check: ";
    cin >> userNumber;
    for(int i = 0; i < number; i++)
    {
        if(array[i] == userNumber)
        {
            cout << "I know that number" << endl;
            break;
        }
        if(i+1 == number)
        {
            cout << "I don't know that number" << endl;
        }
    }
    return 0;
}
