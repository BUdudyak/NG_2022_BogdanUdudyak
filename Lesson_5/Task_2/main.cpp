#include <iostream>

using namespace std;

int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void finder(int number, int counter)
{
    if(counter < 10)
    {
        if(number != array[counter])
        {
            return finder(number, counter + 1);
        }
        if(number == array[counter])
        {
            cout << "This number is in array!";
            return;
        }
    }
    cout << "This number isn't in array!";
}

int main()
{
    int counter = 0;
    int number;
    cout << "Enter the number what u want to find: " << endl;
    cin >> number;
    finder(number, counter);
    return 0;
}
