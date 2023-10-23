#include <iostream>
using namespace std;

int sum(int a);

int main()
{

    int n, i;
    cout << "enter the term";
    cin >> n;

    cout << sum(n);

    return 0;
}

int sum(int a)
{
    if (a == 1)
    {
        return 1;
    }
    return a + sum(a - 1);
}