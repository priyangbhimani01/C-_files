#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(3);
    s.insert(4);
    s.insert(23);
    s.insert(4);

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "5 is present or not " << s.count(5) << endl;
    

    for (auto i : s)
    {
        cout << i << " ";
    }
}
