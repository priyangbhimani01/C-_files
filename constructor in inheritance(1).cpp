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

class student
{
public:
    int c, d;

    student(int z, int w)
    {
        c = z;
        d = w;
        cout << "how are you" << endl;
    }
};

class employer : public employee, public student
{
public:
    int q;
    employer(int x, int y, int z, int w, int p) : employee(x, y), student(z, w)
    {
        q = p;
        cout << "hello" << endl;
    }

    void display(void)
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << q << endl;
    }
};

int main()
{
    employer dis(4, 5, 6, 7, 8);
    dis.display();
}