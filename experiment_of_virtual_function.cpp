#include <iostream>
#include <string>

using namespace std;

class base
{
public:
    int a = 5;
     void func()
    {
        cout << "base class is called" << endl;
    }
};

class shape
{
public:
    virtual void func()
    {
        cout << "shaped is called";
    }
};

class derived : public base, public shape
{
public:
    void func()
    {
        cout << "derived class is called";
    }
};

int main()
{
    derived obj;
    shape *ptr;
    ptr = &obj;
    ptr->func();
    return 0;
}