#include <iostream>

using namespace std;

int main()
{
    char text[255] = {};
    int counter = 0;
    cout << "Enter your text till 255 symbols:" << endl;
    cin.getline(text, 255);
    for(int i = 0;text[i] != 0; i++)
    {
        if((text[i-1] >= 'a' && text[i-1] <= 'z' && text[i] >= 'A' && text[i] <= 'Z') ||
           (counter == 0 && (text[i] >= 'a' && text[i] <= 'z' || text[i+1] >= 'A' && text[i+1] <= 'Z')||
            text[i] >= 'A' && text[i] <= 'Z' && text[i+1] >= 'a' && text[i+1] <= 'z') ||
           (text[i-1] == ' ' && (text[i] >= 'a' && text[i] <= 'z' || text[i] >= 'A' && text[i] <= 'Z')))
        {
            counter++;
        }
    }
    if(counter > 1)
        cout << "Here is " << counter << " words" << endl;
        else if(counter == 1)
            cout << "Here is " << counter << " word" << endl;
        else if(counter == 0)
            cout << "Here is nothing" << endl;
    return 0;
}
