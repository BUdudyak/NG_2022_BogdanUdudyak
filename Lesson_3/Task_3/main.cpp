#include <iostream>

using namespace std;

int main()
{
    int userNumber = 0, array[20] = {0}, index = 0;
    cout << "Enter numbers: " << endl;
    while(index != 20)
    {
        cout << index+1 << " element: ";
        cin >> array[index];
        if(array[index] == 0)
            break;
        else if(array[index] < 0)
            continue;
        index++;
    }
    index = 0;
    for(int i = 0; i < 20; i++)
    {
        if(index < array[i])
            index = array[i];
    }
    for(int k = 0; k < index; k++)
    {
        for(int j = 0; j < 20; j++)
        {
            if(array[j] > k)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
