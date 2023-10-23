#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class simplecalculater
{
protected:
    int a;
    int b;

public:
    void data1(int x, int y)
    {
        a = x;
        b = y;
    }
};

class hybrid : public simplecalculater
{
public:
    void display(void)
    {
        cout << "the sum is " << a + b << endl;
        cout << "the substraction is " << a - b << endl;
        cout << "the multiplication is " << a * b << endl;
        cout << "the division is " << a / b << endl;

        cout << "the log is " << log(a) << endl;
        cout << "the squareroot is " << sqrt(a) << " and " << sqrt(b) << endl;
        cout << "the square is " << a * a << " and " << b * b << endl;
        cout << "sin of a and b is " << sin(a) << " and " << sin(b) << endl;
    }
};

int main()
{
    hybrid cal;
    int x, y;
    cout << "enter the value of x and y " << endl;
    cin >> x >> y;
    cal.data1(x, y);
    cal.display();
}