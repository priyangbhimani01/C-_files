#include <iostream>
using namespace std;

int fibo(int a);

int main()
{

    int n, i;
    cout << "enter the term";
    cin >> n;

    cout << fibo(n);

    return 0;
}

int fibo(int a)
{
    if (a < 2)
    {
        return a;
    }
    return fibo(a - 2) + fibo(a - 1);
}
