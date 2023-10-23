#include <iostream>
#include <string>

using namespace std;

bool search(int array[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (array[i] == key)
        {
            return 1;
        }
        
    } return 0;
}

int main()
{
    int size;
    cout << "Enter the size";
    cin >> size;
    int key;
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the elements ";
        cin >> array[i];
    }
    cout << endl;

    cout << "Enter the key elements ";
    cin >> key;
    cout << endl;

    bool found = search(array, size, key);

    if (found)
    {
        cout << "Element is present in this array";
    }
    else
    {
        cout << "element is absent here ";
    }
}