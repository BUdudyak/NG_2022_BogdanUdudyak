#include <iostream>

using namespace std;

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    for(int i = 0; i < size; i++)
    {
        for(int k = 0; k < size; k++)
        {
            if(k == 0 || i == 0 || k == size-1 || i == size-1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
