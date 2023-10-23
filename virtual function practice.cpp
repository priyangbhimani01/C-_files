#include <iostream>
#include <string>

using namespace std;

class base
{
private:
    float salary;

public:
    string name;
    virtual void display(string x, float y)
    {
        name = x;
        salary = y;

        cout << "The name of the employee is " << name << endl;
        cout << "The salary of " << name << " is " << salary << endl;
    }
};

class derived : public base
{
private:
    int age;
    string favourite_food;

public:
    void display(string a, float b)
    {
        favourite_food = a;
        age = b;

        cout <<  "employee's age is " << age << endl;
        cout << "employee's favourite food is " << favourite_food << endl;
    }
};

int main()
{
    base data1;
    derived data2;
    base *ptr;
    ptr = &data1;

    ptr->display("panipuri", 19);
}
