#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, x, y;

    cout << "Enter the binary number " << endl;
    cin >> n;
    int i = 0;
    int ans = 0;

    while (n != 0)
    {

        x = n % 10;

        if (x == 1)
        {
            ans = ans + pow(2, i);
                }

        i++;

        y = (n / 10);

        n = y;
    }

    cout << ans;
}