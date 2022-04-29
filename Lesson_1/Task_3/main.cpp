#include <iostream>

using namespace std;

int main()
{
    int age, answer;
    cout << "Enter your age: ";
    cin >> age;
    if(age > 10)
    {
        cout << "Do you study? (1/0):";
        cin >> answer;
        if(answer == 1)
        {
            cout << "You are awesome!";
        }
        else if(answer == 0)
        {
            cout << "Why?";
        }
        else
        {
            cout << "ERROR!";
        }
    }
    else
    {
        cout << "WOW! You're already so big.";
    }
    if(age <= 0)
    {
        cout << "ERROR!";
    }
    return 0;
}
