#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex(int x, int y)
    {

        a = x;
        b = y;
    }

    complex(int x)
    {
        a = x;
        b = 0;
    }

    complex()
    {
        a = 5;
        b = 4;
    }
    void get(void)
    {
        cout << a << endl;
        cout << b;
    }
};

int main()
{
    complex c(5, 7);
    c.get();
    complex p(5);
    p.get();
    complex r;
    r.get();
}