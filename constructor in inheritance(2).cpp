#include <iostream>
using namespace std;

class employee
{
public:
    int a, b;
    employee(int x, int y)
    {
        a = x;
        b = y;
        cout << "kem cho" << endl;
    }
};

class employer : public employee
{
public:
    employer(int x, int y) : employee(x, y) {}
    void display(void)
    {
        cout << a << endl;
        cout << b << endl;
    }
};

int main()
{
    employer dis(4, 5);
    dis.display();
}