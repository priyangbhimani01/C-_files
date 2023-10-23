#include <iostream>
using namespace std;

int fac(int x);
int main()
{
    int n;
    cout << "enter the value";
    cin >> n;
    cout << fac(n);
}

int fac(int x)
{

    if (x <= 1)
    {
        return 1;
    }
    return x * fac(x - 1);
}