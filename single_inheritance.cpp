#include <iostream>
using namespace std;

class base
{
private:
    int data1;

public:
    int data2;
    int data3;
    void setdata()
    {
        data1 = 10;
        data2 = 20;
    }

    int fun1(void)
    {
        return data1;
    }

    int fun2(void)
    {
        return data2;
    }
};

class derived : public base
{

public:
    int data3;
    void display()
    {
        setdata();
        cout << "the data 1 is " << fun1() << endl;
        cout << "the data 2 is " << data2 << endl;
        data3 = fun1() * fun2();
        cout << "the data 3 is " << data3 << endl;
    }
};

int main()
{
    derived x;
    x.display();
}
