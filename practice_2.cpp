#include <iostream>
#include <string>

using namespace std;

class employee
{
    int a;
    static int counter;

public:
    void data(int x)
    {

        a = x;
        cout << endl;
        counter++;
    }
    void display()
    {
        cout << counter << endl;
    }
};

int employee ::counter = 100;

int main()
{
    employee id;
    int x;
    cin >> x;
    id.data(x);
    id.display();
    id.data(x);
    id.display();
    id.data(x);
    id.display();
}