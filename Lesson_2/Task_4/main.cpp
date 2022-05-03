#include <iostream>

using namespace std;

int main()
{
    int size, value = 2;
    while(size <= 4)
    {
        cout << "Enter christmas tree's(not less than 5!): ";
        cin >> size;
    }
    for(int i = 0; i < size; i++)
    {
        for(int j = size; j > i-value; j--)
        {
            cout << " ";
        }
        for(int k = -1; k < i-value; k++)
        {
            cout << "*";
        }
        if(size % 2 == 0)
            value = 3;
        for(int k = 0; k < i-value; k++)
        {
            cout << "*";
        }
        value = 2;
        cout << endl;
    }
    for(int i = 0; i < size; i++)
    {
        cout << " ";
        if(i == size - 1)
            cout << "*";
    }
    return 0;
}
