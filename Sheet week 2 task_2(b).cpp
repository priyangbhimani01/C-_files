#include <iostream>
using namespace std;

unsigned fibonacci_rec(unsigned n);

int main()
{
    int a, i;
    cout << "Enter the nth term which you want to print";
    cin >> a;

    fibonacci_rec(a);
}

unsigned fibonacci_rec(unsigned n)
{

    int f1, f2, f3, i;
    f1 = 1;

    f2 = 1;

    f3 = f1 + f2;

    for (i = 3; i < n; i++)
    {
        f1 = f2;
        f2 = f3;
        f3 = f1 + f2;
    }
    cout << f3;

    f3 = f1 + f2;

    return 0;
}