#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    complex(char p)
    {
        a = p;
        b = 0;
    }

    void printdata(void)
    {
        cout << "Complex number is " << a << " + " << b << "i" << endl;
        ;
    }
};

int main()
{
    complex c(5, 4);
    c.printdata();
    complex z(6);
    z.printdata();
}