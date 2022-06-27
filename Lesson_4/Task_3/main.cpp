#include <iostream>

using namespace std;

int main()
{
    char symbol[255] = {};
    cout << "Enter sentence till 255 symbols" << endl;
    cin.getline(symbol, 255);
    for(int i = 1; i <= 26; i++)
    {
        int k = 0;
        cout << "#" << i << " ";
        while(symbol[k] != 0)
        {
            if(symbol[k] >= 'a' && symbol[k] <= 'z' || symbol[k] >= 'A' && symbol[k] <= 'Z')
            {
                if(symbol[k] == 'a' || symbol[k] == 'A')
                {
                    symbol[k] += 25;
                    cout << char(symbol[k]);
                }
                else
                {
                    cout << char(symbol[k] -= 1);
                }
            }
            else
            {
                cout << char(symbol[k]);
            }
            k++;
        }
        cout << endl << endl;
    }

    return 0;
}
