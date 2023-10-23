#include <iostream>
#include <string>

using namespace std;

void sort01(int array[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        if (array[start] == 0)
        {
            start++;
        }
        else if (array[end] == 1)
        {
            end--;
        }
        else 
        {
            int temp = array[start];
            array[start] = array[end];
            array[end] = temp;

            start++;
            end--;
        }
    }
}

int main()
{
    int size;
    cout << "enter the size od array";
    cin >> size;

    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the array";
        cin >> array[i];
    }

    sort01(array, size);
    for (int i = 0; i < size; i++)
    {
        cout << array[i];
    }
}