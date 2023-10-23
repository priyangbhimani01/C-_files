#include <iostream>
#include <string>

using namespace std;

class employee
{
private:
    int a, b;
    float c, d;

public:
    employee()
    {
        a = 4;
        b = 5;

        cout << "real number is " << a << endl;
        cout << "imaginary number is " << b << endl;
    }
};

int main()
{
    employee obj1;

    return 0;
}