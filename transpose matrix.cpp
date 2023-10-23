#include <iostream>
using namespace std;

int main()
{
    int i, j;

    int array[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> array[i][j];
        }
        cout << endl;
    }

    cout << "normal matrix" << endl
         << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    cout << "transposed matrix" << endl
         << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << array[j][i] << " ";
        }
        cout << endl;
    }
}