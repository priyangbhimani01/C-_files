#include <iostream>
#include <string>
using namespace std;

int b = 1;
class employee
{
private:
    int a, b;

public:
    employee()
    {
        a = 0;
        cout << "the number is " << a << endl;
    }

    employee(int num)
    {
        a = num;
        cout << "the number is " << a << endl;
    }
    employee(int x, int y)
    {
        a = x;
        b = y;
        cout << "the number is " << a << b << endl;
    }

    ~employee()
    {

        cout << "the destructor is called for " << a << endl;
    }
};

int main()
{
    employee n1;
    employee n2(3);
    employee n3(7, 8);
    cout << "hello" << endl;
}