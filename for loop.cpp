#include <iostream>
using namespace std;
int main()
{
    int i, n;
    int sum = 0;
    cout << "enter the value of n: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
    }
    cout << sum;

    return 0;
}