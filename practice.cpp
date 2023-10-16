#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "maximum: " << a << endl;
            if (b > c)
            {
                cout << "minimum: " << c << endl;
            }
            else
            {
                cout << "minimum: " << b << endl;
            }
        }
        else
        {
            cout << "maximum: " << c << endl;
            cout << "minimum: " << b << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << "maximum: " << b << endl;
            if (c > a)
            {
                cout << "minimum: " << a << endl;
            }
            else
            {
                cout << "minimum: " << c << endl;
            }
        }
        else
        {
            cout << "maximum: " << c << endl;
            cout << "minimum: " << a << endl;
        }
    }
    return 0;
}