#include <iostream>

using namespace std;

int main()
{
    int k = 0, j = 0;
    char fString[256] = {}, sString[256] = {};
    cout << "No more than 255 symbols!!!!" << endl;
    cout << "Enter your first string: ";
    cin.getline(fString, 256);
    cout << "Enter your second string: ";
    cin.getline(sString, 256);
    for(int i = 0; fString[i] != 0 || sString[i] != 0; i++)
    {
        if(fString[i] != 0 && fString[i] != ' ')
            k++;
        if(sString[i] != 0 && sString[i] != ' ')
            j++;
    }
    if(k > j)
        cout << "First string longer";
    else if(k < j)
        cout << "Second string longer";
    else if(k == j)
        cout << "Strings are the same";
    return 0;
}
