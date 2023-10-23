#include <iostream>
#include <string>

using namespace std;

int binarysearch(int even[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + (end-start)/2);

    while (start <= end)
    {
        if (even[mid] == key)
        {
            return mid;
        }
        if (even[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {5, 7, 12, 25, 34, 65};
    int odd[5] = {3, 7, 23, 46, 76};

    int index = binarysearch(even, 6, 34);

    cout << "index of the elemnt is " << index;
}