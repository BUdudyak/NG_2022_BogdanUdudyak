#include <iostream>
#include <math.h>

using namespace std;

int a, b, c;

int input()
{
    cout << "Enter numbers for ax^2+bx-c=0" << endl;
    cout << "Let's solve for this formula  ->  D=b^2-4ac"<< endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    return a, b, c;
}

void discriminant(int a = 0, int b = 0, int c = 0)
{
    double D = 0;

    D = (b*b - 4*a*c);
    if(D < 0)
    {
        cout << "there are no roots";
    }
    else if(D > 0)
    {
        cout << "x1 = " << ((-b + sqrt(D))/2*a) << endl;
        cout << "x2 = " << ((-b - sqrt(D))/2*a);
    }
    else if(D == 0)
    {
        cout << "x = " << ((-b +sqrt(D))/2*a);
    }
    return;
}

int main()
{
    input();
    discriminant(a, b, c);
    return 0;
}
