#include <iostream>

using namespace std;


void drawFraimeTopBottom(int size1)
{
    if(size1 > 0)
    {
        cout << "*";
        return drawFraimeTopBottom(size1 - 1);
    }
    cout << endl;
}

void drawFraimeLeftRight(int size1, int size2, int size3)
{
    int k = size1;
    if(size2 >= 1)
    {
        if(size1 == size2)
            cout << "*";
        else
            cout << " ";
        if(size2 == 2)
            cout << "*";
        return drawFraimeLeftRight(size1, size2 - 1, size3);
    }
    cout << endl;
    if(size3 > 1)
        return drawFraimeLeftRight(k, k, size3 - 1);
}


int main()
{
    int size1 = 0, size2 = 0;
    cout << "Enter your size: ";
    cin >> size1;
    size2 = size1;
    drawFraimeTopBottom(size1);
    if(size1 > 2)
        drawFraimeLeftRight(size1, size2, size1 - 2);
    if(size1 > 1)
        drawFraimeTopBottom(size1);
    return 0;
}
