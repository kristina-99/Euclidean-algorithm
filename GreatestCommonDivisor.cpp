#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int temp = 0;
    
    if (b > a)
    {
        temp = a;
        a = b;
        b = temp;
    }

    while (a % b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    if (b == 0)
    {
        cout << a;
    }
    else
    {
        cout << b;
    }
}

