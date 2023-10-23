#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n, x;
    int ans = 0;
    int i = 0;
    cout << "Enter the decimal number ";
    cin >> n;

    while (n != 0)
    {
        x = n & 1;

        ans = ans + (x * pow(10, i));
        i++;

        n = n >> 1;
    }

    cout << ans;
}