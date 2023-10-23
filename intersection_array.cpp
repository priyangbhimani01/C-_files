#include <iostream>
#include <string>

using namespace std;

int main()
{
    int size, n;
    cout << "enter the size of array";
    cin >> size >> n;

    int arrayi[size];
    int arrayj[n];

    for (int i = 0; i < size; i++)
    {
        cout << "enter the array";
        cin >> arrayi[i];
    }

    for (int j = 0; j < n; j++)
    {
        cout << "enter the elemnt";
        cin >> arrayj[j];
    }
    int count = 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arrayi[i] == arrayj[j])
            {
                cout << arrayi[i]<<endl;
                arrayi[i]=INT_MIN;
                count++;
            }
        }
    }
    if (count == 1)
    {
        cout << "-2";
    }
    else
    {
        cout << "number of count is "<<count;
    }
}