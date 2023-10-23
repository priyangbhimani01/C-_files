#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number(void)
    {
        a = 5;
    }

    // number(int num){
    //  a=num;
    // }

    number(int num)
    {
        a = num;
    }

    number(number &x)
    {
        a = x.a; // This is  the copy constructor.
                 // If we do not write this then compiler will give it's own copy constructor.
    }

    void display()
    {
        cout << "the value of a is " << a << endl;
    }
};

int main()
{
    number x, y, z(35);
    x.display();
    y.display();
    z.display();

    number z1(z);
    z1.display();
}