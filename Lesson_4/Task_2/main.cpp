#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    char sentence[255] = {};
    cout << "No more than 255 letters!!!";
    cout << "Enter your sentence: " << endl;
    cin.getline(sentence, 255);
    while(sentence[i] != 0)
    {
        if(i%2 == 0)
        {
            if(sentence[i] == 'a' || sentence[i] == 'e' ||
               sentence[i] == 'y' || sentence[i] == 'u' ||
               sentence[i] == 'i' || sentence[i] == 'o' ||
               sentence[i] == 'A' || sentence[i] == 'E' ||
               sentence[i] == 'Y' || sentence[i] == 'U' ||
               sentence[i] == 'I' || sentence[i] == 'O')
                cout << sentence[i];
        }
        i++;
    }
    return 0;
}
