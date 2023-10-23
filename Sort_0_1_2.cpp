#include <iostream>
#include <string>

using namespace std;

void sort(int array[], int n)
{

    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == 0)
        {
            count0++;
        }
        else if (array[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

    cout << count0 << count1 << count2 << endl;
    int i = 0;
    while (count0 > 0)
    {
        array[i] = 0;
        count0--;
        i++;
    }
    while (count1 > 0)
    {
        array[i] = 1;
        count1--;
        i++;
    }
    while (count2 > 0)
    {
        array[i] = 2;
        count2--;
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i];
    }
}

int main()
{
    int size;
    cout << "enter the size of array";
    cin >> size;
    cout << endl;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter the array";
        cin >> array[i];
    }

    sort(array, size);
}